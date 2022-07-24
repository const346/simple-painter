#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include "ui_painter.h"

class AbstractTool;
class Painter;

class Canvas : public QWidget
{
	Q_OBJECT

public:
	Canvas(QWidget *parent);
	~Canvas();

	void newImage(QColor color, QSize size);
	bool loadImage(const QString& fileName);
	bool saveImage(const QString& fileName);

	QImage* getImage();

	//методы выделенной области
	void		setSARect(QRect rect);
	void		setSAMaxSize();
	void		clearSA();
	QImage	getSA();
	QRect		getSARect();
	bool		isSA();

	void restrictSelection(bool restrict);
	bool isRestrictSelection();

	//текущий инструмент
	void setCurrentTool(AbstractTool* _tool);
	AbstractTool* getCurrentTool();
	void removeTool(bool apply);

private:
	void paintEvent(QPaintEvent *event);
	bool event(QEvent* event);
	
	QImage image;
	AbstractTool* tool;

	QRect SARect;
	bool RS;

	QPixmap fon;

signals:
	void changeSA();

};

#endif // CANVAS_H
