#include <QtCore>

int main(int argc, char** argv)
{
  QCoreApplication app(argc, argv);

  QSet<QString> set1;
  QSet<QString> set2;
  set1 << "Therion" << "Nightwish" << "Xandria";
  set2 << "Mantus" << "Hggard" << "Therion";

  QSet<QString> setResult = set1;
  setResult.unite(set2);
  qDebug() << "unite = " << setResult.toList();

  setResult = set1;
  setResult.intersect(set2);
  qDebug() << "intersect set1 with set2 = " << setResult.toList();

  setResult = set1;
  setResult.subtract(set2);
  qDebug() << "subtract set1 and set2 = " << setResult.toList();

  return 0;
}
