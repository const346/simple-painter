#ifndef LINETOOL_H
#define LINETOOL_H

#include "abstracttool.h"

class LineTool : public AbstractTool
{
	Q_OBJECT

public:
	LineTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~LineTool();

	enum StateLineTool {SetPoints = 0, FindMovePoint = 1, MovePoint = 3};

private:
	QVector<QPoint> points;
	QPoint mp;
	
	StateLineTool state;

	int width;
	int radius;
	int indexMoveP;
	
	void draw(QPaintDevice* device, bool preview);

	int findIndexPoint(const QVector<QPointF>& points, const QPointF& pos, qreal radius);

protected:
	void canvasMouseMove(QMouseEvent*);
	void canvasMouseButtonPress(QMouseEvent*);
	void canvasMouseButtonRelease(QMouseEvent*);

	void preview(QPaintDevice* device);

	void enable();
	void disable(bool apply);

public slots:
	void sizeChanged(int i);
};

#endif // LINETOOL_H
