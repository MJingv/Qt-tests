#include "glayout.h"
#include <QGridLayout>
#include <QFont>
#include <QPushButton>

GLayout::GLayout(QWidget *parent) : QWidget(parent)
{
    QFont font;
    font.setPointSize(18);
    font.setBold(true);

    for(int i=0;i<7;i++){
        btns[i] = new QPushButton(tr("btn%1").arg(i));
        btns[i]->setFont(font);
        btns[i]->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);


    }

    QGridLayout* layout = new QGridLayout;
    layout->addWidget(btns[0],0,0,1,1);
    layout->addWidget(btns[1],0,1,1,1);
    layout->addWidget(btns[2],0,2,1,1);
    layout->addWidget(btns[3],1,0,1,1);
    layout->addWidget(btns[4],1,1,1,1);
    layout->addWidget(btns[5],1,2,2,1);
    layout->addWidget(btns[6],2,0,1,2);


    this->setLayout(layout);
    this->resize(400,400);

}
