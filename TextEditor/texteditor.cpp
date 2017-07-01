#include "texteditor.h"
#include "ui_texteditor.h"
#include <QFile>
#include <QFileDialog>
#include <iostream>
#include <QTextStream>
#include <QMessageBox>


TextEditor::TextEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TextEditor)
{
    ui->setupUi(this);

    connect(ui->actionO_pen,SIGNAL(triggered(bool)),this,SLOT(openActSlot()));
    connect(ui->actionS_ave,SIGNAL(triggered(bool)),this,SLOT(saveActSlot()));
}

TextEditor::~TextEditor()
{
    delete ui;
}

void TextEditor::openActSlot()
{
    //search files from absolute path
    QString path = QFileDialog::getOpenFileName(this);
    if(!path.isEmpty()){
        QFile file(path);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QMessageBox::warning(this,tr("read file"),tr("can't open file :\n%1").arg(path));
            return;

        }
        QTextStream in (&file);
        ui->textEdit->setText(in.readAll());
        file.close();
    }else {
        QMessageBox::warning(this,tr("path"),tr("please select a file"));
    }
    ui->textEdit->append(path);


}

void TextEditor::saveActSlot()
{
    QString path = QFileDialog::getOpenFileName(this);
    if(!path.isEmpty())
    {
        QFile file(path);
        if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            QMessageBox::warning(this,tr("write file"),tr("can't open the file"));
            return;
        }
        QTextStream out(&file);
       out<< ui->textEdit->toPlainText();
        file.close();

    }else {
        QMessageBox::warning(this,tr("path"),tr("please select a file"));
    }


}
