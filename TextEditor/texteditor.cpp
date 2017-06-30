#include "texteditor.h"
#include "ui_texteditor.h"
#include <QFile>
#include <QFileDialog>
#include <iostream>
#include <QTextStream>
TextEditor::TextEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TextEditor)
{
    ui->setupUi(this);

    connect(ui->actionO_pen,SIGNAL(triggered(bool)),this,SLOT(openActSlot()));
}

TextEditor::~TextEditor()
{
    delete ui;
}

void TextEditor::openActSlot()
{
    //search files from aboslute path
    QString fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty()){
        QFile file(fileName);
        if(file.open(QIODevice::ReadWrite)){

            QTextStream in (&file);
            ui->textEdit->setText(in.readAll());
        }
    }
    ui->textEdit->append(fileName);


}
