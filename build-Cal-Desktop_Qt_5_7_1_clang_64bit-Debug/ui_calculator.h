/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_input;
    QTextEdit *textEdit_output;
    QGridLayout *gridLayout;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *ButtonAdd;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *ButtonSub;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *ButtonMul;
    QPushButton *ButtonDot;
    QPushButton *ButtonDiv;
    QPushButton *ButtonDel;
    QPushButton *ButtonCe;
    QPushButton *ButtonLeft;
    QPushButton *ButtonRight;
    QPushButton *Button0;
    QPushButton *ButtonEq;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(350, 355);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit_input = new QTextEdit(centralWidget);
        textEdit_input->setObjectName(QStringLiteral("textEdit_input"));
        textEdit_input->setLayoutDirection(Qt::RightToLeft);
        textEdit_input->setReadOnly(true);

        verticalLayout->addWidget(textEdit_input);

        textEdit_output = new QTextEdit(centralWidget);
        textEdit_output->setObjectName(QStringLiteral("textEdit_output"));
        textEdit_output->setLayoutDirection(Qt::RightToLeft);
        textEdit_output->setReadOnly(true);

        verticalLayout->addWidget(textEdit_output);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));

        gridLayout->addWidget(Button7, 0, 0, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));

        gridLayout->addWidget(Button8, 0, 1, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));

        gridLayout->addWidget(Button9, 0, 2, 1, 1);

        ButtonAdd = new QPushButton(centralWidget);
        ButtonAdd->setObjectName(QStringLiteral("ButtonAdd"));

        gridLayout->addWidget(ButtonAdd, 0, 3, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));

        gridLayout->addWidget(Button4, 1, 0, 1, 1);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));

        gridLayout->addWidget(Button5, 1, 1, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));

        gridLayout->addWidget(Button6, 1, 2, 1, 1);

        ButtonSub = new QPushButton(centralWidget);
        ButtonSub->setObjectName(QStringLiteral("ButtonSub"));

        gridLayout->addWidget(ButtonSub, 1, 3, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));

        gridLayout->addWidget(Button1, 2, 0, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));

        gridLayout->addWidget(Button2, 2, 1, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));

        gridLayout->addWidget(Button3, 2, 2, 1, 1);

        ButtonMul = new QPushButton(centralWidget);
        ButtonMul->setObjectName(QStringLiteral("ButtonMul"));

        gridLayout->addWidget(ButtonMul, 2, 3, 1, 1);

        ButtonDot = new QPushButton(centralWidget);
        ButtonDot->setObjectName(QStringLiteral("ButtonDot"));

        gridLayout->addWidget(ButtonDot, 3, 2, 1, 1);

        ButtonDiv = new QPushButton(centralWidget);
        ButtonDiv->setObjectName(QStringLiteral("ButtonDiv"));

        gridLayout->addWidget(ButtonDiv, 3, 3, 1, 1);

        ButtonDel = new QPushButton(centralWidget);
        ButtonDel->setObjectName(QStringLiteral("ButtonDel"));

        gridLayout->addWidget(ButtonDel, 4, 0, 1, 1);

        ButtonCe = new QPushButton(centralWidget);
        ButtonCe->setObjectName(QStringLiteral("ButtonCe"));

        gridLayout->addWidget(ButtonCe, 4, 1, 1, 1);

        ButtonLeft = new QPushButton(centralWidget);
        ButtonLeft->setObjectName(QStringLiteral("ButtonLeft"));

        gridLayout->addWidget(ButtonLeft, 5, 0, 1, 2);

        ButtonRight = new QPushButton(centralWidget);
        ButtonRight->setObjectName(QStringLiteral("ButtonRight"));

        gridLayout->addWidget(ButtonRight, 5, 2, 1, 2);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));

        gridLayout->addWidget(Button0, 3, 0, 1, 2);

        ButtonEq = new QPushButton(centralWidget);
        ButtonEq->setObjectName(QStringLiteral("ButtonEq"));

        gridLayout->addWidget(ButtonEq, 4, 2, 1, 2);


        verticalLayout->addLayout(gridLayout);

        Calculator->setCentralWidget(centralWidget);
        textEdit_input->raise();
        textEdit_output->raise();
        ButtonLeft->raise();
        ButtonRight->raise();

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        Button7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        Button8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        Button9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        ButtonAdd->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        Button4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        Button5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        Button6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        ButtonSub->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        Button1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        Button2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        Button3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        ButtonMul->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        ButtonDot->setText(QApplication::translate("Calculator", ".", Q_NULLPTR));
        ButtonDiv->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        ButtonDel->setText(QApplication::translate("Calculator", "del", Q_NULLPTR));
        ButtonCe->setText(QApplication::translate("Calculator", "ce", Q_NULLPTR));
        ButtonLeft->setText(QApplication::translate("Calculator", "(", Q_NULLPTR));
        ButtonRight->setText(QApplication::translate("Calculator", ")", Q_NULLPTR));
        Button0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        ButtonEq->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
