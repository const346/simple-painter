#include "StdAfx.h"
#include "colorwidget.h"

ColorWidget::ColorWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	/*connect(ui.swapButton, SIGNAL(clicked()), this, SLOT(onSwapClicked()));

	connect(ui.sliderR, SIGNAL(sliderMoved(int)), this, SLOT(RGBAChanged()));
	connect(ui.sliderG, SIGNAL(sliderMoved(int)), this, SLOT(RGBAChanged()));
	connect(ui.sliderB, SIGNAL(sliderMoved(int)), this, SLOT(RGBAChanged()));
	connect(ui.sliderA, SIGNAL(sliderMoved(int)), this, SLOT(RGBAChanged()));
	
	connect(ui.sliderH, SIGNAL(sliderMoved(int)), this, SLOT(HSVChanged()));
	connect(ui.sliderS, SIGNAL(sliderMoved(int)), this, SLOT(HSVChanged()));
	connect(ui.sliderV, SIGNAL(sliderMoved(int)), this, SLOT(HSVChanged()));*/
}

ColorWidget::~ColorWidget()
{

}

/*
void ColorWidget::RGBAChanged()
{
	int r = ui.sliderR->value();
	int g = ui.sliderG->value();
	int b = ui.sliderB->value();
	int a = ui.sliderA->value();

	updateUiHSV(QColor(r, g, b, a));
}

void ColorWidget::HSVChanged()
{
	int h = ui.sliderH->value();
	int s = ui.sliderS->value();
	int v = ui.sliderV->value();
	int a = ui.sliderA->value();
	
	updateUiRGB(QColor::fromHsv(h, s, v, a));
}

void ColorWidget::updateUiRGB(QColor color)
{
	ui.sliderR->setValue(color.red());
	ui.sliderG->setValue(color.green());
	ui.sliderB->setValue(color.blue());
}

void ColorWidget::updateUiHSV(QColor color)
{
	ui.sliderH->setValue(color.hsvHue());
	ui.sliderS->setValue(color.hsvSaturation());
	ui.sliderV->setValue(color.value());
}

void ColorWidget::onSwapClicked()
{
	
}
*/