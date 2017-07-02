#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QAction>
#include <QErrorMessage>
#include <QString>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->refreshSlot();
    port.setPortName(ui->portComboBox->currentText());

    connect(ui->connectBtn,SIGNAL(clicked(bool)),
            this,SLOT(openPortSlot()));
    connect(ui->actionConnect,SIGNAL(triggered(bool)),
            this,SLOT(openPortSlot()));
    connect(ui->actionDisconnect,SIGNAL(triggered(bool)),
            this,SLOT(closePortSlot()));
    connect(ui->actionRefresh,SIGNAL(triggered(bool)),
            this,SLOT(refreshSlot()));
    connect(ui->sendBtn,SIGNAL(clicked(bool)),
            this,SLOT(sendDataSlot()));
    connect(&readTimer,SIGNAL(timeout()),
            this,SLOT(recvDataSlot()));
    connect(ui->clearDisplyBtn,SIGNAL(clicked(bool)),
            this,SLOT(clearDisplaySlot()));
    connect(ui->actionClear,SIGNAL(triggered(bool)),
            this,SLOT(clearDisplaySlot()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::configPortSlot()
{
    //QSerialPort::BaudRate   baud;
    QSerialPort::Parity     parity;
    QSerialPort::StopBits   stopBits;

    //Start the configure o software


    //set the port default args

    //set port name
    port.setPortName (ui->portComboBox->currentText());
    //set baud rate
    port.setBaudRate((QSerialPort::BaudRate)ui->baudcomboBox->currentText().toInt());
    //set data bits
    port.setDataBits((QSerialPort::DataBits)(ui->datacomboBox->currentIndex()+5));
    //set stop flag
    switch (ui->stopBitscomboBox->currentIndex()) {
    case 0:
        stopBits = QSerialPort::OneStop;
        break;
    case 1:
        stopBits = QSerialPort::OneAndHalfStop;
        break;
    case 2:
        stopBits = QSerialPort::TwoStop;
        break;
    port.setStopBits(stopBits);
    }

    //set parity flag
    switch (ui->paritycomboBox->currentIndex()) {
    case 0:
        parity = QSerialPort::NoParity;
        break;
    case 1:
        parity = QSerialPort::EvenParity;
        break;
    case 2:
        parity = QSerialPort::OddParity;
        break;
    case 3:
        parity = QSerialPort::MarkParity;
        break;
    case 4:
        parity = QSerialPort::SpaceParity;
        break;
    default:
        parity = QSerialPort::UnknownParity;
        break;

    port.setParity(parity);

    }
}

void MainWindow::openPortSlot()
{
    // if the port was closed --we will open a new port
    if(!port.isOpen()){
        //open failed
        if(!port.open(QIODevice::ReadWrite)){
            QMessageBox::warning(this,tr("serial port open error"),
                                 tr("%1").arg(port.errorString()),QMessageBox::Ok);
        }else {
        //open the port successfully!
        configPortSlot();
        //enabled the configure area
        ui->configGroupBox->setEnabled(false);
        //enabled the connnect button
        ui->actionConnect->setEnabled(false);
        //start timer
        readTimer.start(200);
                }
    }else{
        //if the port has been opened already
        QMessageBox::warning(this,tr("send data error"),
                             tr("please close your old dialg and try again"),QMessageBox::Ok);

    }
}

void MainWindow::closePortSlot()
{
    if(port.isOpen()){
        //close the timer
        readTimer.stop();
        port.close();
        ui->configGroupBox->setEnabled(true);
        ui->actionConnect->setEnabled(true);

    }
}


void MainWindow::refreshSlot()
{
    //set port name
    port.setPortName(ui->portComboBox->currentText());
    if(port.isOpen()){
        port.close();
        ui->configGroupBox->setEnabled(true);
        ui->actionConnect->setEnabled(true);
    }
    //search the available port device file
    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) {
        ui->portComboBox->addItem(tr("%1").arg(info.portName()));
    }
}

void MainWindow::sendDataSlot()
{
    if(ui->inputLineEdit->text().isEmpty()){
        QMessageBox::warning(this,tr("send data error"),tr("no data to send"),QMessageBox::Ok);

    }else {
        if(port.isOpen()){
            QByteArray buf = ui->inputLineEdit->text().toLocal8Bit();
            port.write(buf);
        }else {
            QMessageBox::warning(this,tr("send data error"),tr("port open filed"),QMessageBox::Ok);

        }
    }
}

void MainWindow::recvDataSlot()
{

    if(port.isOpen()){
        //deal with the "null" data
        QString buf = port.readAll();
        if(!buf.isNull()){
           //ui->displayArea->append(tr("receive successfully!~~  "));
           ui->displayArea->append(buf);
        }else {
            //没有读到任何数据
        }
    }else {
        QMessageBox::warning(this,tr("read serial port failed"),
                             tr("device open failed"),QMessageBox::Ok);
    }

}

void MainWindow::clearDisplaySlot()
{
    ui->displayArea->clear();
    ui->inputLineEdit->clear();
}
