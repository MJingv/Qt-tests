#include "calculator.h"
#include "ui_calculator.h"
#include <QFont>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QString>
#include<stack>
#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{

    ui->setupUi(this);

    connect(ui->Button0, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button1, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button2, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button3, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button4, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button5, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button6, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button7, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button8, SIGNAL(clicked()),this, SLOT(numClickedSlot()));
    connect(ui->Button9, SIGNAL(clicked()),this, SLOT(numClickedSlot()));

    connect(ui->ButtonAdd, SIGNAL(clicked()),this, SLOT(opClickedSlot()));
    connect(ui->ButtonSub, SIGNAL(clicked()),this, SLOT(opClickedSlot()));
    connect(ui->ButtonMul, SIGNAL(clicked()),this, SLOT(opClickedSlot()));
    connect(ui->ButtonDiv, SIGNAL(clicked()),this, SLOT(opClickedSlot()));
    connect(ui->ButtonLeft, SIGNAL(clicked()),this, SLOT(opClickedSlot()));
    connect(ui->ButtonRight, SIGNAL(clicked()),this, SLOT(opClickedSlot()));

    connect(ui->ButtonDot, SIGNAL(clicked()),this, SLOT(pointClickedSlot()));

    connect(ui->ButtonCe, SIGNAL(clicked()),this, SLOT(ceClickedSlot()));

    connect(ui->ButtonDel, SIGNAL(clicked()),this, SLOT(delClickedSlot()));

    connect(ui->ButtonEq, SIGNAL(clicked()),this, SLOT(resClickedSlot()));

}

Calculator::~Calculator()
{
    delete ui;
}
//数字按键处理
void Calculator::numClickedSlot(void)
{
    QPushButton* btn = (QPushButton*)sender();
    ui->textEdit_input->insertPlainText(btn->text());
}
//操作符处理+-*()／
void Calculator::opClickedSlot(void)
{
    QPushButton* btn = (QPushButton*)sender();
    ui->textEdit_input->insertPlainText(btn->text());
}
//点处理
void Calculator::pointClickedSlot(void)
{   if(dotflag==0)
    {
    QPushButton* btn = (QPushButton*)sender();
    ui->textEdit_input->insertPlainText(btn->text());
    dotflag=1;
    }else {
        ui->textEdit_output->setText("dot error");
    }
}
//清屏处理
void Calculator::ceClickedSlot(void)
{
    ui->textEdit_input->clear();
}
//删除处理
void Calculator::delClickedSlot(void)
{
    QPushButton* btn = (QPushButton*)sender();
    QString str_2;
    str_2=ui->textEdit_input->toPlainText();
    ui->textEdit_input->clear();
    ui->textEdit_input->insertPlainText(str_2.remove(str_2.length()-1,1));
}
//计算处理
void Calculator::resClickedSlot(void)
{
    QPushButton* btn = (QPushButton*)sender();
    res=ui->textEdit_input->toPlainText();
    ui->textEdit_output->setText(res);



}
void Calculator::getResult(string exp) {
           ui->textEdit_output->clear();
            stack<char> s1,s2;
            s1.push('#');         //以#号作为标记
            char temp;
            for(int i=0; i<exp.length(); i++) {                 //利用两个堆栈生成逆波兰式
                if (exp[i] >= '0' && exp[i] <= '9') {
                    s2.push(exp[i]);
                } else if (exp[i] == '+' || exp[i] == '-' ||exp[i] == '*' ||exp[i] == '/') {
                    s2.push('#');
                    temp = s1.top();
                    if(temp == '#'||(temp == '+' || temp == '-')&&(exp[i] == '*' ||exp[i] == '/')) {
                        s1.push(exp[i]);
                    } else {
                        while (!(temp=='#'||temp == '(' || (temp == '+' || temp == '-') && (exp[i] == '*' ||exp[i] == '/'))) {
                            s2.push(temp);
                            s1.pop();
                            temp = s1.top();
                        }
                        s1.push(exp[i]);
                      }
                    } else if(exp[i] == ')'|| exp[i] == '(') {
                        if(exp[i] == '(') {
                        s1.push(exp[i]);
                        } else {
                        temp = s1.top();
                        while (temp != '(' ) {
                        s2.push(temp);
                        s1.pop();
                        temp = s1.top();
                        }
                        s1.pop();
                        }
                  }
                }
            while(s1.top()!='#') {
                s2.push(s1.top());
                s1.pop();
            }
            for(;s2.size()>=1;) {
                Polish.push_back(s2.top());
                s2.pop();
            }
            long int temp2;
            long int temp3;
            long int temp1=0;
            stack<long int> s3;
            bool sign =0;
            for(int i = Polish.length()-1; i >= 0; i--) {   //进行逆波兰式的运算
                if(Polish[i] >= '0' && Polish[i] <= '9') {
                    temp1 = temp1*10 +  Polish[i]-'0';
                    sign = 1;
                }
                if((Polish[i] == '#'||Polish[i] == '+'||Polish[i] == '-'||Polish[i] == '*'||Polish[i] == '/')&&(sign == 1)||(i == 0&&sign == 1)) {
                    if(sign == 1){
                    s3.push(temp1);
                    temp1 = 0;
                    sign = 0;
                    }
                }
                if(Polish[i] == '+'||Polish[i] == '-'||Polish[i] == '*'||Polish[i] == '/') {
                    temp2 =s3.top();
                    s3.pop();
                    temp3 =s3.top();
                    s3.pop();
                    switch(Polish[i]) {
                        case '+':
                            s3.push(temp3+temp2);break;
                        case '-':
                            s3.push(temp3-temp2);break;
                        case '*':
                            s3.push(temp3*temp2);break;
                        case '/':
                            s3.push(temp3/temp2);break;
                    }
                }
            }
            result = s3.top();

        }
