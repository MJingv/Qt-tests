#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>
#include <QPaintEvent>
#include <QTimer>

class Clock : public QWidget
{
    Q_OBJECT

public:
    Clock(QWidget *parent = 0);
    ~Clock();
protected:
    void paintEvent(QPaintEvent *);
private:
    QTimer timer;
};

#endif // CLOCK_H
