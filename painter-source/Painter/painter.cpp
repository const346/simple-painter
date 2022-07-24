#include "stdafx.h"
#include "painter.h"

#include "abstracttool.h"

#include "brushtool.h"
#include "linetool.h"
#include "curvetool.h"
#include "erasertool.h"
#include "texttool.h"
#include "filltool.h"
#include "takecolortool.h"
#include "selecttool.h"
#include "imagetool.h"

Q_DECLARE_METATYPE(AbstractTool*);

Painter::Painter(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	//создание области рисования
	canvas = new Canvas(this);
	ui.canvasLayout->addWidget(canvas);
	canvas->newImage(QColor(Qt::white), QSize(500, 350));
	
	//при изменение области выделения на канвасе
	connect(canvas, SIGNAL(changeSA()), this, SLOT(changeSA()));

	//инициализация и установка цвета по умолчанию
	colors = new ActionColors(this);
	connect(colors, SIGNAL(changeColors(int, const QColor&)), this, SLOT(changeColors(int, const QColor&)));

	colors->setFG(Qt::black);
	colors->setBG(Qt::white);

	//создание и назначение инструментов
	brushTool = new BrushTool(canvas, ui.pageBrushTool, &ui, colors);
	ui.actionBrush->setData(QVariant::fromValue<AbstractTool*>(brushTool));

	lineTool = new LineTool(canvas, ui.pageLineTool, &ui, colors);
	ui.actionLine->setData(QVariant::fromValue<AbstractTool*>(lineTool));

	curveTool = new CurveTool(canvas, ui.pageLineTool, &ui, colors);
	ui.actionCurve->setData(QVariant::fromValue<AbstractTool*>(curveTool));

	eraserTool = new EraserTool(canvas, ui.pageEraserTool, &ui, colors);
	ui.actionEraser->setData(QVariant::fromValue<AbstractTool*>(eraserTool));

	textTool = new TextTool(canvas, ui.pageTextTool, &ui, colors);
	ui.actionText->setData(QVariant::fromValue<AbstractTool*>(textTool));
	
	fillTool = new FillTool(canvas, ui.pageNoTool, &ui, colors);
	ui.actionFill->setData(QVariant::fromValue<AbstractTool*>(fillTool));

	takeColorTool = new TakeColorTool(canvas, ui.pageNoTool, &ui, colors);
	ui.actionTakeColor->setData(QVariant::fromValue<AbstractTool*>(takeColorTool));

	selectTool = new SelectTool(canvas, ui.pageSelectTool, &ui, colors);
	ui.actionSelect->setData(QVariant::fromValue<AbstractTool*>(selectTool));

	imageTool = new ImageTool(canvas, ui.pageNoTool, &ui, colors);
	
	//обьединение actions
	groupActionTool = new QActionGroup(this);
	groupActionTool->addAction(ui.actionBrush);
	groupActionTool->addAction(ui.actionEraser);
	groupActionTool->addAction(ui.actionText);
	groupActionTool->addAction(ui.actionFill);
	groupActionTool->addAction(ui.actionLine);
	groupActionTool->addAction(ui.actionCurve);
	groupActionTool->addAction(ui.actionTakeColor);
	groupActionTool->addAction(ui.actionSelect);

	connect(groupActionTool, SIGNAL(triggered(QAction*)), this, SLOT(selectedTool(QAction*)));

	//назначение событий меню "Файл"
	connect(ui.actionNewFile,		SIGNAL(triggered()), this, SLOT(onNewFileClicked()));
	connect(ui.actionOpenFile,		SIGNAL(triggered()), this, SLOT(onOpenFileClicked()));
	connect(ui.actionSaveFile,		SIGNAL(triggered()), this, SLOT(onSaveFileClicked()));
	connect(ui.actionSaveAsFile,	SIGNAL(triggered()), this, SLOT(onSaveAsFileClicked()));
	connect(ui.actionPrint,			SIGNAL(triggered()), this, SLOT(onPrintClicked()));
	connect(ui.actionExit,			SIGNAL(triggered()), this, SLOT(close()));

	//назначение событий меню "Помощь"
	connect(ui.actionAbout,			SIGNAL(triggered()), this, SLOT(onAboutClicked()));

	//назначение событий меню "Правка"
	connect(ui.actionCopy,			SIGNAL(triggered()), this, SLOT(onCopyClicked()));
	connect(ui.actionPaste,			SIGNAL(triggered()), this, SLOT(onPasteClicked()));
	connect(ui.actionCut,			SIGNAL(triggered()), this, SLOT(onCutClicked()));

	//назначение событий меню "Выделение"
	connect(ui.actionSelectAll,	SIGNAL(triggered()), this, SLOT(onSelectAllClicked()));
	connect(ui.actionDeselect,		SIGNAL(triggered()), this, SLOT(onDeselectClicked()));
	
	//назначение событий для выбора цвета
	connect(ui.actionFgColor, SIGNAL(triggered()), this, SLOT(selectFgColor()));
	connect(ui.actionBgColor, SIGNAL(triggered()), this, SLOT(selectBgColor()));

	//событие "ограничить выделенным"
	connect(ui.checkBoxRestrictSelection, SIGNAL(toggled(bool)), this, SLOT(onRestrictSelection(bool)));
}

