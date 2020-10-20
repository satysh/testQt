#include <iostream>

#include <QtWidgets>
#include <QtGlobal>
#include <QString>

void messageToFile(QtMsgType                 type,
                   const QMessageLogContext& context,
                   const QString&            msg
                   )
{
    QFile file("protocol.log");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        return;
    QString strDateTime =
        QDateTime::currentDateTime().toString("dd.MM.yy-hh:mm");

    QTextStream out(&file);
    switch (type) {
        case QtDebugMsg:
            out << strDateTime << " Debug: " << msg
                << ", " << context.file << endl;
            break;
        case QtWarningMsg:
            out << strDateTime << " Warning: " << msg
                << ", " << context.file << endl;
            break;
        case QtCriticalMsg:
            out << strDateTime << " Critical: " << msg
                << ", " << context.file << endl;
            break;
        case QtFatalMsg:
            out << strDateTime << " Fatal: " << msg
                << ", " << context.file << endl;
            abort();
    }
}

// Для того чтобы скрыть вывод отладочной информации во время релиза
void dummyOutput(QtMsgType, const QMessageLogContext&, const QString&)
{
    /*empty*/
}
#ifndef QT_DEBUG
#define QT_DEBUG

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
#ifndef QT_DEBUG
    qInstallMessageHandler(dummyOutput);
#endif
#ifdef QT_DEBUG
    qInstallMessageHandler(messageToFile);
#endif

    qDebug() << "Test1" << 123 << "Test2" << 456;

    return 0;
}
