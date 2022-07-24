/********************************************************************************
** Form generated from reading UI file 'newimagedialog.ui'
**
** Created: Sun 15. Dec 21:51:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWIMAGEDIALOG_H
#define UI_NEWIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewImageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editW;
    QLabel *label;
    QLineEdit *editH;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonColor;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonCreate;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonCancel;

    void setupUi(QDialog *NewImageDialog)
    {
        if (NewImageDialog->objectName().isEmpty())
            NewImageDialog->setObjectName(QString::fromUtf8("NewImageDialog"));
        NewImageDialog->resize(260, 108);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewImageDialog->sizePolicy().hasHeightForWidth());
        NewImageDialog->setSizePolicy(sizePolicy);
        NewImageDialog->setMinimumSize(QSize(260, 108));
        NewImageDialog->setMaximumSize(QSize(260, 108));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Painter/Resources/img/new.ico"), QSize(), QIcon::Normal, QIcon::Off);
        NewImageDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(NewImageDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(NewImageDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editW = new QLineEdit(groupBox);
        editW->setObjectName(QString::fromUtf8("editW"));

        horizontalLayout->addWidget(editW);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        editH = new QLineEdit(groupBox);
        editH->setObjectName(QString::fromUtf8("editH"));

        horizontalLayout->addWidget(editH);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NewImageDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonColor = new QPushButton(groupBox_2);
        buttonColor->setObjectName(QString::fromUtf8("buttonColor"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Painter/Resources/img/valve.ico"), QSize(), QIcon::Normal, QIcon::Off);
        buttonColor->setIcon(icon1);
        buttonColor->setAutoDefault(false);
        buttonColor->setFlat(false);

        horizontalLayout_4->addWidget(buttonColor);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonCreate = new QPushButton(NewImageDialog);
        buttonCreate->setObjectName(QString::fromUtf8("buttonCreate"));
        buttonCreate->setDefault(true);

        horizontalLayout_2->addWidget(buttonCreate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonCancel = new QPushButton(NewImageDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NewImageDialog);

        QMetaObject::connectSlotsByName(NewImageDialog);
    } // setupUi

    void retranslateUi(QDialog *NewImageDialog)
    {
        NewImageDialog->setWindowTitle(QApplication::translate("NewImageDialog", "\320\235\320\276\320\262\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("NewImageDialog", "\320\240\320\260\320\267\320\274\320\265\321\200\321\213:", 0, QApplication::UnicodeUTF8));
        editW->setText(QApplication::translate("NewImageDialog", "500", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewImageDialog", "X", 0, QApplication::UnicodeUTF8));
        editH->setText(QApplication::translate("NewImageDialog", "350", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("NewImageDialog", "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202:", 0, QApplication::UnicodeUTF8));
        buttonColor->setText(QApplication::translate("NewImageDialog", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        buttonCreate->setText(QApplication::translate("NewImageDialog", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("NewImageDialog", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewImageDialog: public Ui_NewImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWIMAGEDIALOG_H
