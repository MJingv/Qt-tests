/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QGridLayout *gridLayout;
    QPushButton *colorBtn;
    QPushButton *fontBtn;
    QPushButton *inputBtn;
    QPushButton *errorBtn;
    QPushButton *infoBtn;
    QPushButton *warnBtn;

    void setupUi(QWidget *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        colorBtn = new QPushButton(Dialog);
        colorBtn->setObjectName(QStringLiteral("colorBtn"));

        gridLayout->addWidget(colorBtn, 0, 0, 1, 1);

        fontBtn = new QPushButton(Dialog);
        fontBtn->setObjectName(QStringLiteral("fontBtn"));

        gridLayout->addWidget(fontBtn, 0, 1, 1, 1);

        inputBtn = new QPushButton(Dialog);
        inputBtn->setObjectName(QStringLiteral("inputBtn"));

        gridLayout->addWidget(inputBtn, 0, 2, 1, 1);

        errorBtn = new QPushButton(Dialog);
        errorBtn->setObjectName(QStringLiteral("errorBtn"));

        gridLayout->addWidget(errorBtn, 1, 0, 1, 1);

        infoBtn = new QPushButton(Dialog);
        infoBtn->setObjectName(QStringLiteral("infoBtn"));

        gridLayout->addWidget(infoBtn, 1, 1, 1, 1);

        warnBtn = new QPushButton(Dialog);
        warnBtn->setObjectName(QStringLiteral("warnBtn"));

        gridLayout->addWidget(warnBtn, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QWidget *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">dialogs test</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        colorBtn->setText(QApplication::translate("Dialog", "ColorDialog", Q_NULLPTR));
        fontBtn->setText(QApplication::translate("Dialog", "FontDialog", Q_NULLPTR));
        inputBtn->setText(QApplication::translate("Dialog", "InputDialog", Q_NULLPTR));
        errorBtn->setText(QApplication::translate("Dialog", "ErrorDialog", Q_NULLPTR));
        infoBtn->setText(QApplication::translate("Dialog", "InfoDialog", Q_NULLPTR));
        warnBtn->setText(QApplication::translate("Dialog", "WarningDialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
