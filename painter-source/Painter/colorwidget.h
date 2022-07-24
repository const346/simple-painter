#ifndef COLORWIDGET_H
#define COLORWIDGET_H

#include <QWidget>
#include "ui_colorwidget.h"

class ColorWidget : public QWidget
{
	Q_OBJECT

public:
	ColorWidget(QWidget *parent = 0);
	~ColorWidget();

private:
	Ui::ColorWidget ui;

/*	void updateUiRGB(QColor color);
	void updateUiHSV(QColor color);

public slots:
	void RGBAChanged();
	void HSVChanged();
	void onSwapClicked();*/
};

#endif // COLORWIDGET_H
