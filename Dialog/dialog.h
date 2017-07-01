#ifndef DIALOG_H
#define DIALOG_H
#include <QErrorMessage>
#include <QWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QWidget
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
public slots:
    void colorDialogSlot(void);
    void fontDialogSlot(void);
    void inputDialogSlot(void);
    void errorDialogSlot(void);
    void infoDialogSlot(void);
    void warningDialogSlot(void);

private:
    Ui::Dialog *ui;
    QErrorMessage errorMessage;
};

#endif // DIALOG_H
