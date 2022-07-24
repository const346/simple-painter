#ifndef PAINTER_H
#define PAINTER_H

#include <QtGui/QMainWindow>
#include <QActionGroup>
#include <QClipboard>

#include "ui_painter.h"

#include "canvas.h"
#include "newimagedialog.h"
#include "aboutdialog.h"
#include "actioncolors.h"

class AbstractTool;

class BrushTool;
class LineTool;
class CurveTool;
class EraserTool;
class TextTool;
class FillTool;
class TakeColorTool;
class SelectTool;
class ImageTool;

class Painter : public QMainWindow
{
	Q_OBJECT

public:
	Painter(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Painter();

	ActionColors* colors;

	Canvas *canvas;
	Ui::PainterClass ui;

	QActionGroup *groupActionTool;

	//Инструменты
	BrushTool* brushTool;
	LineTool* lineTool;
	CurveTool* curveTool;
	EraserTool* eraserTool;
	TextTool* textTool;
	FillTool* fillTool;
	TakeColorTool* takeColorTool;

	SelectTool* selectTool;
	ImageTool* imageTool;

private:
	QString currentFileName;
	
private slots:
	void onNewFileClicked();
	void onOpenFileClicked();
	void onSaveFileClicked();
	void onSaveAsFileClicked();

	void printDocument(QPrinter*);
	void onPrintClicked();

	void onAboutClicked();

	void onCopyClicked();
	void onPasteClicked();
	void onCutClicked();

	void onSelectAllClicked();
	void onDeselectClicked();

	void selectFgColor();
	void selectBgColor();
	void changeColors(int, const QColor&);

	void selectedTool(QAction* action);

	void onRestrictSelection(bool state);

	void changeSA();
};

#endif // PAINTER_H
