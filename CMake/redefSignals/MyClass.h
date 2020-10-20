#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void slotShowAction(const QString& str);
};
#endif // WIDGET_H
