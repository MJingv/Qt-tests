/********************************************************************************
** Form generated from reading UI file 'texteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITOR_H
#define UI_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditor
{
public:
    QAction *actionF_ile;
    QAction *actionN_ew;
    QAction *actionO_pen;
    QAction *actionS_ave;
    QAction *actionS_aveAs;
    QAction *actionC_ut;
    QAction *actionCopy;
    QAction *actionPatse;
    QAction *actionWhat_up;
    QAction *actionWhat_s_your_name;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuOthers;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TextEditor)
    {
        if (TextEditor->objectName().isEmpty())
            TextEditor->setObjectName(QStringLiteral("TextEditor"));
        TextEditor->resize(400, 424);
        actionF_ile = new QAction(TextEditor);
        actionF_ile->setObjectName(QStringLiteral("actionF_ile"));
        actionN_ew = new QAction(TextEditor);
        actionN_ew->setObjectName(QStringLiteral("actionN_ew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionN_ew->setIcon(icon);
        actionO_pen = new QAction(TextEditor);
        actionO_pen->setObjectName(QStringLiteral("actionO_pen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionO_pen->setIcon(icon1);
        actionS_ave = new QAction(TextEditor);
        actionS_ave->setObjectName(QStringLiteral("actionS_ave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionS_ave->setIcon(icon2);
        actionS_aveAs = new QAction(TextEditor);
        actionS_aveAs->setObjectName(QStringLiteral("actionS_aveAs"));
        actionS_aveAs->setIcon(icon2);
        actionC_ut = new QAction(TextEditor);
        actionC_ut->setObjectName(QStringLiteral("actionC_ut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionC_ut->setIcon(icon3);
        actionCopy = new QAction(TextEditor);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPatse = new QAction(TextEditor);
        actionPatse->setObjectName(QStringLiteral("actionPatse"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPatse->setIcon(icon5);
        actionWhat_up = new QAction(TextEditor);
        actionWhat_up->setObjectName(QStringLiteral("actionWhat_up"));
        actionWhat_s_your_name = new QAction(TextEditor);
        actionWhat_s_your_name->setObjectName(QStringLiteral("actionWhat_s_your_name"));
        centralWidget = new QWidget(TextEditor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        TextEditor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TextEditor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuOthers = new QMenu(menuBar);
        menuOthers->setObjectName(QStringLiteral("menuOthers"));
        TextEditor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TextEditor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TextEditor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TextEditor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextEditor->setStatusBar(statusBar);
        toolBar = new QToolBar(TextEditor);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        TextEditor->addToolBar(Qt::LeftToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuOthers->menuAction());
        menuFile->addAction(actionN_ew);
        menuFile->addAction(actionO_pen);
        menuFile->addAction(actionS_ave);
        menuFile->addAction(actionS_aveAs);
        menuFile->addSeparator();
        menuEdit->addAction(actionC_ut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPatse);
        menuHelp->addSeparator();
        menuOthers->addAction(actionWhat_up);
        menuOthers->addAction(actionWhat_s_your_name);
        mainToolBar->addAction(actionN_ew);
        mainToolBar->addAction(actionO_pen);
        mainToolBar->addAction(actionS_ave);
        toolBar->addAction(actionC_ut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPatse);

        retranslateUi(TextEditor);

        QMetaObject::connectSlotsByName(TextEditor);
    } // setupUi

    void retranslateUi(QMainWindow *TextEditor)
    {
        TextEditor->setWindowTitle(QApplication::translate("TextEditor", "TextEditor", Q_NULLPTR));
        actionF_ile->setText(QApplication::translate("TextEditor", "F&ile", Q_NULLPTR));
        actionN_ew->setText(QApplication::translate("TextEditor", "N&ew", Q_NULLPTR));
        actionN_ew->setShortcut(QApplication::translate("TextEditor", "Ctrl+N", Q_NULLPTR));
        actionO_pen->setText(QApplication::translate("TextEditor", "O&pen...", Q_NULLPTR));
        actionO_pen->setShortcut(QApplication::translate("TextEditor", "Ctrl+O", Q_NULLPTR));
        actionS_ave->setText(QApplication::translate("TextEditor", "S&ave", Q_NULLPTR));
        actionS_ave->setShortcut(QApplication::translate("TextEditor", "Ctrl+S", Q_NULLPTR));
        actionS_aveAs->setText(QApplication::translate("TextEditor", "S&aveAs...", Q_NULLPTR));
        actionC_ut->setText(QApplication::translate("TextEditor", "Cut", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("TextEditor", "Copy", Q_NULLPTR));
        actionPatse->setText(QApplication::translate("TextEditor", "Paste", Q_NULLPTR));
        actionWhat_up->setText(QApplication::translate("TextEditor", "what' s up?", Q_NULLPTR));
        actionWhat_s_your_name->setText(QApplication::translate("TextEditor", "what's your name?", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("TextEditor", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("TextEditor", "Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("TextEditor", "Help", Q_NULLPTR));
        menuOthers->setTitle(QApplication::translate("TextEditor", "Others", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("TextEditor", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextEditor: public Ui_TextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITOR_H
