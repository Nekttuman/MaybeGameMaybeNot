#include <QGuiApplication>
#include <QQmlApplicationEngine>
 
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
 
    QQmlApplicationEngine engine("../tut.qml");

 
    return app.exec();
}