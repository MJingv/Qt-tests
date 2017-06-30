/********************************************************************************
** Form generated from reading UI file 'hlayout.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLAYOUT_H
#define UI_HLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLayout
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancel;
    QPushButton *btnReset;
    QPushButton *btnOk;

    void setupUi(QWidget *HLayout)
    {
        if (HLayout->objectName().isEmpty())
            HLayout->setObjectName(QStringLiteral("HLayout"));
        HLayout->resize(430, 322);
        horizontalLayout = new QHBoxLayout(HLayout);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnCancel = new QPushButton(HLayout);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        btnCancel->setFont(font);
        btnCancel->setCheckable(false);

        horizontalLayout->addWidget(btnCancel);

        btnReset = new QPushButton(HLayout);
        btnReset->setObjectName(QStringLiteral("btnReset"));
        sizePolicy.setHeightForWidth(btnReset->sizePolicy().hasHeightForWidth());
        btnReset->setSizePolicy(sizePolicy);
        btnReset->setFont(font);
        btnReset->setCheckable(false);

        horizontalLayout->addWidget(btnReset);

        btnOk = new QPushButton(HLayout);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setFont(font);
        btnOk->setCheckable(false);

        horizontalLayout->addWidget(btnOk);


        retranslateUi(HLayout);

        QMetaObject::connectSlotsByName(HLayout);
    } // setupUi

    void retranslateUi(QWidget *HLayout)
    {
        HLayout->setWindowTitle(QApplication::translate("HLayout", "HLayout", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("HLayout", "cancel", Q_NULLPTR));
        btnReset->setText(QApplication::translate("HLayout", "reset", Q_NULLPTR));
        btnOk->setText(QApplication::translate("HLayout", "ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HLayout: public Ui_HLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLAYOUT_H
