/********************************************************************************
** Form generated from reading UI file 'painter.ui'
**
** Created: Sun 22. Dec 15:29:25 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER_H
#define UI_PAINTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFontComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PainterClass
{
public:
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionNewFile;
    QAction *actionOpenFile;
    QAction *actionSaveFile;
    QAction *actionSaveAsFile;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionCopy;
    QAction *actionBrush;
    QAction *actionLine;
    QAction *actionCurve;
    QAction *actionEraser;
    QAction *actionSelectAll;
    QAction *actionSelect;
    QAction *actionDeselect;
    QAction *actionFill;
    QAction *actionTakeColor;
    QAction *actionFgColor;
    QAction *actionBgColor;
    QAction *actionText;
    QAction *actionPrint;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *canvasLayout;
    QStatusBar *statusBar;
    QDockWidget *paramsDockWidget;
    QWidget *paramsDWContents;
    QGridLayout *gridLayout;
    QStackedWidget *stackedParamTools;
    QWidget *pageNoTool;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QWidget *pageEraserTool;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QSlider *sliderSizeEraser;
    QSpinBox *spinBoxSizeEraser;
    QSpacerItem *verticalSpacer_6;
    QWidget *pageBrushTool;
    QVBoxLayout *layoutH_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QSlider *sliderSizeBrush;
    QSpinBox *spinBoxSizeBrush;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageLineTool;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_8;
    QSlider *sliderSizeLine;
    QSpinBox *spinBoxSizeLine;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelCountPoint;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageSelectTool;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelSelectX;
    QLabel *labelSelectY;
    QLabel *labelSelectW;
    QLabel *labelSelectH;
    QFrame *frameHLine;
    QCheckBox *checkBoxRestrictSelection;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageTextTool;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *textTool_edit;
    QLabel *label_2;
    QFontComboBox *textTool_font;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBold;
    QCheckBox *checkItalic;
    QLabel *label_3;
    QSpinBox *textTool_size;
    QCheckBox *textTool_fonV;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuSelect;
    QToolBar *graphicsToolBar;
    QToolBar *selectToolBar;
    QToolBar *colorToolBar;

    void setupUi(QMainWindow *PainterClass)
    {
        if (PainterClass->objectName().isEmpty())
            PainterClass->setObjectName(QString::fromUtf8("PainterClass"));
        PainterClass->resize(806, 548);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Painter/Resources/img/paint-brush.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PainterClass->setWindowIcon(icon);
        actionHelp = new QAction(PainterClass);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Painter/Resources/img/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon1);
        actionAbout = new QAction(PainterClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Painter/Resources/img/kblackbox.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionNewFile = new QAction(PainterClass);
        actionNewFile->setObjectName(QString::fromUtf8("actionNewFile"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Painter/Resources/img/new.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFile->setIcon(icon3);
        actionOpenFile = new QAction(PainterClass);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Painter/Resources/img/fileopen.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon4);
        actionSaveFile = new QAction(PainterClass);
        actionSaveFile->setObjectName(QString::fromUtf8("actionSaveFile"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Painter/Resources/img/filesaveas.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveFile->setIcon(icon5);
        actionSaveAsFile = new QAction(PainterClass);
        actionSaveAsFile->setObjectName(QString::fromUtf8("actionSaveAsFile"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Painter/Resources/img/savex.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAsFile->setIcon(icon6);
        actionExit = new QAction(PainterClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Painter/Resources/img/dialog-close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon7);
        actionCut = new QAction(PainterClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Painter/Resources/img/cut.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionPaste = new QAction(PainterClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Painter/Resources/img/edit-paste.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionCopy = new QAction(PainterClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Painter/Resources/img/page_copy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon10);
        actionBrush = new QAction(PainterClass);
        actionBrush->setObjectName(QString::fromUtf8("actionBrush"));
        actionBrush->setCheckable(true);
        actionBrush->setChecked(false);
        actionBrush->setIcon(icon);
        actionLine = new QAction(PainterClass);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionLine->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Painter/Resources/img/chart_line.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon11);
        actionCurve = new QAction(PainterClass);
        actionCurve->setObjectName(QString::fromUtf8("actionCurve"));
        actionCurve->setCheckable(true);
        actionCurve->setEnabled(false);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Painter/Resources/img/layer-shape-curve.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCurve->setIcon(icon12);
        actionEraser = new QAction(PainterClass);
        actionEraser->setObjectName(QString::fromUtf8("actionEraser"));
        actionEraser->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Painter/Resources/img/eraser.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraser->setIcon(icon13);
        actionSelectAll = new QAction(PainterClass);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Painter/Resources/img/shape_handles.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon14);
        actionSelect = new QAction(PainterClass);
        actionSelect->setObjectName(QString::fromUtf8("actionSelect"));
        actionSelect->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Painter/Resources/img/selection-select.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect->setIcon(icon15);
        actionDeselect = new QAction(PainterClass);
        actionDeselect->setObjectName(QString::fromUtf8("actionDeselect"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Painter/Resources/img/selection-deselect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeselect->setIcon(icon16);
        actionFill = new QAction(PainterClass);
        actionFill->setObjectName(QString::fromUtf8("actionFill"));
        actionFill->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Painter/Resources/img/paintcan.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionFill->setIcon(icon17);
        actionTakeColor = new QAction(PainterClass);
        actionTakeColor->setObjectName(QString::fromUtf8("actionTakeColor"));
        actionTakeColor->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Painter/Resources/img/kcolorchooser.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionTakeColor->setIcon(icon18);
        actionFgColor = new QAction(PainterClass);
        actionFgColor->setObjectName(QString::fromUtf8("actionFgColor"));
        actionFgColor->setChecked(false);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Painter/Resources/img/valve.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionFgColor->setIcon(icon19);
        actionBgColor = new QAction(PainterClass);
        actionBgColor->setObjectName(QString::fromUtf8("actionBgColor"));
        actionBgColor->setIcon(icon19);
        actionText = new QAction(PainterClass);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionText->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Painter/Resources/img/text_left.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon20);
        actionPrint = new QAction(PainterClass);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Painter/Resources/img/print.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon21);
        centralWidget = new QWidget(PainterClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_9 = new QVBoxLayout(centralWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(160, 160, 160, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        scrollArea->setPalette(palette);
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 596, 505));
        canvasLayout = new QHBoxLayout(scrollAreaWidgetContents);
        canvasLayout->setSpacing(6);
        canvasLayout->setContentsMargins(11, 11, 11, 11);
        canvasLayout->setObjectName(QString::fromUtf8("canvasLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_9->addWidget(scrollArea);

        PainterClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PainterClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PainterClass->setStatusBar(statusBar);
        paramsDockWidget = new QDockWidget(PainterClass);
        paramsDockWidget->setObjectName(QString::fromUtf8("paramsDockWidget"));
        paramsDWContents = new QWidget();
        paramsDWContents->setObjectName(QString::fromUtf8("paramsDWContents"));
        gridLayout = new QGridLayout(paramsDWContents);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedParamTools = new QStackedWidget(paramsDWContents);
        stackedParamTools->setObjectName(QString::fromUtf8("stackedParamTools"));
        pageNoTool = new QWidget();
        pageNoTool->setObjectName(QString::fromUtf8("pageNoTool"));
        horizontalLayout_2 = new QHBoxLayout(pageNoTool);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(pageNoTool);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        horizontalLayout_2->addWidget(label_4);

        stackedParamTools->addWidget(pageNoTool);
        pageEraserTool = new QWidget();
        pageEraserTool->setObjectName(QString::fromUtf8("pageEraserTool"));
        verticalLayout_12 = new QVBoxLayout(pageEraserTool);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_5 = new QLabel(pageEraserTool);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_12->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        sliderSizeEraser = new QSlider(pageEraserTool);
        sliderSizeEraser->setObjectName(QString::fromUtf8("sliderSizeEraser"));
        sliderSizeEraser->setMinimum(2);
        sliderSizeEraser->setMaximum(100);
        sliderSizeEraser->setValue(16);
        sliderSizeEraser->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(sliderSizeEraser);

        spinBoxSizeEraser = new QSpinBox(pageEraserTool);
        spinBoxSizeEraser->setObjectName(QString::fromUtf8("spinBoxSizeEraser"));
        spinBoxSizeEraser->setMinimum(2);
        spinBoxSizeEraser->setMaximum(100);
        spinBoxSizeEraser->setValue(16);

        horizontalLayout_6->addWidget(spinBoxSizeEraser);


        verticalLayout_12->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_6);

        stackedParamTools->addWidget(pageEraserTool);
        pageBrushTool = new QWidget();
        pageBrushTool->setObjectName(QString::fromUtf8("pageBrushTool"));
        layoutH_2 = new QVBoxLayout(pageBrushTool);
        layoutH_2->setSpacing(6);
        layoutH_2->setContentsMargins(11, 11, 11, 11);
        layoutH_2->setObjectName(QString::fromUtf8("layoutH_2"));
        label_6 = new QLabel(pageBrushTool);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        layoutH_2->addWidget(label_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        sliderSizeBrush = new QSlider(pageBrushTool);
        sliderSizeBrush->setObjectName(QString::fromUtf8("sliderSizeBrush"));
        sliderSizeBrush->setMinimum(1);
        sliderSizeBrush->setMaximum(100);
        sliderSizeBrush->setSliderPosition(16);
        sliderSizeBrush->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(sliderSizeBrush);

        spinBoxSizeBrush = new QSpinBox(pageBrushTool);
        spinBoxSizeBrush->setObjectName(QString::fromUtf8("spinBoxSizeBrush"));
        spinBoxSizeBrush->setMinimum(1);
        spinBoxSizeBrush->setMaximum(100);
        spinBoxSizeBrush->setSingleStep(1);
        spinBoxSizeBrush->setValue(16);

        horizontalLayout_7->addWidget(spinBoxSizeBrush);


        layoutH_2->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutH_2->addItem(verticalSpacer_2);

        stackedParamTools->addWidget(pageBrushTool);
        pageLineTool = new QWidget();
        pageLineTool->setObjectName(QString::fromUtf8("pageLineTool"));
        verticalLayout = new QVBoxLayout(pageLineTool);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(pageLineTool);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        sliderSizeLine = new QSlider(pageLineTool);
        sliderSizeLine->setObjectName(QString::fromUtf8("sliderSizeLine"));
        sliderSizeLine->setMinimum(1);
        sliderSizeLine->setMaximum(100);
        sliderSizeLine->setValue(16);
        sliderSizeLine->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(sliderSizeLine);

        spinBoxSizeLine = new QSpinBox(pageLineTool);
        spinBoxSizeLine->setObjectName(QString::fromUtf8("spinBoxSizeLine"));
        spinBoxSizeLine->setMinimum(1);
        spinBoxSizeLine->setMaximum(100);
        spinBoxSizeLine->setValue(16);

        horizontalLayout_8->addWidget(spinBoxSizeLine);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(pageLineTool);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        labelCountPoint = new QLabel(pageLineTool);
        labelCountPoint->setObjectName(QString::fromUtf8("labelCountPoint"));

        verticalLayout_7->addWidget(labelCountPoint);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        stackedParamTools->addWidget(pageLineTool);
        pageSelectTool = new QWidget();
        pageSelectTool->setObjectName(QString::fromUtf8("pageSelectTool"));
        verticalLayout_3 = new QVBoxLayout(pageSelectTool);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_12 = new QLabel(pageSelectTool);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_5->addWidget(label_12);

        label_13 = new QLabel(pageSelectTool);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_5->addWidget(label_13);

        label_10 = new QLabel(pageSelectTool);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(pageSelectTool);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_5->addWidget(label_11);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelSelectX = new QLabel(pageSelectTool);
        labelSelectX->setObjectName(QString::fromUtf8("labelSelectX"));

        verticalLayout_4->addWidget(labelSelectX);

        labelSelectY = new QLabel(pageSelectTool);
        labelSelectY->setObjectName(QString::fromUtf8("labelSelectY"));

        verticalLayout_4->addWidget(labelSelectY);

        labelSelectW = new QLabel(pageSelectTool);
        labelSelectW->setObjectName(QString::fromUtf8("labelSelectW"));

        verticalLayout_4->addWidget(labelSelectW);

        labelSelectH = new QLabel(pageSelectTool);
        labelSelectH->setObjectName(QString::fromUtf8("labelSelectH"));

        verticalLayout_4->addWidget(labelSelectH);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout);

        frameHLine = new QFrame(pageSelectTool);
        frameHLine->setObjectName(QString::fromUtf8("frameHLine"));
        frameHLine->setFrameShape(QFrame::HLine);
        frameHLine->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frameHLine);

        checkBoxRestrictSelection = new QCheckBox(pageSelectTool);
        checkBoxRestrictSelection->setObjectName(QString::fromUtf8("checkBoxRestrictSelection"));
        checkBoxRestrictSelection->setChecked(true);

        verticalLayout_3->addWidget(checkBoxRestrictSelection);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        stackedParamTools->addWidget(pageSelectTool);
        pageTextTool = new QWidget();
        pageTextTool->setObjectName(QString::fromUtf8("pageTextTool"));
        verticalLayout_2 = new QVBoxLayout(pageTextTool);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(pageTextTool);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        textTool_edit = new QLineEdit(pageTextTool);
        textTool_edit->setObjectName(QString::fromUtf8("textTool_edit"));

        verticalLayout_2->addWidget(textTool_edit);

        label_2 = new QLabel(pageTextTool);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        textTool_font = new QFontComboBox(pageTextTool);
        textTool_font->setObjectName(QString::fromUtf8("textTool_font"));

        verticalLayout_2->addWidget(textTool_font);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBold = new QCheckBox(pageTextTool);
        checkBold->setObjectName(QString::fromUtf8("checkBold"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        checkBold->setFont(font);

        horizontalLayout_5->addWidget(checkBold);

        checkItalic = new QCheckBox(pageTextTool);
        checkItalic->setObjectName(QString::fromUtf8("checkItalic"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        checkItalic->setFont(font1);

        horizontalLayout_5->addWidget(checkItalic);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label_3 = new QLabel(pageTextTool);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        textTool_size = new QSpinBox(pageTextTool);
        textTool_size->setObjectName(QString::fromUtf8("textTool_size"));
        textTool_size->setMinimum(6);
        textTool_size->setMaximum(72);
        textTool_size->setValue(16);

        verticalLayout_2->addWidget(textTool_size);

        textTool_fonV = new QCheckBox(pageTextTool);
        textTool_fonV->setObjectName(QString::fromUtf8("textTool_fonV"));

        verticalLayout_2->addWidget(textTool_fonV);

        verticalSpacer = new QSpacerItem(20, 291, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedParamTools->addWidget(pageTextTool);

        gridLayout->addWidget(stackedParamTools, 0, 0, 1, 1);

        paramsDockWidget->setWidget(paramsDWContents);
        PainterClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), paramsDockWidget);
        menuBar = new QMenuBar(PainterClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 806, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuSelect = new QMenu(menuBar);
        menuSelect->setObjectName(QString::fromUtf8("menuSelect"));
        PainterClass->setMenuBar(menuBar);
        graphicsToolBar = new QToolBar(PainterClass);
        graphicsToolBar->setObjectName(QString::fromUtf8("graphicsToolBar"));
        PainterClass->addToolBar(Qt::LeftToolBarArea, graphicsToolBar);
        selectToolBar = new QToolBar(PainterClass);
        selectToolBar->setObjectName(QString::fromUtf8("selectToolBar"));
        PainterClass->addToolBar(Qt::LeftToolBarArea, selectToolBar);
        colorToolBar = new QToolBar(PainterClass);
        colorToolBar->setObjectName(QString::fromUtf8("colorToolBar"));
        PainterClass->addToolBar(Qt::LeftToolBarArea, colorToolBar);
        QWidget::setTabOrder(spinBoxSizeEraser, scrollArea);
        QWidget::setTabOrder(scrollArea, sliderSizeBrush);
        QWidget::setTabOrder(sliderSizeBrush, spinBoxSizeBrush);
        QWidget::setTabOrder(spinBoxSizeBrush, sliderSizeLine);
        QWidget::setTabOrder(sliderSizeLine, spinBoxSizeLine);
        QWidget::setTabOrder(spinBoxSizeLine, checkBoxRestrictSelection);
        QWidget::setTabOrder(checkBoxRestrictSelection, textTool_edit);
        QWidget::setTabOrder(textTool_edit, textTool_font);
        QWidget::setTabOrder(textTool_font, checkBold);
        QWidget::setTabOrder(checkBold, checkItalic);
        QWidget::setTabOrder(checkItalic, textTool_size);
        QWidget::setTabOrder(textTool_size, textTool_fonV);
        QWidget::setTabOrder(textTool_fonV, sliderSizeEraser);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSelect->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewFile);
        menuFile->addAction(actionOpenFile);
        menuFile->addAction(actionSaveFile);
        menuFile->addAction(actionSaveAsFile);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuTools->addAction(actionBrush);
        menuTools->addAction(actionLine);
        menuTools->addAction(actionCurve);
        menuTools->addAction(actionEraser);
        menuTools->addAction(actionText);
        menuTools->addAction(actionFill);
        menuTools->addAction(actionTakeColor);
        menuSelect->addAction(actionSelectAll);
        menuSelect->addAction(actionSelect);
        menuSelect->addAction(actionDeselect);
        graphicsToolBar->addAction(actionBrush);
        graphicsToolBar->addAction(actionLine);
        graphicsToolBar->addAction(actionCurve);
        graphicsToolBar->addAction(actionEraser);
        graphicsToolBar->addAction(actionText);
        graphicsToolBar->addAction(actionFill);
        graphicsToolBar->addAction(actionTakeColor);
        selectToolBar->addAction(actionSelectAll);
        selectToolBar->addAction(actionSelect);
        selectToolBar->addAction(actionDeselect);
        colorToolBar->addAction(actionFgColor);
        colorToolBar->addAction(actionBgColor);

        retranslateUi(PainterClass);
        QObject::connect(spinBoxSizeBrush, SIGNAL(valueChanged(int)), sliderSizeBrush, SLOT(setValue(int)));
        QObject::connect(sliderSizeBrush, SIGNAL(valueChanged(int)), spinBoxSizeBrush, SLOT(setValue(int)));
        QObject::connect(sliderSizeLine, SIGNAL(valueChanged(int)), spinBoxSizeLine, SLOT(setValue(int)));
        QObject::connect(spinBoxSizeLine, SIGNAL(valueChanged(int)), sliderSizeLine, SLOT(setValue(int)));
        QObject::connect(spinBoxSizeEraser, SIGNAL(valueChanged(int)), sliderSizeEraser, SLOT(setValue(int)));
        QObject::connect(sliderSizeEraser, SIGNAL(valueChanged(int)), spinBoxSizeEraser, SLOT(setValue(int)));

        stackedParamTools->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PainterClass);
    } // setupUi

    void retranslateUi(QMainWindow *PainterClass)
    {
        PainterClass->setWindowTitle(QApplication::translate("PainterClass", "\320\223\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("PainterClass", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        actionHelp->setShortcut(QApplication::translate("PainterClass", "F1", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("PainterClass", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("PainterClass", "F8", 0, QApplication::UnicodeUTF8));
        actionNewFile->setText(QApplication::translate("PainterClass", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionNewFile->setShortcut(QApplication::translate("PainterClass", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpenFile->setText(QApplication::translate("PainterClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionOpenFile->setShortcut(QApplication::translate("PainterClass", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSaveFile->setText(QApplication::translate("PainterClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionSaveFile->setShortcut(QApplication::translate("PainterClass", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSaveAsFile->setText(QApplication::translate("PainterClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", 0, QApplication::UnicodeUTF8));
        actionSaveAsFile->setShortcut(QApplication::translate("PainterClass", "Ctrl+Shift+O", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("PainterClass", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("PainterClass", "F4", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("PainterClass", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("PainterClass", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("PainterClass", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("PainterClass", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("PainterClass", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("PainterClass", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionBrush->setText(QApplication::translate("PainterClass", "\320\232\320\270\321\201\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionLine->setText(QApplication::translate("PainterClass", "\320\233\320\270\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        actionCurve->setText(QApplication::translate("PainterClass", "\320\232\321\200\320\270\320\262\320\260\321\217", 0, QApplication::UnicodeUTF8));
        actionEraser->setText(QApplication::translate("PainterClass", "\320\233\320\260\321\201\321\202\320\270\320\272", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setText(QApplication::translate("PainterClass", "\320\222\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262\321\201\321\221", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setShortcut(QApplication::translate("PainterClass", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionSelect->setText(QApplication::translate("PainterClass", "\320\222\321\213\320\264\320\265\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionDeselect->setText(QApplication::translate("PainterClass", "\320\241\320\275\321\217\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        actionDeselect->setShortcut(QApplication::translate("PainterClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionFill->setText(QApplication::translate("PainterClass", "\320\227\320\260\320\273\320\270\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        actionTakeColor->setText(QApplication::translate("PainterClass", "\320\222\320\267\321\217\321\202\321\214 \321\206\320\262\320\265\321\202", 0, QApplication::UnicodeUTF8));
        actionFgColor->setText(QApplication::translate("PainterClass", "\320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\206\320\262\320\265\321\202", 0, QApplication::UnicodeUTF8));
        actionBgColor->setText(QApplication::translate("PainterClass", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBgColor->setToolTip(QApplication::translate("PainterClass", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionText->setText(QApplication::translate("PainterClass", "\320\242\320\265\320\272\321\201\321\202", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("PainterClass", "\320\237\320\265\321\207\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionPrint->setShortcut(QApplication::translate("PainterClass", "Ctrl+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        paramsDockWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        paramsDockWidget->setWindowTitle(QApplication::translate("PainterClass", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PainterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\270\320\273\320\270 \320\275\320\265 \320\270\320\274\320\265\320\265\321\202 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PainterClass", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\273\320\260\321\201\321\202\320\270\320\272\320\260:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PainterClass", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\272\320\270\321\201\321\202\320\270:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PainterClass", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\270:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PainterClass", " \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\321\207\320\265\320\272:", 0, QApplication::UnicodeUTF8));
        labelCountPoint->setText(QApplication::translate("PainterClass", "0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("PainterClass", "X:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("PainterClass", "Y:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PainterClass", "\320\250\320\270\321\200\320\270\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PainterClass", "\320\222\321\213\321\201\320\276\321\202\320\260:", 0, QApplication::UnicodeUTF8));
        labelSelectX->setText(QApplication::translate("PainterClass", "-", 0, QApplication::UnicodeUTF8));
        labelSelectY->setText(QApplication::translate("PainterClass", "-", 0, QApplication::UnicodeUTF8));
        labelSelectW->setText(QApplication::translate("PainterClass", "-", 0, QApplication::UnicodeUTF8));
        labelSelectH->setText(QApplication::translate("PainterClass", "-", 0, QApplication::UnicodeUTF8));
        checkBoxRestrictSelection->setText(QApplication::translate("PainterClass", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\270\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\321\213\320\274", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PainterClass", "\320\242\320\265\320\272\321\201\321\202: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PainterClass", "\320\250\321\200\320\270\321\204\321\202:", 0, QApplication::UnicodeUTF8));
        checkBold->setText(QApplication::translate("PainterClass", "\320\226\320\270\321\200\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
        checkItalic->setText(QApplication::translate("PainterClass", "\320\232\321\203\321\200\321\201\320\270\320\262", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PainterClass", "\320\240\320\260\320\267\320\274\320\265\321\200:", 0, QApplication::UnicodeUTF8));
        textTool_size->setPrefix(QString());
        textTool_fonV->setText(QApplication::translate("PainterClass", "\320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("PainterClass", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("PainterClass", "\320\237\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("PainterClass", "\320\237\320\276\320\274\320\276\321\211\321\214", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("PainterClass", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213", 0, QApplication::UnicodeUTF8));
        menuSelect->setTitle(QApplication::translate("PainterClass", "\320\222\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        graphicsToolBar->setWindowTitle(QApplication::translate("PainterClass", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        selectToolBar->setWindowTitle(QApplication::translate("PainterClass", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        colorToolBar->setWindowTitle(QApplication::translate("PainterClass", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\206\320\262\320\265\321\202\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PainterClass: public Ui_PainterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_H
