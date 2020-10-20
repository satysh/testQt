#include <QObject>
#include <QDebug>

int main(int argc, char const *argv[])
{
    QObject* pobj1 = new QObject;
    QObject* pobj2 = new QObject(pobj1);
    QObject* pobj4 = new QObject(pobj2);
    QObject* pobj3 = new QObject(pobj1);

    pobj2->setObjectName("the first child of pobj1");
    pobj3->setObjectName("the second child of pobj1");
    pobj4->setObjectName("the first child of pobj2");
    pobj1->dumpObjectTree();

    for (QObject* pobj = pobj4; pobj; pobj = pobj->parent()) {
        qDebug() << pobj->objectName();
    }
    return 0;
}
