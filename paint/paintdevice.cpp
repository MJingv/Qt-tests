#include "paintdevice.h"
#include <QPainter>
#include <QRect>
#include <QPen>
#include <QBrush>

PaintDevice::PaintDevice(QWidget *parent)
    : QWidget(parent)
{
    pixmap.load(":/1.jpg");
    resize(600,600);
}

PaintDevice::~PaintDevice()
{

}

void PaintDevice::paintEvent(QPaintEvent *)
{
    //define Painter for the painter (parent!!)
    QPainter painter(this);
    QPen pen;
    QBrush  brush;
    QRect rect(50,50,200,150);// (x,y,width,height) :px

    //draw a rec
    pen.setWidth(2);
    pen.setColor(Qt::white);
   // pen.setStyle(Qt::DotLine);
    pen.setJoinStyle(Qt::RoundJoin);
    painter.setPen(pen);
    brush.setStyle(Qt::CrossPattern);
    painter.setBrush(brush);

    painter.drawRect(rect);

    //draw three lines with differert joinstyle
    pen.setCapStyle(Qt::SquareCap);
    painter.setPen(pen);
    painter.drawLine(50,300,200,300);
    pen.setCapStyle(Qt::FlatCap);
    pen.setColor(Qt::black);
    pen.setWidth(30);
    painter.setPen(pen);

    painter.drawLine(50,400,300,400);


    pen.setCapStyle(Qt::RoundCap);
    pen.setColor(Qt::red);
    pen.setWidth(20);
    painter.setPen(pen);

    painter.drawLine(50,500,400,500);

    //draw a picture
    painter.drawPixmap(0,0,400,300,pixmap);



}
