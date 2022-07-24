#include "StdAfx.h"
#include "takecolortool.h"

TakeColorTool::TakeColorTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{
	
}

TakeColorTool::~TakeColorTool()
{
	
}

void TakeColorTool::enable()
{
	AbstractTool::enable();
	canvas->setMouseTracking(true);
}

void TakeColorTool::disable(bool apply)
{
	AbstractTool::disable(apply);
	canvas->setMouseTracking(false);
}

void TakeColorTool::canvasMouseButtonPress(QMouseEvent* event)
{
	QRgb rgb = canvas->getImage()->pixel(event->pos());
	QColor color = QColor::fromRgba(rgb);
	if (event->button() == Qt::LeftButton)
		colors->setFG(color);
	else 
		colors->setBG(color);
}
