#include "StdAfx.h"
#include "erasertool.h"

EraserTool::EraserTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{
	
}

EraserTool::~EraserTool()
{
	
}

void EraserTool::canvasMouseMove(QMouseEvent* event)
{
	p1 = event->pos();
	draw();

	p2 = p1;
}

void EraserTool::canvasMouseButtonPress(QMouseEvent*  event)
{
	p1 = event->pos();
	p2 = event->pos();
	color = (event->button() == Qt::LeftButton)? colors->getBG() : colors->getFG();
	size = ui->sliderSizeEraser->value();
	
	draw();
}

QPolygon EraserTool::getEraserShape(const QPoint& p1, const QPoint& p2, int size)
{
	QPoint p = p1 - p2;
	
	if (p.isNull())
	{
		QPolygon poly(4);
		poly.setPoint(0, p1.x()+size/2, p1.y()+size/2);
		poly.setPoint(1, p1.x()+size/2, p1.y()-size/2);
		poly.setPoint(2, p1.x()-size/2, p1.y()-size/2);
		poly.setPoint(3, p1.x()-size/2, p1.y()+size/2);
		return poly;
	}

	int mx = p.x() > 0? 1 : -1;
	int my = p.y() > 0? 1 : -1;
	
	QPolygon poly(6);
	
	//p1 rect
	poly.setPoint(0, p1.x() + (size/2)*mx, p1.y() - (size/2)*my);
	poly.setPoint(1, p1.x() + (size/2)*mx, p1.y() + (size/2)*my);
	poly.setPoint(2, p1.x() - (size/2)*mx, p1.y() + (size/2)*my);
	
	//p2 rect
	poly.setPoint(3, p2.x() - (size/2)*mx, p2.y() + (size/2)*my);
	poly.setPoint(4, p2.x() - (size/2)*mx, p2.y() - (size/2)*my);
	poly.setPoint(5, p2.x() + (size/2)*mx, p2.y() - (size/2)*my);

	return poly;
}

void EraserTool::draw()
{
	QPainter painter(canvas->getImage());
	
	if (canvas->isRestrictSelection() && canvas->isSA())
	{
		painter.setClipRect(canvas->getSARect());
	}

	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setCompositionMode(QPainter::CompositionMode_Source);
	painter.setPen(Qt::NoPen);
	painter.setBrush(color);

	painter.drawPolygon(getEraserShape(p1, p2, size));
	canvas->update();
}