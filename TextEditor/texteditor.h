#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QMainWindow>
#include <QMouseEvent>
namespace Ui {
class TextEditor;
}

class TextEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit TextEditor(QWidget *parent = 0);
    ~TextEditor();
private slots:
    void openActSlot(void);
    void saveActSlot(void);

private:
    Ui::TextEditor *ui;
};

#endif // TEXTEDITOR_H
