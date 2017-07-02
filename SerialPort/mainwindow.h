#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void configPortSlot(void);
    void openPortSlot(void);
    void closePortSlot(void);
    void sendDataSlot(void);
    void recvDataSlot(void);

private:
    Ui::MainWindow *ui;

    QSerialPort     port;

};

#endif // MAINWINDOW_H
