#ifndef PAINTDEVICE_H
#define PAINTDEVICE_H

#include <QWidget>
#include <QPaintDevice>
#include <QPixmap>

class PaintDevice : public QWidget
{
    Q_OBJECT

public:
    PaintDevice(QWidget *parent = 0);
    ~PaintDevice();

protected:
    void paintEvent(QPaintEvent*);
private:
    QPixmap pixmap;
};

#endif // PAINTDEVICE_H
