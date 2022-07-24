/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Mon 23. Dec 18:27:53 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(321, 227);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(AboutDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setTabChangesFocus(false);

        verticalLayout->addWidget(textBrowser);

        frame = new QFrame(AboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(frame);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame);


        retranslateUi(AboutDialog);
        QObject::connect(okButton, SIGNAL(clicked()), AboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265</span><span style=\" font-size:12pt;\">:</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span sty"
                        "le=\" font-size:10pt; font-weight:600;\">\320\220\320\262\321\202\320\276\321\200</span><span style=\" font-size:10pt;\">: \320\232\321\200\320\260\320\262\321\207\320\265\320\275\320\272\320\276 \320\220\320\273\320\265\320\272\321\201\320\265\320\271 \320\220\320\275\320\264\321\200\320\265\320\265\320\262\320\270\321\207</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\223\321\200\321\203\320\277\320\277\320\260</span><span style=\" font-size:10pt;\">: \320\244\320\255\320\222\320\242 3\320\241</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font"
                        "-size:10pt;\">\320\222\321\201\320\265 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\320\274\321\213\320\265 \320\270\320\272\320\276\320\275\320\272\320\270 \320\262 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 \320\262\320\267\321\217\321\202\321\213 \321\201 \321\201\320\260\320\271\321\202\320\260 </span><a href=\"www.iconsearch.ru\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">www.iconsearch.ru</span></a></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; text-decoration: underline; color:#0000ff;\"></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\275\320\260\320\277\320\270\321\201"
                        "\320\260\320\275\320\260 \320\275\320\260 c++ \321\201 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\320\265\320\274 Qt, \320\262 \321\201\321\200\320\265\320\264\320\265 Visual Studio 2008.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("AboutDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
