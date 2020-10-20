#include "Test.h"
#include <QDebug>

Test::Test() : QObject()
{
}

void Test::slotPrint()
{
    qDebug() << "Ura!";
}

