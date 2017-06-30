#ifndef STACKLAYOUT_H
#define STACKLAYOUT_H

#include <QWidget>
#include <QPushButton>
#include "glayout.h"
#include "hlayout.h"
#include <QStackedLayout>

class StackLayout : public QWidget
{
    Q_OBJECT
public:
    explicit StackLayout(QWidget *parent = 0);

signals:

public slots:
    void nextSlot(void);
    void preSlot(void);

private:
    HLayout* h;
    GLayout* g;

    QPushButton* nextBtn;
    QPushButton* preBtn;
    QPushButton* closeBtn;

    QStackedLayout* upLayout;
    QStackedLayout* downLayout;


};

#endif // STACKLAYOUT_H
