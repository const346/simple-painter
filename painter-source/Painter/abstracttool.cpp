#include "StdAfx.h"
#include "abstracttool.h"

AbstractTool::AbstractTool(Canvas* _canvas, QWidget* _page, Ui::PainterClass* _ui, ActionColors* _colors)
{
	colors = _colors;
	canvas = _canvas;
	page = _page;
	ui = _ui;
}

AbstractTool::~AbstractTool()
{
	
}

void AbstractTool::canvasEvent(QEvent *event)					
{
	switch(event->type())
	{
		case QEvent::MouseMove:
		{
			QMouseEvent* mouseEvent = static_cast<QMouseEvent *>(event);
			canvasMouseMove(mouseEvent);
		}
		break;
		case QEvent::MouseButtonPress:
		{
			QMouseEvent* mouseEvent = static_cast<QMouseEvent *>(event);
			canvasMouseButtonPress(mouseEvent);
		}
		break;
		case QEvent::MouseButtonRelease:
		{
			QMouseEvent* mouseEvent = static_cast<QMouseEvent *>(event);
			canvasMouseButtonRelease(mouseEvent);
		}
		break;
		case QEvent::KeyPress:
		{
			QKeyEvent* keyEvent = static_cast<QKeyEvent *>(event);
			canvasKeyPress(keyEvent);
		}
	}
}

void AbstractTool::enable()
{
	ui->stackedParamTools->setCurrentWidget(page);
}

void AbstractTool::disable(bool apply)
{
	ui->stackedParamTools->setCurrentWidget(ui->pageNoTool);
}

void AbstractTool::canvasMouseMove(QMouseEvent *event)				{}
void AbstractTool::canvasMouseButtonRelease(QMouseEvent *event)	{}
void AbstractTool::canvasMouseButtonPress(QMouseEvent *event)		{}
void AbstractTool::canvasKeyPress(QKeyEvent *event)					{}

void AbstractTool::preview(QPaintDevice* device)						{}


