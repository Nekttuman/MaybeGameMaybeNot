#include <QGuiApplication>
#include <QQmlApplicationEngine>
 
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
 
    QQmlApplicationEngine engine("../qml/main.qml");

    // qmlRegisterType<CurrentTime>("org.example", 1, 0, "CurrentTime");
 
    return app.exec();
}