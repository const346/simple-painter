#ifndef IMAGETOOL_H
#define IMAGETOOL_H

#include "abstracttool.h"

class ImageTool : public AbstractTool
{
	Q_OBJECT

public:
	ImageTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~ImageTool();

private:
	QPoint pos;
	QPoint dragPoint;

	bool isImage, isDrag;
	QImage image;

	void draw(QPaintDevice* device, bool preview);

protected:
	void canvasMouseMove(QMouseEvent*);
	void canvasMouseButtonRelease(QMouseEvent*);
	void canvasMouseButtonPress(QMouseEvent*);
	void preview(QPaintDevice* device);
	void enable();
	void disable(bool apply);
};

#endif // IMAGETOOL_H
