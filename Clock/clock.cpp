#include "clock.h"
#include <QRect>
#include <QPainter>
#include <QPen>
#include <QColor>
#include <QRect>
#include <QtMath>
#include <QTime>
#include <QDebug>
#include <QStyleOption>
#include <QBrush>

Clock::Clock(QWidget *parent)
    : QWidget(parent)
{
    resize(400,400);
    pixmap.load(":/2.png");
}

Clock::~Clock()
{

}

void Clock::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    QPen pen;

    timer.start(1000);
    connect(&timer,SIGNAL(timeout()),this,SLOT(update()));

    //color
    QColor hColor("#000");
    QColor mColor("#800000");
    QColor sColor("#FF8000");

    //point (x,y,width,height)
    QRect hRect(-10,-3,55,6);
    QRect mRect(-15,-2,75,5);
    QRect sRect(-20,-1,95,2);

    qint32 side=qMin(width(),height());

    //translate the coordinate
    painter.translate(width()/2,height()/2);

    //resize
    painter.scale(side/200.0,side/200.0);

    //remove sawtooth
    painter.setRenderHint(QPainter::Antialiasing,true);

    //draw the background round
//[1] radialGradient
//    QRadialGradient radialGradient(-100,-100,10,-10,-10);//(Centerx,Centery,r,FocusX,FocusY)
//    radialGradient.setColorAt(0,Qt::green);
//    radialGradient.setColorAt(1.0,Qt::yellow);
//    radialGradient.setColorAt(1.0,Qt::red);
//    painter.setBrush(QBrush(radialGradient));
//    painter.drawEllipse(QPoint(0,0),100,100);

//[2] conicalgradient
    QConicalGradient conicalGradient(0,0,45);//(CenterX,CenterY,initialDeg)
    conicalGradient.setColorAt(0,"#800000");
    conicalGradient.setColorAt(0.25,"#FF8000");
    conicalGradient.setColorAt(0.5,"#fff");
    conicalGradient.setColorAt(0.75,"#FF8000");
    conicalGradient.setColorAt(1,"#800000");
    painter.setBrush(QBrush(conicalGradient));
    painter.setPen(Qt::NoPen);
    painter.drawEllipse(QPoint(0,0),80,80);

    //draw the h-scale
    pen.setWidth(3);
    pen.setCapStyle(Qt::RoundCap);
    pen.setColor(hColor);
    painter.setPen(pen);

    //draw a background picture
    painter.drawPixmap(20,20,80,80,pixmap);

    for(int i=0;i<12;i++)
    {
        painter.drawLine(88,0,98,0);
        painter.rotate(30);
    }

    //draw the m-scale
    pen.setWidth(1);
    pen.setCapStyle(Qt::RoundCap);
    pen.setColor(sColor);
    painter.setPen(pen);

    for(int i=0;i<60;i++)
    {
        if(i%5!=0)//avoid recurring
        {
            painter.drawLine(92,0,98,0);

        }
        painter.rotate(6);

    }

    QTime time = QTime::currentTime();

    //draw the h-needle
    pen.setWidth(5);
    pen.setColor(hColor);
    pen.setStyle(Qt::DashDotLine);
    //pen.setStyle( Qt::DashDotDotLine);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    painter.setBrush(hColor);
    painter.save();
    painter.rotate(30*(time.hour()+time.minute()/60.0+time.second()/3600)-90);
    painter.drawRect(hRect);
    painter.restore();

    //draw the m-needle
    pen.setColor(mColor);
    painter.setPen(pen);
    painter.setBrush(mColor);
    painter.save();
    painter.rotate(6*(time.minute()+time.second()/60.0)-90);
    painter.drawRect(mRect);
    painter.restore();

    //draw the s-needle
    pen.setColor(sColor);
    painter.setPen(pen);
    painter.setBrush(sColor);
    painter.save();
    painter.rotate(6*(time.second())-90);
    painter.drawRect(sRect);
    painter.restore();

    //draw the center point
    pen.setColor(hColor);
    pen.setWidth(20);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    painter.drawPoint(0,0);

}

void Clock::keyPressEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_A)
    {
        qDebug() << "key a was pressed";
    }
}

void Clock::keyReleaseEvent(QKeyEvent *)
{

}

void Clock::mousePressEvent(QMouseEvent *e)

{
    if(e->button() == Qt::LeftButton)
    {
        qDebug() << "left button was pressed";

    }else {
        qDebug() <<"right button was pressed";
    }
}

void Clock::enterEvent(QEvent *)
{
    qDebug()<<"the mouse cursor enter";
}
