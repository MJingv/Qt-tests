#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //config the prot
    this->configPortSlot();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openPortSlot()
{

}

void MainWindow::configPortSlot()
{
    //search the available port device file
    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) {
        ui->portComboBox->addItem(tr("%1").arg(info.portName()));
    }

    //set the port default args


    //set the port default args



}

void MainWindow::closePortSlot()
{

}

void MainWindow::sendDataSlot()
{

}

void MainWindow::recvDataSlot()
{

}
