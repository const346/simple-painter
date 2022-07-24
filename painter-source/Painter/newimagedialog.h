#ifndef NEWIMAGEDIALOG_H
#define NEWIMAGEDIALOG_H

#include <QDialog>
#include <QPixmap>
#include "ui_newimagedialog.h"
#include "actioncolors.h"

class NewImageDialog : public QDialog
{
	Q_OBJECT

public:
	NewImageDialog(QWidget *parent = 0);
	~NewImageDialog();
	
	QColor getColor();
	QSize getSizeImage();

private:
	Ui::NewImageDialog ui;
	QSize sizeImage;
	QColor color;

private slots:
	void onTakeColor();
	void accept();
};

#endif // NEWIMAGEDIALOG_H
