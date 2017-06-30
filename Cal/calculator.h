#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();
     int dotflag = 0;
     QString res;
     QString Polish;
     long int result;


private slots:
    void numClickedSlot(void);
    void pointClickedSlot(void);
    void opClickedSlot(void);
    void ceClickedSlot(void);
    void delClickedSlot(void);
    void resClickedSlot(void);
    void getResult(std::string);

private:


    Ui::Calculator *ui;

    //数字按键
};

#endif // CALCULATOR_H
