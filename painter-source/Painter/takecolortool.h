#ifndef TAKECOLORTOOL_H
#define TAKECOLORTOOL_H

#include "abstracttool.h"

class TakeColorTool : public AbstractTool
{
	Q_OBJECT

public:
	TakeColorTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~TakeColorTool();


protected:
	void canvasMouseButtonPress(QMouseEvent*);
	void disable(bool apply);
	void enable();
};

#endif // TAKECOLORTOOL_H
