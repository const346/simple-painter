#include "StdAfx.h"
#include "selecttool.h"

SelectTool::SelectTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{

}

SelectTool::~SelectTool()
{

}

void SelectTool::canvasMouseMove(QMouseEvent* event)
{
	if (selectActive)
	{
		QRect rect(point, event->pos());
		canvas->setSARect(rect.normalized());
	}
}

void SelectTool::canvasMouseButtonRelease(QMouseEvent* event)
{
	if (selectActive)
	{
		QRect rect(point, event->pos());
		canvas->setSARect(rect.normalized());
		selectActive = false;
	}
}

void SelectTool::canvasMouseButtonPress(QMouseEvent* event)
{
	if (event->button() == Qt::LeftButton)
	{
		point = event->pos();
		selectActive = true;
	}
	else if (event->button() == Qt::RightButton)
	{
		canvas->clearSA();
		selectActive = false;
	}
}