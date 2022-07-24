#include "StdAfx.h"
#include "actioncolors.h"

ActionColors::ActionColors(QObject *parent)
	: QObject(parent)
{
	
}

ActionColors::~ActionColors()
{
	
}

void ActionColors::setColor(TypeColor type, const QColor& color)
{
	if (color != colors[type])
	{
		colors[type] = color;
		emit changeColors(type, color);
	}
}

void ActionColors::setBG(const QColor& color)
{
	setColor(bg, color);
}

void ActionColors::setFG(const QColor& color)
{
	setColor(fg, color);
}

QColor ActionColors::getColor(TypeColor type)
{
	return colors[type];
}

QColor ActionColors::getBG()
{
	return colors[bg];
}

QColor ActionColors::getFG()
{
	return colors[fg];
}

QIcon ActionColors::getIconOfColor(const QColor& color)
{
	QPixmap pixmap = getPixmapOfColor(color, QSize(16, 16));
	QPainter painter(&pixmap);

	painter.setPen(QPen(Qt::black));
	painter.drawRect(0, 0, 15, 15);
	
	return QIcon(pixmap);
}

QPixmap ActionColors::getPixmapOfColor(const QColor& color, const QSize& size)
{
	QPixmap pixmap(size);

	QPainter painter(&pixmap);
	QPixmap fon(":/Painter/Resources/img/fon.bmp");
	painter.setBackground(QBrush(fon));
	painter.eraseRect(pixmap.rect());

	painter.fillRect(pixmap.rect(), QBrush(color));
	return pixmap;
}