Painter::~Painter()
{
	
}

//---------------------------------------------
void Painter::onNewFileClicked()
{
	NewImageDialog dialog(this);
	if (dialog.exec() == QDialog::Accepted)
	{
		canvas->removeTool(false);

		currentFileName.clear();
		canvas->newImage(dialog.getColor(), dialog.getSizeImage());
		
		colors->setBG(dialog.getColor());
	}
}

void Painter::onOpenFileClicked()
{
	QFileDialog openDialog(this, "Открыть изображение");
	openDialog.setAcceptMode(QFileDialog::AcceptOpen);
	openDialog.setFileMode(QFileDialog::AnyFile);

	//установка фильтра
	QStringList filters;
	QList<QByteArray> formats = QImageReader::supportedImageFormats();

	QString filterAllImage("Все изображения ");
	filterAllImage.append("(");
	foreach(QByteArray format, formats) filterAllImage.append("*." + format + " ");
	filterAllImage.append(")");
	filters.append(filterAllImage);
	
	foreach(QByteArray format, formats) filters << "*." + format;

	openDialog.setNameFilters(filters);

	//Вызов диалога
	if (openDialog.exec() == QFileDialog::Accepted)
	{
		canvas->removeTool(false);

		currentFileName = openDialog.selectedFiles().at(0);
		bool result = canvas->loadImage(currentFileName);
		if (result == false) QMessageBox::critical(this, "Ошибка", "Фаил не может быть загружен");
	}
}

//*** несделано ***//
void Painter::onSaveFileClicked()
{
	//Проверка возможности пересохранить файл
	bool supportedFormat = false;
	/*QString fileFormat = "";
	QList<QByteArray> formats = QImageWriter::supportedImageFormats();
	QList<QByteArray>::iterator  i = formats.begin();
	while(i != formats.end())
	{
		QString format(*i);
		if (fileFormat == format)
		{
			supportedFormat = true;
			break;
		}
		i++;
	}*/
	
	//выбор действия
	if (!currentFileName.isEmpty() && supportedFormat)
	{
		bool result = canvas->saveImage(currentFileName);
		if (result == false) QMessageBox::critical(this, "Ошибка", "Фаил не может быть сохранён");
	}
	else
	{
		onSaveAsFileClicked();
	}
}

void Painter::onSaveAsFileClicked()
{
	QFileDialog saveDialog(this, "Сохранить изображение");
	saveDialog.setAcceptMode(QFileDialog::AcceptSave);
	saveDialog.setFileMode(QFileDialog::AnyFile);

	//установка фильтра
	QStringList filters;
	QList<QByteArray> formats = QImageWriter::supportedImageFormats();
	foreach(QByteArray format, formats) filters << "*." + format;
	saveDialog.setNameFilters(filters);

	//Вызов диалога
	if (saveDialog.exec() == QFileDialog::Accepted)
	{
		currentFileName = saveDialog.selectedFiles().at(0);
		currentFileName.append("." + saveDialog.selectedFilter().split(".").at(1));
		
		bool result = canvas->saveImage(currentFileName);
		if (result == false) QMessageBox::critical(this, "Ошибка", "Фаил не может быть сохранён");
	}
}

