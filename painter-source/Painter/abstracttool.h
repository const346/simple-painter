#ifndef ABSTRACTTOOL_H
#define ABSTRACTTOOL_H

#include <QObject>
#include "painter.h"
#include "canvas.h"
#include "actioncolors.h"

class AbstractTool : public QObject
{
	Q_OBJECT

public:
	AbstractTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~AbstractTool();

	virtual void enable();
	virtual void disable(bool apply);

	virtual void preview(QPaintDevice* device);

	//События canvas
	virtual void canvasEvent(QEvent *);
	virtual void canvasMouseMove(QMouseEvent*);
	virtual void canvasMouseButtonRelease(QMouseEvent*);
	virtual void canvasMouseButtonPress(QMouseEvent*);
	virtual void canvasKeyPress(QKeyEvent*);

protected:
	Canvas* canvas;
	ActionColors* colors;
	Ui::PainterClass* ui;

private:
	QWidget* page;
};

#endif // ABSTRACTTOOL_H
