#ifndef ERASERTOOL_H
#define ERASERTOOL_H

#include "abstracttool.h"

class EraserTool : public AbstractTool
{
	Q_OBJECT

public:
	EraserTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~EraserTool();

private:
	void draw();
	QPoint p1, p2;
	QColor color;
	int size;

	QPolygon getEraserShape(const QPoint& p1, const QPoint& p2, int size);

protected:
	void canvasMouseMove(QMouseEvent*);
	void canvasMouseButtonPress(QMouseEvent*);
};

#endif // ERASERTOOL_H
