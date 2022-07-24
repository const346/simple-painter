#ifndef CURVETOOL_H
#define CURVETOOL_H

#include "abstracttool.h"

class CurveTool : public AbstractTool
{
	Q_OBJECT

public:
	CurveTool(Canvas*, QWidget*, Ui::PainterClass*, ActionColors*);
	~CurveTool();

private:
	
};

#endif // CURVETOOL_H
