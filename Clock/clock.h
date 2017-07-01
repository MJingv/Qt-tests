#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>
#include <QPaintEvent>
#include <QTimer>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPixmap>
#include <QDialog>
#include <QDialog>

class Clock : public QWidget
{
    Q_OBJECT

public:
    Clock(QWidget *parent = 0);
    ~Clock();
protected:
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);
    void mousePressEvent(QMouseEvent *);
    void enterEvent(QEvent *);

private:
    QTimer timer;
    QPixmap pixmap;

};

#endif // CLOCK_H
