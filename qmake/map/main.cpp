#include <QtCore>

int main(int argc, char** argv)
{
  QCoreApplication a(argc, argv);
  QMap<QString, QString> mapPhonebook;
  mapPhonebook["Piggy"]  = "+49 631322187";
  mapPhonebook["Kermit"] = "+49 631322181";
  mapPhonebook["Gonzo"]  = "+49 631322186";

  QMap<QString, QString>::iterator it = mapPhonebook.begin();
  for (; it!=mapPhonebook.end(); ++it) {
    qDebug() << "Name:" << it.key()
             << " Phone:" << it.value();
  }

  if (mapPhonebook.contains("Kermit")) {
    qDebug() << "Phone:" << mapPhonebook["Kermit"];
  }
  return 0;
}
