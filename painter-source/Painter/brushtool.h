#ifndef BRUSHTOOL_H
#define BRUSHTOOL_H

#include <QPointF>
#include <QPixmap>
#include <QColor>
#include <QLineF>

#include "abstracttool.h"

class BrushTool : public AbstractTool
{
	Q_OBJECT

public:
	BrushTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~BrushTool();

private:
	QColor color;
	qreal size;
	QPointF prPos;

	QPixmap pixmap;
	bool isPreview;

	void drawLine(QPaintDevice* device, QPointF p1, QPointF p2);
	void drawCircle(QPaintDevice* device, QPointF point);

protected:
	void preview(QPaintDevice* device);

	void canvasMouseMove(QMouseEvent*);
	void canvasMouseButtonRelease(QMouseEvent*);
	void canvasMouseButtonPress(QMouseEvent*);
};

#endif // BRUSHTOOL_H
