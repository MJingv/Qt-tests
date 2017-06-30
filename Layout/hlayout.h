#ifndef HLAYOUT_H
#define HLAYOUT_H

#include <QWidget>

namespace Ui {
class HLayout;
}

class HLayout : public QWidget
{
    Q_OBJECT

public:
    explicit HLayout(QWidget *parent = 0);
    ~HLayout();

private:
    Ui::HLayout *ui;
};

#endif // HLAYOUT_H
