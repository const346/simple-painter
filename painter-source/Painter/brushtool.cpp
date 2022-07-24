#include "StdAfx.h"
#include "brushtool.h"

BrushTool::BrushTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{

}

BrushTool::~BrushTool()
{

}

void BrushTool::canvasMouseMove(QMouseEvent *event)
{
	drawLine(&pixmap, prPos, event->posF());
	prPos = event->posF();

	canvas->update();
}

void BrushTool::canvasMouseButtonRelease(QMouseEvent *event)
{
	QPainter painter(canvas->getImage());
	painter.drawPixmap(0, 0, pixmap);
	isPreview = false;
}

void BrushTool::canvasMouseButtonPress(QMouseEvent *event)
{
	//Выбор цвета
	color = (event->button() == Qt::LeftButton) ? colors->getFG() : colors->getBG();

	//Задание размера
	size = ui->sliderSizeBrush->value();
	
	//Временный pixmap
	pixmap = QPixmap(canvas->getImage()->size());
	pixmap.fill(QColor(0,0,0,0));

	drawCircle(&pixmap, event->posF());
	prPos = event->posF();
	isPreview = true;
}


void BrushTool::preview(QPaintDevice* device)
{
	if (isPreview)
	{
		QPainter painter(device);
		painter.drawPixmap(0, 0, pixmap);
	}
}

void BrushTool::drawLine(QPaintDevice* device, QPointF p1, QPointF p2)
{
	QPainter painter(device);
	if (canvas->isRestrictSelection() && canvas->isSA())
	{
		painter.setClipRect(canvas->getSARect());
	}
	painter.setCompositionMode(QPainter::CompositionMode_Source); //без учёта прозрачности цвета
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setPen(QPen(color, size, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
	painter.drawLine(p1, p2);

	canvas->update();
}

void BrushTool::drawCircle(QPaintDevice* device, QPointF point)
{
	QPainter painter(device);
	if (canvas->isRestrictSelection() && canvas->isSA())
	{
		painter.setClipRect(canvas->getSARect());
	}
	painter.setCompositionMode(QPainter::CompositionMode_Source); //без учёта прозрачности цвета
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setPen(Qt::NoPen);
	painter.setBrush(color);
	painter.drawEllipse(point, size/2, size/2); 

	canvas->update();
}