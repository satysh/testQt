#include <QtCore>

int main(int argc, char** argv)
{
  QCoreApplication a(argc, argv);
  QMultiMap<QString, QString> mapPhonebook;
  mapPhonebook.insert("Piggy", "+49 631322187");
  mapPhonebook.insert("Piggy", "+49 631322186");
  mapPhonebook.insert("Piggy", "+49 631322181");

  QMultiMap<QString, QString>::iterator it = mapPhonebook.find("Piggy");

  for (; it!=mapPhonebook.end(); ++it) {
    qDebug() << it.value();
  }
  return 0;
}
