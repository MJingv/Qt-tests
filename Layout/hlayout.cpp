#include "hlayout.h"
#include "ui_hlayout.h"

HLayout::HLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLayout)
{
    ui->setupUi(this);
}

HLayout::~HLayout()
{
    delete ui;
}
