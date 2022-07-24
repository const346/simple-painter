#include "StdAfx.h"
#include "linetool.h"

LineTool::LineTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{
	connect(ui->sliderSizeLine, SIGNAL(valueChanged(int)), this, SLOT(sizeChanged(int)));
	
}

LineTool::~LineTool()
{
	
}


void LineTool::enable()
{
	AbstractTool::enable();

	sizeChanged(ui->sliderSizeLine->value());

	state = SetPoints;
	canvas->setMouseTracking(true);
}

void LineTool::disable(bool apply)
{
	AbstractTool::disable(apply);

	if (apply) draw(canvas->getImage(), false);
	points.clear();

	canvas->update();
	canvas->setMouseTracking(false);
}

void LineTool::canvasMouseMove(QMouseEvent* event)
{
	mp = event->pos();
	
	if (state == MovePoint)
		points[indexMoveP] = mp;

	canvas->update();
}

void LineTool::canvasMouseButtonRelease(QMouseEvent* event)
{
	if (state == MovePoint && event->button() == Qt::LeftButton)
	{
		state = FindMovePoint;
	}
}

void LineTool::canvasMouseButtonPress(QMouseEvent* event)
{
	int btn = event->button();
	switch(state)
	{
		case SetPoints:
		{
			if (btn == Qt::LeftButton)
			{
				points.append(event->pos());
			}
			else 
			{
				if (points.size() == 1)
				{
					points.clear();
				}
				else if (points.size() > 1)
				{
					state = FindMovePoint;
				}
			}
		}
		break;
		case FindMovePoint:
		{
			if (btn == Qt::LeftButton)
			{
				indexMoveP = -1;
				qreal r = radius;
				for (int i = 0; i < points.size(); i++)
				{
					qreal x = points[i].x() - event->x();
					qreal y = points[i].y() - event->y();
					qreal len = qSqrt(x*x + y*y);
					if (len < r)
					{
						r = len;
						indexMoveP = i;
					}
				}
				
				if (indexMoveP != -1)
				{
					state = MovePoint;
				}
				else
				{
					//Нарисовать на pixmap
					draw(canvas->getImage(), false);
					state = SetPoints;
					points.clear();
					
					//...
					if (btn == Qt::LeftButton) points.append(event->pos());
				}
			}
			else if (btn == Qt::RightButton)
			{
				//Нарисовать на pixmap
				draw(canvas->getImage(), false);
				state = SetPoints;
				points.clear();
			}
		}
	}	

	ui->labelCountPoint->setText(QString::number(points.size()));
	canvas->update();
}

int LineTool::findIndexPoint(const QVector<QPointF>& points, const QPointF& pos, qreal radius)
{
	int j = -1;
	qreal r = radius;
	for (int i = 0; i < points.size(); i++)
	{
		qreal x = points[i].x() - pos.x();
		qreal y = points[i].y() - pos.y();
		qreal len = qSqrt(x*x + y*y);
		if (len < r)
		{
			r = len;
			j = i;
		}
	}
	return j;
}

void LineTool::preview(QPaintDevice* device)
{
	draw(device, true);
}

void LineTool::draw(QPaintDevice* device, bool preview)
{
	if (points.size() > 0)
	{
		QPainter painter(device);

		if (canvas->isRestrictSelection() && canvas->isSA())
		{
			painter.setClipRect(canvas->getSARect());
		}

		painter.setRenderHint(QPainter::Antialiasing, true);
		painter.setPen(QPen(colors->getFG(), width, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

		//рисование линий
		QPainterPath path;
		path.moveTo(points[0]);
		foreach(QPoint point, points) 
							path.lineTo(point);

		if (preview && state == SetPoints) path.lineTo(mp);
		painter.drawPath(path);

		//рисование кружков на изломах
		if (preview)
		{
			painter.setClipping(false);
			painter.setPen(QPen(Qt::black, 2));
			foreach(QPoint point, points)
			painter.drawEllipse(point, radius/2, radius/2);

			//кружок под курсором
			if (state == SetPoints)
			{
				painter.drawEllipse(mp, radius/2, radius/2);
			}
		}
	}
}

void LineTool::sizeChanged(int i)
{
	width = i;
	radius = ( qMax(width, 8) + 4 ) * 1.5;

	canvas->update();
}