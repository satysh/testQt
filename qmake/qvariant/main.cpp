#include <QtCore>

int main(int argc, char** argv)
{
  QCoreApplication(argc, argv);
  QVariant v1(34);
  QVariant v2(true);
  QVariant v3("Lostris");

  qDebug() << QVariant::typeToName(v1.type());
  qDebug() << QVariant::typeToName(v2.type());
  qDebug() << QVariant::typeToName(v3.type());

  QVariant v(5.0);
  qDebug() << QVariant::typeToName(v.type());

  QVariant v4(23);
  int a = v4.toInt() + 5;
  qDebug() << a;
  return 0;
}
