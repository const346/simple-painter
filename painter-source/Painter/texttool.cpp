#include "StdAfx.h"
#include "texttool.h"

TextTool::TextTool(Canvas* canvas, QWidget* page, Ui::PainterClass* ui, ActionColors* colors)
	: AbstractTool(canvas, page, ui, colors)
{
	connect(ui->textTool_edit, SIGNAL(textChanged(const QString&)), this, SLOT(valueChanged()));
	connect(ui->textTool_size, SIGNAL(valueChanged(const QString&)), this, SLOT(valueChanged()));
	connect(ui->textTool_font, SIGNAL(currentFontChanged(const QFont&)), this, SLOT(valueChanged()));
	connect(ui->textTool_fonV, SIGNAL(stateChanged(int)), this, SLOT(valueChanged()));
	connect(ui->checkItalic, SIGNAL(stateChanged(int)), this, SLOT(valueChanged()));
	connect(ui->checkBold, SIGNAL(stateChanged(int)), this, SLOT(valueChanged()));
	
	connect(ui->textTool_edit, SIGNAL(cursorPositionChanged(int, int)), this, SLOT(textCPhanged(int, int)));
	
	valueChanged();
}

TextTool::~TextTool()
{

}

void TextTool::disable(bool apply)
{
	AbstractTool::disable(apply);

	if (apply) draw(canvas->getImage());

	state = SetPositionText;
	ui->textTool_edit->clear();
	canvas->update();
}

void TextTool::enable()
{
	AbstractTool::enable();
	state = SetPositionText;
}

void TextTool::canvasMouseMove(QMouseEvent* event)
{
	if (state == MoveText)
	{
		pos = event->pos() + dragPoint;
		canvas->update();
	}
}

void TextTool::canvasMouseButtonRelease(QMouseEvent* event)
{
	if (state == MoveText) state = EditText;
}

void TextTool::canvasMouseButtonPress(QMouseEvent* event)
{
	int btn = event->button();

	QRect rectP = rect;
	rectP.moveTo(pos);
	
	if (state == EditText)
	{
		if (btn == Qt::RightButton)
		{
			draw(canvas->getImage());
			ui->textTool_edit->clear();

			state = SetPositionText;
		}
		else
		{
			if (rectP.contains(event->pos()))
			{
				state = MoveText;
				dragPoint =  rectP.topLeft() - event->pos();
			}
			else
			{
				draw(canvas->getImage());
				ui->textTool_edit->clear();

				state = SetPositionText;
			}
		}
	}
	
	if (state == SetPositionText && btn == Qt::LeftButton)
	{
		pos = event->pos();
		ui->textTool_edit->setFocus();
		state = EditText;
	}
	
	canvas->update();
}

void TextTool::draw(QPaintDevice* device)
{
	QPainter painter(device);
	
	if (canvas->isRestrictSelection() && canvas->isSA())
	{
		painter.setClipRect(canvas->getSARect());
	}

	painter.setRenderHint(QPainter::TextAntialiasing, true);
	painter.setPen(colors->getFG());
	painter.setFont(font);

	QRect rectP = rect;
	rectP.moveTo(pos);
	
	if (!visibleFon)
		painter.fillRect(rectP, colors->getBG());

	painter.drawText(rectP , 0, text); 
}

void TextTool::preview(QPaintDevice* device)
{
	if (state == EditText || state == MoveText) 
	{
		draw(device);

		//¬ывод курсора и выделени€
		QFontMetrics fm(font);
		int shiftCW = fm.width(text, cpos); //смешение текстового курсора
		int h = fm.height();						//высота текста

		QRect rectP = rect;
		rectP.moveTo(pos);

		int xc = rectP.x() + shiftCW;
		int y = rectP.y();

		QPainter painter(device);
		painter.fillRect(QRect(xc, y, 1, h), colors->getFG());
	}
}

void TextTool::valueChanged()
{
	text = ui->textTool_edit->text();
	visibleFon = ui->textTool_fonV->isChecked();

	int size = ui->textTool_size->value();
	bool bold = ui->checkBold->isChecked();
	bool italic = ui->checkItalic->isChecked();
	font = ui->textTool_font->currentFont();
	font.setPointSize(size);
	font.setItalic(italic);
	font.setBold(bold);
	
	QFontMetrics fm(font);
	rect = fm.boundingRect(text);

	canvas->update();
}

void TextTool::textCPhanged(int oldP, int newP)
{
	cpos = newP;
	canvas->update();
}