//---------------------------------------------
void Painter::onAboutClicked()
{
	AboutDialog dialog(this);
	dialog.exec();
}

//---------------------------------------------
void Painter::selectFgColor()
{
	QColorDialog dialog(this);
	dialog.setOption(QColorDialog::ShowAlphaChannel);
	dialog.setCurrentColor(colors->getFG());
	if (dialog.exec() == QDialog::Accepted)
	{
		colors->setFG(dialog.currentColor());
	}
}

void Painter::selectBgColor()
{
	QColorDialog dialog(this);
	dialog.setOption(QColorDialog::ShowAlphaChannel);
	dialog.setCurrentColor(colors->getBG());
	if (dialog.exec() == QDialog::Accepted)
	{
		colors->setBG(dialog.currentColor());
	}
}

void Painter::changeColors(int type, const QColor& color)
{
	QAction* action = (type == ActionColors::fg) ? ui.actionFgColor : ui.actionBgColor;
	action->setIcon(ActionColors::getIconOfColor(color));
}

//---------------------------------------------
void Painter::onCopyClicked()
{
	if (canvas->isSA())
	{
		QClipboard *clipboard = QApplication::clipboard();
		clipboard->setImage(canvas->getSA());
	}
}

void Painter::onCutClicked()
{
	if (canvas->isSA())
	{
		QClipboard *clipboard = QApplication::clipboard();
		clipboard->setImage(canvas->getSA());

		//закрасить цветом фона
		QPainter painter(canvas->getImage());
		painter.setCompositionMode(QPainter::CompositionMode_Source);
		painter.fillRect(canvas->getSARect(), colors->getBG());

		canvas->update();
	}
}

//*** несделано ***//
void Painter::onPasteClicked()
{
	canvas->clearSA();
	canvas->setCurrentTool(imageTool);

	QAction* action = groupActionTool->checkedAction();
	if (action != NULL) action->setChecked(false);
}

//---------------------------------------------
void Painter::onSelectAllClicked()
{
	canvas->setSAMaxSize();
}

void Painter::onDeselectClicked()
{
	canvas->clearSA();
}

//---------------------------------------------
void Painter::selectedTool(QAction* action)
{
	QVariant data = action->data();
	if (data.isValid() && data.canConvert<AbstractTool*>())
	{
		AbstractTool* tool = data.value<AbstractTool*>();
		canvas->setCurrentTool(tool);
	}
	else
	{
		canvas->removeTool(true);
	}
}

void Painter::onRestrictSelection(bool state)
{
	canvas->restrictSelection(state);
}

void Painter::changeSA()
{
	//Обновление информации о выделенной области
	QRect SARect = canvas->getSARect();
	if (canvas->isSA())
	{
		ui.labelSelectX->setText(QString::number(SARect.x()));
		ui.labelSelectY->setText(QString::number(SARect.y()));
		ui.labelSelectW->setText(QString::number(SARect.width()));
		ui.labelSelectH->setText(QString::number(SARect.height()));
	}
	else
	{
		ui.labelSelectX->setText("-");
		ui.labelSelectY->setText("-");
		ui.labelSelectW->setText("-");
		ui.labelSelectH->setText("-");
	}
}

//-----------------------------------------------------------------------
void Painter::onPrintClicked()
{
	QPrinter printer(QPrinter::ScreenResolution);
	QPrintPreviewDialog dialog(&printer, this);
	dialog.setWindowFlags( Qt::Window );
	connect(&dialog, SIGNAL(paintRequested(QPrinter *)), SLOT(printDocument(QPrinter*)));
	dialog.exec();
}

void Painter::printDocument(QPrinter* printer)
{
	QPainter painter(printer);
	printer->setPageMargins(20, 5, 5, 5, QPrinter::Millimeter);
	painter.drawImage(0, 0, *canvas->getImage());
}