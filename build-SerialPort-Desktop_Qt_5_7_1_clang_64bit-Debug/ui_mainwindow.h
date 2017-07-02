/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionRefresh;
    QAction *actionClear;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *connectBtn;
    QLabel *label_6;
    QLabel *label_3;
    QComboBox *portComboBox;
    QComboBox *stopBitscomboBox;
    QLabel *label;
    QComboBox *baudcomboBox;
    QLineEdit *proBeadlineEdit;
    QLabel *label_5;
    QComboBox *datacomboBox;
    QLabel *label_4;
    QComboBox *paritycomboBox;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *displayArea;
    QHBoxLayout *horizontalLayout;
    QLabel *rxCountLbl;
    QLabel *txCountLbl;
    QCheckBox *hexDisplycheckBox;
    QPushButton *clearDisplyBtn;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *inputLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(521, 396);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon1);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon2);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon3);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 10, 221, 291));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        connectBtn = new QPushButton(groupBox_2);
        connectBtn->setObjectName(QStringLiteral("connectBtn"));

        gridLayout->addWidget(connectBtn, 7, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        portComboBox = new QComboBox(groupBox_2);
        portComboBox->setObjectName(QStringLiteral("portComboBox"));

        gridLayout->addWidget(portComboBox, 0, 1, 1, 1);

        stopBitscomboBox = new QComboBox(groupBox_2);
        stopBitscomboBox->setObjectName(QStringLiteral("stopBitscomboBox"));

        gridLayout->addWidget(stopBitscomboBox, 4, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        baudcomboBox = new QComboBox(groupBox_2);
        baudcomboBox->setObjectName(QStringLiteral("baudcomboBox"));

        gridLayout->addWidget(baudcomboBox, 1, 1, 1, 1);

        proBeadlineEdit = new QLineEdit(groupBox_2);
        proBeadlineEdit->setObjectName(QStringLiteral("proBeadlineEdit"));

        gridLayout->addWidget(proBeadlineEdit, 5, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        datacomboBox = new QComboBox(groupBox_2);
        datacomboBox->setObjectName(QStringLiteral("datacomboBox"));

        gridLayout->addWidget(datacomboBox, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        paritycomboBox = new QComboBox(groupBox_2);
        paritycomboBox->setObjectName(QStringLiteral("paritycomboBox"));

        gridLayout->addWidget(paritycomboBox, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(12, 15, 238, 281));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        displayArea = new QTextEdit(groupBox);
        displayArea->setObjectName(QStringLiteral("displayArea"));

        verticalLayout->addWidget(displayArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rxCountLbl = new QLabel(groupBox);
        rxCountLbl->setObjectName(QStringLiteral("rxCountLbl"));

        horizontalLayout->addWidget(rxCountLbl);

        txCountLbl = new QLabel(groupBox);
        txCountLbl->setObjectName(QStringLiteral("txCountLbl"));

        horizontalLayout->addWidget(txCountLbl);

        hexDisplycheckBox = new QCheckBox(groupBox);
        hexDisplycheckBox->setObjectName(QStringLiteral("hexDisplycheckBox"));

        horizontalLayout->addWidget(hexDisplycheckBox);

        clearDisplyBtn = new QPushButton(groupBox);
        clearDisplyBtn->setObjectName(QStringLiteral("clearDisplyBtn"));

        horizontalLayout->addWidget(clearDisplyBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        inputLineEdit = new QLineEdit(groupBox_3);
        inputLineEdit->setObjectName(QStringLiteral("inputLineEdit"));

        verticalLayout_2->addWidget(inputLineEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        sendBtn = new QPushButton(groupBox_3);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_2->addWidget(sendBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 521, 22));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuTools->addAction(actionConnect);
        menuTools->addAction(actionDisconnect);
        menuTools->addAction(actionRefresh);
        menuTools->addAction(actionClear);
        menuTools->addSeparator();
        menuTools->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addAction(actionClear);

        retranslateUi(MainWindow);

        baudcomboBox->setCurrentIndex(6);
        datacomboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionConnect->setText(QApplication::translate("MainWindow", "connect", Q_NULLPTR));
        actionDisconnect->setText(QApplication::translate("MainWindow", "disconnect", Q_NULLPTR));
        actionRefresh->setText(QApplication::translate("MainWindow", "refresh", Q_NULLPTR));
        actionClear->setText(QApplication::translate("MainWindow", "clear", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "hello", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Config", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Baud", Q_NULLPTR));
        connectBtn->setText(QApplication::translate("MainWindow", "connect", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "ProBead", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "DataBits", Q_NULLPTR));
        stopBitscomboBox->clear();
        stopBitscomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        baudcomboBox->clear();
        baudcomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "StopBits", Q_NULLPTR));
        datacomboBox->clear();
        datacomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "Parity", Q_NULLPTR));
        paritycomboBox->clear();
        paritycomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Even", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Odd", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mark", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Space", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("MainWindow", "DisplayArea", Q_NULLPTR));
        rxCountLbl->setText(QApplication::translate("MainWindow", "RX:0", Q_NULLPTR));
        txCountLbl->setText(QApplication::translate("MainWindow", "TX:0", Q_NULLPTR));
        hexDisplycheckBox->setText(QApplication::translate("MainWindow", "toHex", Q_NULLPTR));
        clearDisplyBtn->setText(QApplication::translate("MainWindow", "clear", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "InputArea", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "HexSend", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
