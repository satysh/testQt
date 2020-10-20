#include "MyClass.h"

#include <QDebug>
#include <QSignalMapper>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QSignalMapper* psigMapper = new QSignalMapper(this);
    connect(psigMapper, SIGNAL(mapped(const QString&)),
            this, SLOT(slotShowAction(const QString&))
            );
    QPushButton* pcmd1 = new QPushButton("Button1");
    connect(pcmd1, SIGNAL(clicked()), psigMapper, SLOT(map()));
    psigMapper->setMapping(pcmd1, "Button1 Action");

    QPushButton* pcmd2 = new QPushButton("Button2");
    connect(pcmd2, SIGNAL(clicked()), psigMapper, SLOT(map()));
    psigMapper->setMapping(pcmd2, "Button2 Action");

    pcmd1->show();
    pcmd2->show();
}

Widget::~Widget()
{
}

void Widget::slotShowAction(const QString& str)
{
    qDebug() << str;
}
