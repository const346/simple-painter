#ifndef TEXTTOOL_H
#define TEXTTOOL_H

#include "abstracttool.h"

class TextTool : public AbstractTool
{
	Q_OBJECT

public:
	TextTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~TextTool();

	enum StateTextTool {SetPositionText = 0, EditText = 1, MoveText = 2};

private:
	QPoint pos;
	QRect rect;

	QString text;
	QFont font;
	bool visibleFon;
	int cpos;

	QPoint dragPoint;

	StateTextTool state;

	void draw(QPaintDevice*);

protected:
	void canvasMouseMove(QMouseEvent*);
	void canvasMouseButtonRelease(QMouseEvent*);
	void canvasMouseButtonPress(QMouseEvent*);
	void preview(QPaintDevice* device);
	void enable();
	void disable(bool apply);

public slots:
	void valueChanged();
	void textCPhanged(int, int);
};

#endif // TEXTTOOL_H
