#ifndef ACTIONCOLORS_H
#define ACTIONCOLORS_H

#include <QObject>

class ActionColors : public QObject
{
	Q_OBJECT

public:
	ActionColors(QObject *parent);
	~ActionColors();

	enum TypeColor {bg = 0, fg = 1};

	void setColor(TypeColor type, const QColor& color);
	void setBG(const QColor& color);
	void setFG(const QColor& color);

	QColor getColor(TypeColor type);
	QColor getBG();
	QColor getFG();

	static QIcon getIconOfColor(const QColor& color);
	static QPixmap getPixmapOfColor(const QColor& color, const QSize& size);

private:
	QColor colors[2];

signals:
	void changeColors(int, const QColor&);
};

#endif // ACTIONCOLORS_H
