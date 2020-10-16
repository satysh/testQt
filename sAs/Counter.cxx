#include "Counter.h"
#include <QDebug>

Counter::Counter() : QObject()
                   , m_nValue(0)
{
}

void Counter::slotInc()
{
    emit counterChanged(++m_nValue);
    if (m_nValue > 5) {
        qDebug() << "Goodbye Suka!";
        emit goodbye();
    }
}


