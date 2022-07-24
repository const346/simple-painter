#ifndef FILLTOOL_H
#define FILLTOOL_H

#include <QRgb>
#include "abstracttool.h"

class FillTool : public AbstractTool
{
	Q_OBJECT

public:
	FillTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~FillTool();

private:
	QStack<QPoint> stack;
	void floodFillScanlineStack(QImage* image, int x, int y, QRgb newColor);

protected:
	void canvasMouseButtonPress(QMouseEvent*);
};

#endif // FILLTOOL_H
