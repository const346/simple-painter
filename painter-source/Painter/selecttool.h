#ifndef SELECTTOOL_H
#define SELECTTOOL_H

#include <QPoint>
#include "abstracttool.h"

class SelectTool : public AbstractTool
{
	Q_OBJECT

public:
	SelectTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~SelectTool();

private:
	QPoint point;
	bool selectActive;

protected:
	void canvasMouseMove(QMouseEvent*);
	void canvasMouseButtonRelease(QMouseEvent*);
	void canvasMouseButtonPress(QMouseEvent*);
};

#endif // SELECTTOOL_H
