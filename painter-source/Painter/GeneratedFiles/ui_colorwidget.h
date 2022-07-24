/********************************************************************************
** Form generated from reading UI file 'colorwidget.ui'
**
** Created: Sun 15. Dec 21:51:58 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORWIDGET_H
#define UI_COLORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *buttonFG;
    QSpacerItem *horizontalSpacer;
    QPushButton *swapButton;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *buttonBG;
    QFrame *colorPanel;
    QHBoxLayout *layoutH;
    QLabel *labelH;
    QSlider *sliderH;
    QSpinBox *spinBoxH;
    QHBoxLayout *layoutS;
    QLabel *labelS;
    QSlider *sliderS;
    QSpinBox *spinBoxS;
    QHBoxLayout *layoutV;
    QLabel *labelV;
    QSlider *sliderV;
    QSpinBox *spinBoxV;
    QFrame *lineH;
    QHBoxLayout *layoutA;
    QLabel *labelA;
    QSlider *sliderA;
    QSpinBox *spinBoxA;
    QHBoxLayout *layoutR;
    QLabel *labelR;
    QSlider *sliderR;
    QSpinBox *spinBoxR;
    QHBoxLayout *layoutG;
    QLabel *labelG;
    QSlider *sliderG;
    QSpinBox *spinBoxG;
    QHBoxLayout *layoutB;
    QLabel *labelB;
    QSlider *sliderB;
    QSpinBox *spinBoxB;

    void setupUi(QWidget *ColorWidget)
    {
        if (ColorWidget->objectName().isEmpty())
            ColorWidget->setObjectName(QString::fromUtf8("ColorWidget"));
        verticalLayout = new QVBoxLayout(ColorWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonFG = new QRadioButton(ColorWidget);
        buttonFG->setObjectName(QString::fromUtf8("buttonFG"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Painter/Resources/img/fon.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        buttonFG->setIcon(icon);
        buttonFG->setChecked(true);

        horizontalLayout->addWidget(buttonFG);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        swapButton = new QPushButton(ColorWidget);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Painter/Resources/img/valve.ico"), QSize(), QIcon::Normal, QIcon::Off);
        swapButton->setIcon(icon1);
        swapButton->setFlat(true);

        horizontalLayout->addWidget(swapButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonBG = new QRadioButton(ColorWidget);
        buttonBG->setObjectName(QString::fromUtf8("buttonBG"));
        buttonBG->setIcon(icon);

        horizontalLayout->addWidget(buttonBG);


        verticalLayout->addLayout(horizontalLayout);

        colorPanel = new QFrame(ColorWidget);
        colorPanel->setObjectName(QString::fromUtf8("colorPanel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorPanel->sizePolicy().hasHeightForWidth());
        colorPanel->setSizePolicy(sizePolicy);
        colorPanel->setMinimumSize(QSize(0, 100));
        colorPanel->setFrameShape(QFrame::WinPanel);
        colorPanel->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(colorPanel);

        layoutH = new QHBoxLayout();
        layoutH->setSpacing(6);
        layoutH->setObjectName(QString::fromUtf8("layoutH"));
        labelH = new QLabel(ColorWidget);
        labelH->setObjectName(QString::fromUtf8("labelH"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelH->setFont(font);

        layoutH->addWidget(labelH);

        sliderH = new QSlider(ColorWidget);
        sliderH->setObjectName(QString::fromUtf8("sliderH"));
        sliderH->setMaximum(255);
        sliderH->setOrientation(Qt::Horizontal);

        layoutH->addWidget(sliderH);

        spinBoxH = new QSpinBox(ColorWidget);
        spinBoxH->setObjectName(QString::fromUtf8("spinBoxH"));
        spinBoxH->setMaximum(255);

        layoutH->addWidget(spinBoxH);


        verticalLayout->addLayout(layoutH);

        layoutS = new QHBoxLayout();
        layoutS->setSpacing(6);
        layoutS->setObjectName(QString::fromUtf8("layoutS"));
        labelS = new QLabel(ColorWidget);
        labelS->setObjectName(QString::fromUtf8("labelS"));
        labelS->setFont(font);

        layoutS->addWidget(labelS);

        sliderS = new QSlider(ColorWidget);
        sliderS->setObjectName(QString::fromUtf8("sliderS"));
        sliderS->setMaximum(255);
        sliderS->setOrientation(Qt::Horizontal);

        layoutS->addWidget(sliderS);

        spinBoxS = new QSpinBox(ColorWidget);
        spinBoxS->setObjectName(QString::fromUtf8("spinBoxS"));
        spinBoxS->setMaximum(255);

        layoutS->addWidget(spinBoxS);


        verticalLayout->addLayout(layoutS);

        layoutV = new QHBoxLayout();
        layoutV->setSpacing(6);
        layoutV->setObjectName(QString::fromUtf8("layoutV"));
        labelV = new QLabel(ColorWidget);
        labelV->setObjectName(QString::fromUtf8("labelV"));
        labelV->setFont(font);

        layoutV->addWidget(labelV);

        sliderV = new QSlider(ColorWidget);
        sliderV->setObjectName(QString::fromUtf8("sliderV"));
        sliderV->setMaximum(255);
        sliderV->setOrientation(Qt::Horizontal);

        layoutV->addWidget(sliderV);

        spinBoxV = new QSpinBox(ColorWidget);
        spinBoxV->setObjectName(QString::fromUtf8("spinBoxV"));
        spinBoxV->setMaximum(255);

        layoutV->addWidget(spinBoxV);


        verticalLayout->addLayout(layoutV);

        lineH = new QFrame(ColorWidget);
        lineH->setObjectName(QString::fromUtf8("lineH"));
        lineH->setFrameShape(QFrame::HLine);
        lineH->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(lineH);

        layoutA = new QHBoxLayout();
        layoutA->setSpacing(6);
        layoutA->setObjectName(QString::fromUtf8("layoutA"));
        labelA = new QLabel(ColorWidget);
        labelA->setObjectName(QString::fromUtf8("labelA"));
        labelA->setFont(font);

        layoutA->addWidget(labelA);

        sliderA = new QSlider(ColorWidget);
        sliderA->setObjectName(QString::fromUtf8("sliderA"));
        sliderA->setMaximum(255);
        sliderA->setOrientation(Qt::Horizontal);

        layoutA->addWidget(sliderA);

        spinBoxA = new QSpinBox(ColorWidget);
        spinBoxA->setObjectName(QString::fromUtf8("spinBoxA"));
        spinBoxA->setMaximum(255);

        layoutA->addWidget(spinBoxA);


        verticalLayout->addLayout(layoutA);

        layoutR = new QHBoxLayout();
        layoutR->setSpacing(6);
        layoutR->setObjectName(QString::fromUtf8("layoutR"));
        labelR = new QLabel(ColorWidget);
        labelR->setObjectName(QString::fromUtf8("labelR"));
        labelR->setFont(font);

        layoutR->addWidget(labelR);

        sliderR = new QSlider(ColorWidget);
        sliderR->setObjectName(QString::fromUtf8("sliderR"));
        sliderR->setMaximum(255);
        sliderR->setOrientation(Qt::Horizontal);

        layoutR->addWidget(sliderR);

        spinBoxR = new QSpinBox(ColorWidget);
        spinBoxR->setObjectName(QString::fromUtf8("spinBoxR"));
        spinBoxR->setMaximum(255);

        layoutR->addWidget(spinBoxR);


        verticalLayout->addLayout(layoutR);

        layoutG = new QHBoxLayout();
        layoutG->setSpacing(6);
        layoutG->setObjectName(QString::fromUtf8("layoutG"));
        labelG = new QLabel(ColorWidget);
        labelG->setObjectName(QString::fromUtf8("labelG"));
        labelG->setFont(font);

        layoutG->addWidget(labelG);

        sliderG = new QSlider(ColorWidget);
        sliderG->setObjectName(QString::fromUtf8("sliderG"));
        sliderG->setMaximum(255);
        sliderG->setOrientation(Qt::Horizontal);

        layoutG->addWidget(sliderG);

        spinBoxG = new QSpinBox(ColorWidget);
        spinBoxG->setObjectName(QString::fromUtf8("spinBoxG"));
        spinBoxG->setMaximum(255);

        layoutG->addWidget(spinBoxG);


        verticalLayout->addLayout(layoutG);

        layoutB = new QHBoxLayout();
        layoutB->setSpacing(6);
        layoutB->setObjectName(QString::fromUtf8("layoutB"));
        labelB = new QLabel(ColorWidget);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        labelB->setFont(font);

        layoutB->addWidget(labelB);

        sliderB = new QSlider(ColorWidget);
        sliderB->setObjectName(QString::fromUtf8("sliderB"));
        sliderB->setMaximum(255);
        sliderB->setOrientation(Qt::Horizontal);

        layoutB->addWidget(sliderB);

        spinBoxB = new QSpinBox(ColorWidget);
        spinBoxB->setObjectName(QString::fromUtf8("spinBoxB"));
        spinBoxB->setMaximum(255);

        layoutB->addWidget(spinBoxB);


        verticalLayout->addLayout(layoutB);


        retranslateUi(ColorWidget);
        QObject::connect(sliderH, SIGNAL(sliderMoved(int)), spinBoxH, SLOT(setValue(int)));
        QObject::connect(sliderS, SIGNAL(sliderMoved(int)), spinBoxS, SLOT(setValue(int)));
        QObject::connect(sliderV, SIGNAL(sliderMoved(int)), spinBoxV, SLOT(setValue(int)));
        QObject::connect(sliderR, SIGNAL(sliderMoved(int)), spinBoxR, SLOT(setValue(int)));
        QObject::connect(sliderG, SIGNAL(sliderMoved(int)), spinBoxG, SLOT(setValue(int)));
        QObject::connect(sliderB, SIGNAL(sliderMoved(int)), spinBoxB, SLOT(setValue(int)));
        QObject::connect(sliderA, SIGNAL(sliderMoved(int)), spinBoxA, SLOT(setValue(int)));
        QObject::connect(spinBoxH, SIGNAL(valueChanged(int)), sliderH, SLOT(setValue(int)));
        QObject::connect(spinBoxS, SIGNAL(valueChanged(int)), sliderS, SLOT(setValue(int)));
        QObject::connect(spinBoxV, SIGNAL(valueChanged(int)), sliderV, SLOT(setValue(int)));
        QObject::connect(spinBoxB, SIGNAL(valueChanged(int)), sliderB, SLOT(setValue(int)));
        QObject::connect(spinBoxA, SIGNAL(valueChanged(int)), sliderA, SLOT(setValue(int)));
        QObject::connect(spinBoxG, SIGNAL(valueChanged(int)), sliderG, SLOT(setValue(int)));
        QObject::connect(spinBoxR, SIGNAL(valueChanged(int)), sliderR, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(ColorWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorWidget)
    {
        ColorWidget->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        swapButton->setToolTip(QApplication::translate("ColorWidget", "\320\237\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\206\320\262\320\265\321\202\320\260 \320\274\320\265\321\201\321\202\320\260\320\274\320\270", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        swapButton->setStatusTip(QApplication::translate("ColorWidget", "\320\237\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\206\320\262\320\265\321\202\320\260 \320\274\320\265\321\201\321\202\320\260\320\274\320\270", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        swapButton->setWhatsThis(QApplication::translate("ColorWidget", "\320\237\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\206\320\262\320\265\321\202\320\260 \320\274\320\265\321\201\321\202\320\260\320\274\320\270", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        swapButton->setText(QString());
        labelH->setText(QApplication::translate("ColorWidget", "H:", 0, QApplication::UnicodeUTF8));
        labelS->setText(QApplication::translate("ColorWidget", "S:", 0, QApplication::UnicodeUTF8));
        labelV->setText(QApplication::translate("ColorWidget", "V:", 0, QApplication::UnicodeUTF8));
        labelA->setText(QApplication::translate("ColorWidget", "A:", 0, QApplication::UnicodeUTF8));
        labelR->setText(QApplication::translate("ColorWidget", "R:", 0, QApplication::UnicodeUTF8));
        labelG->setText(QApplication::translate("ColorWidget", "G:", 0, QApplication::UnicodeUTF8));
        labelB->setText(QApplication::translate("ColorWidget", "B:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorWidget: public Ui_ColorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORWIDGET_H
