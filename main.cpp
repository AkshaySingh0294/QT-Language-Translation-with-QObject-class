#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTranslator>
#include <QDebug>
#include "hhhh.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    hhhh hhh;



    engine.rootContext()->setContextProperty("hhh",&hhh);

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();

}
