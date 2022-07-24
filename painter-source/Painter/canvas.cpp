#include "StdAfx.h"
#include "canvas.h"

#include "abstracttool.h"
#include "painter.h"

Canvas::Canvas(QWidget *parent)
	: QWidget(parent), fon(":/Painter/Resources/img/fon.bmp")
{
	QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	sizePolicy.setHorizontalStretch(0);
	sizePolicy.setVerticalStretch(0);
	setSizePolicy(sizePolicy);

	clearSA();
	tool = NULL;

	RS = true;
}

Canvas::~Canvas()
{

}

void Canvas::newImage(QColor color, QSize size)
{
	clearSA();

	image = QImage(size, QImage::Format_ARGB32);

	//закрасить цветом фона
	QPainter painter(getImage());
	painter.setCompositionMode(QPainter::CompositionMode_Source);
	painter.fillRect(QRect(0, 0, image.width(), image.height()), color);

	setMinimumSize(size);
}

bool Canvas::saveImage(const QString& fileName)
{
	return image.save(fileName);
}

bool Canvas::loadImage(const QString& fileName)
{
	clearSA();

	bool result = image.load(fileName);
	if (result == true) setMinimumSize(image.size());
	return result;
}

QImage* Canvas::getImage()
{
	return &image;
}

void Canvas::paintEvent(QPaintEvent *event)
{
	//рисование pixmap
	QPainter painter(this);

	painter.setBackground(QBrush(fon));
	painter.eraseRect(QRect(0, 0, width(), height()));

	painter.drawImage(0, 0, image);
	painter.end();

	//предпросмотр
	if (tool != NULL) tool->preview(this);

	//рисование Select Area 
	if (isSA())
	{
		painter.begin(this);
		painter.setCompositionMode(QPainter::CompositionMode_Exclusion);
		painter.setPen(QPen(Qt::white, 1, Qt::DashLine));
		painter.drawRect(SARect.x(), SARect.y(), SARect.width()-1, SARect.height()-1);

		if (RS)
		{
			painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
			QColor rColor = QColor(3, 70, 132, 150);

			QRect rectTop(0, 0, width() , SARect.y());
			painter.fillRect(rectTop, rColor); //сверх
			QRect rectBottom(QPoint(0, SARect.bottom()+1), QPoint(width(), height()));
			painter.fillRect(rectBottom, rColor);//сниз
			QRect rectLeft(QPoint(0, SARect.y()), QPoint(SARect.x()-1, SARect.bottom()));
			painter.fillRect(rectLeft, rColor); //слева
			QRect rectRight(QPoint(SARect.right()+1, SARect.y()), QPoint(width(), SARect.bottom()));
			painter.fillRect(rectRight, rColor); //справа
		}

		painter.end();
	}
}

bool Canvas::event(QEvent* event)
{
	bool result = QWidget::event(event);
	if (tool != NULL) tool->canvasEvent(event);

	return result;
}

//---------------------------------------------

void Canvas::removeTool(bool apply)
{
	if (tool != NULL) tool->disable(apply);
	tool = NULL;
}

void Canvas::setCurrentTool(AbstractTool* _tool)
{
	if (tool != NULL) tool->disable(true);
	tool = _tool;
	if (tool != NULL) tool->enable();
}

AbstractTool* Canvas::getCurrentTool()
{
	return tool;
}

//---------------------------------------------
void Canvas::clearSA()
{
	SARect.setSize(QSize(0, 0));
	changeSA();
	update();
}

void Canvas::setSAMaxSize()
{
	setSARect(QRect(0, 0, width(), height()));
	update();
}

QImage Canvas::getSA()
{
	return image.copy(SARect);
}

void Canvas::setSARect(QRect rect)
{
	QRect newSARect = rect.intersect(image.rect());
	if (SARect != newSARect)
	{
		SARect = newSARect;
		changeSA();
	}

	update();
}

QRect Canvas::getSARect()
{
	return SARect;
}

bool Canvas::isSA()
{
	return SARect.height() > 2 && SARect.width() > 2;
}

void Canvas::restrictSelection(bool restrict)
{
	RS = restrict;
	update();
}

bool Canvas::isRestrictSelection()
{
	return RS;	
}
//---------------------------------------------