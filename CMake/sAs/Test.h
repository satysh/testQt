#ifndef Test_H
#define Test_H
#pragma once

#include <QObject>

class Test : public QObject
{
    Q_OBJECT
public:
    Test();

public slots:
    void slotPrint();
};

#endif // Test_H
