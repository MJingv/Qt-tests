#ifndef GLAYOUT_H
#define GLAYOUT_H

#include <QWidget>
#include <QPushButton>

class GLayout : public QWidget
{
    Q_OBJECT
public:
    explicit GLayout(QWidget *parent = 0);

signals:

public slots:
private:
    QPushButton* btns[7];
};

#endif // GLAYOUT_H
