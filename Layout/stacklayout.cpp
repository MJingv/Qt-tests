#include "stacklayout.h"
#include <QHBoxLayout>
#include <QStackedLayout>

StackLayout::StackLayout(QWidget *parent) : QWidget(parent)
{
    QFont font;
    font.setPointSize(18);
    font.setBold(true);

    h = new HLayout;
    g = new GLayout;

    upLayout = new QStackedLayout;
    upLayout->addWidget(h);
    upLayout->addWidget(g);

    nextBtn = new QPushButton("next");
    preBtn = new QPushButton("pre");
    closeBtn = new QPushButton("close");

    QHBoxLayout* downLayout = new QHBoxLayout ;
    downLayout->addWidget(nextBtn);
    downLayout->addWidget(preBtn);
    downLayout->addWidget(closeBtn);

    QVBoxLayout* layout =new QVBoxLayout;
    layout->addLayout(upLayout);
    layout->addLayout(downLayout);

    this->setLayout(layout);
    this->resize(400,400);

    connect(nextBtn,SIGNAL(clicked()),this,SLOT(nextSlot()));
    connect(preBtn,SIGNAL(clicked()),this,SLOT(preSlot()));
    connect(closeBtn,SIGNAL(clicked()),this,SLOT(close()));

}

void StackLayout::nextSlot()
{
    int i = upLayout->currentIndex();
    i=(i+1)%2;
    upLayout->setCurrentIndex(i);
}

void StackLayout::preSlot()
{
    int i = upLayout->currentIndex();
    if(0 == i){
        i=1;

    }else{
        i--;
    }
    upLayout->setCurrentIndex(i);
}





