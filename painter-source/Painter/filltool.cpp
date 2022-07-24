#include "StdAfx.h"
#include "filltool.h"

FillTool::FillTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{

}

FillTool::~FillTool()
{
	
}

void FillTool::canvasMouseButtonPress(QMouseEvent* event)
{
	QColor color = (event->button() == Qt::LeftButton)? colors->getFG() : colors->getBG();
	floodFillScanlineStack(canvas->getImage(), event->x(), event->y(), color.rgba());
	canvas->update();
}

//The scanline floodfill algorithm using our own stack routines, faster(http://lodev.org/cgtutor/floodfill.html)
void FillTool::floodFillScanlineStack(QImage* image, int x, int y, QRgb newColor)
{
	QRgb oldColor = image->pixel(x, y);
	if (newColor == oldColor) return;
	stack.clear();

	int y1; 
	bool spanLeft, spanRight;
	int w = image->width();
	int h = image->height();

	stack.push(QPoint(x, y));

	while(!stack.isEmpty())
	{
		QPoint point = stack.pop();
		x = point.x();
		y = point.y();

		y1 = y;
		while(y1 >= 0 && image->pixel(x, y1) == oldColor) y1--;
		y1++;
		spanLeft = spanRight = 0;
		while(y1 < h && image->pixel(x, y1) == oldColor )
		{
			image->setPixel(x, y1, newColor);
			if(!spanLeft && x > 0 && image->pixel(x - 1, y1) == oldColor) 
			{
				stack.push(QPoint(x - 1, y1));
				spanLeft = 1;
			}
			else if(spanLeft && x > 0 && image->pixel(x - 1, y1) != oldColor)
			{
				spanLeft = 0;
			}
			if(!spanRight && x < w - 1 && image->pixel(x + 1, y1) == oldColor) 
			{
				stack.push(QPoint(x + 1, y1));
				spanRight = 1;
			}
			else if(spanRight && x < w - 1 && image->pixel(x + 1, y1) != oldColor)
			{
				spanRight = 0;
			} 
			y1++;
		}
	}
}