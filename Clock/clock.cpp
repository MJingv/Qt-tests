#include "clock.h"
#include <QRect>
#include <QPainter>
#include <QPen>
#include <QColor>
#include <QRect>
#include <QtMath>
#include <QTime>

Clock::Clock(QWidget *parent)
    : QWidget(parent)
{
    resize(400,400);
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
    QColor hColor(Qt::black);
    QColor mColor(Qt::blue);
    QColor sColor(Qt::red);

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

    //draw the h-scale
    pen.setWidth(3);
    pen.setColor(hColor);
    painter.setPen(pen);

    for(int i=0;i<12;i++)
    {
        painter.drawLine(88,0,98,0);
        painter.rotate(30);
    }

    //draw the m-scale
    pen.setWidth(1);
    pen.setColor(mColor);
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

    //draw the h-scale
    pen.setColor(hColor);
    painter.setPen(pen);
    painter.setBrush(hColor);
    painter.save();
    painter.rotate(30*(time.hour()+time.minute()/60.0+time.second()/3600)-90);
    painter.drawRect(hRect);
    painter.restore();

    //draw the m-scale
    pen.setColor(mColor);
    painter.setPen(pen);
    painter.setBrush(mColor);
    painter.save();
    painter.rotate(6*(time.minute()+time.second()/60.0)-90);
    painter.drawRect(mRect);
    painter.restore();

    //draw the s-scale
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

