#include "StdAfx.h"
#include "newimagedialog.h"

NewImageDialog::NewImageDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	color = QColor(Qt::white);
	ui.buttonColor->setIcon(ActionColors::getIconOfColor(color));

	connect(ui.buttonCreate, SIGNAL(clicked()), this, SLOT(accept()));
	connect(ui.buttonCancel, SIGNAL(clicked()), this, SLOT(reject()));
	connect(ui.buttonColor, SIGNAL(clicked()), this, SLOT(onTakeColor()));
}

NewImageDialog::~NewImageDialog()
{
	
}

void NewImageDialog::accept()
{
	sizeImage.setHeight(ui.editH->text().toInt());
	sizeImage.setWidth(ui.editW->text().toInt());

	QDialog::accept();
}

void NewImageDialog::onTakeColor()
{
	QColorDialog colorDlg(this);
	colorDlg.setOption(QColorDialog::ShowAlphaChannel);
	int code = colorDlg.exec();
	if (code != 0)
	{
		color = colorDlg.currentColor();
		ui.buttonColor->setIcon(ActionColors::getIconOfColor(color));
	}
}

QColor NewImageDialog::getColor()
{
	return color;
}

QSize NewImageDialog::getSizeImage()
{
	return sizeImage;
}