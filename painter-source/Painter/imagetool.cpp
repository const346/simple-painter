#include "StdAfx.h"
#include "imagetool.h"

ImageTool::ImageTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{

}

ImageTool::~ImageTool()
{

}

void ImageTool::enable()
{
	AbstractTool::enable();

	//начальные значения
	pos = QPoint(0,0);
	dragPoint = QPoint(0,0);
	isImage = false;
	isDrag = false;

	//Взять изображение из буфера обмена
	QClipboard *clipboard = QApplication::clipboard();
	image = clipboard->image();
	isImage = true;

	canvas->update();
}

void ImageTool::disable(bool apply)
{
	AbstractTool::disable(apply);

	//нарисовать
	if (apply)
		draw(canvas->getImage(), false);

	canvas->update();
}

void ImageTool::preview(QPaintDevice* device)
{
	draw(device, true);
}

void ImageTool::draw(QPaintDevice* device, bool preview)
{
	if (isImage)
	{
		QPainter painter(device);
		painter.drawImage(pos, image);

		if (preview)
		{
			QRect rectP = image.rect();
			rectP.moveTo(pos);
			painter.setPen(QPen(Qt::black, 1, Qt::DashLine));
			painter.drawRect(rectP.x(), rectP.y(), rectP.width()-1, rectP.height()-1);
		}
	}
}

void ImageTool::canvasMouseMove(QMouseEvent* event)
{
	if (isDrag)
	{
		QPoint mp = event->pos();
		pos = mp + dragPoint;
		canvas->update();
	}
}

void ImageTool::canvasMouseButtonPress(QMouseEvent* event)
{
	if (isImage)
	{
		if (event->button() == Qt::LeftButton)
		{
			QPoint mp = event->pos();
			QRect rectP = image.rect();
			rectP.moveTo(pos);
			
			if (rectP.contains(mp))
			{
				dragPoint = rectP.topLeft() - mp;
				isDrag = true;
			}
			else 
			{
				//нарисовать
				draw(canvas->getImage(), false);
				isImage = false;
			}
		}
		else
		{
			//нарисовать
			draw(canvas->getImage(), false);
			isImage = false;
		}
	}

	canvas->update();
}

void ImageTool::canvasMouseButtonRelease(QMouseEvent* event)
{
	isDrag = false;
}