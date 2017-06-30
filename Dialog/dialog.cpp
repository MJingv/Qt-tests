#include "dialog.h"
#include "ui_dialog.h"

#include <QColorDialog>
#include <QColor>
#include <QFont>
#include <QFontDialog>
#include <QInputDialog>
#include <QString>
#include <QErrorMessage>
#include <QMessageBox>


Dialog::Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->colorBtn,SIGNAL(clicked(bool)),this,SLOT(colorDialogSlot()));

    connect(ui->fontBtn,SIGNAL(clicked(bool)),this,SLOT(fontDialogSlot()));

    connect(ui->inputBtn,SIGNAL(clicked(bool)),this,SLOT(inputDialogSlot()));

    connect(ui->errorBtn,SIGNAL(clicked(bool)),this,SLOT(errorDialogSlot()));

    connect(ui->infoBtn,SIGNAL(clicked(bool)),this,SLOT(infoDialogSlot()));

    //connect(ui->errorBtn,SIGNAL(clicked(bool)),this,SLOT(errorDialogSlot()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::colorDialogSlot()
{
    QColor color =QColorDialog::getColor(Qt::black,this,"get a color value");
    QFont font;
    font.setPointSize(40);
    ui->textEdit->setFont(font);
    ui->textEdit->setTextColor(color);
    ui->textEdit->setText(color.name());


}

void Dialog::fontDialogSlot()
{
    bool ok = false;
    QFont font = QFontDialog::getFont(&ok,this);
    ui->textEdit->setFont(font);
    font.setPointSize(40);
    ui->textEdit->setText("successfully!");

}

void Dialog::inputDialogSlot()
{
    QString text1 = QInputDialog::getText(this,tr("input a string"),tr("name:"),QLineEdit::Password,tr("jehol"));

    ui->textEdit->setText(text1);


}

void Dialog::errorDialogSlot()
{

   errorMessage.showMessage(tr("this is an error dialog test"));

}

void Dialog::infoDialogSlot()
{
    QMessageBox::StandardButton btn;
    btn = QMessageBox::question(this,tr("question dialog test"),tr("yes or no"),
                                QMessageBox::Yes|QMessageBox::No);
    if(QMessageBox::Yes ==btn){
        ui->textEdit->setText(" you select yes");
    }
    QMessageBox::information(this,tr("question dialog test"),tr("ok"),
                               QMessageBox::Ok);
     QMessageBox::warning(this,tr("warning test"),tr("warning"),
                                QMessageBox::Ok|QMessageBox::Ignore);
}
