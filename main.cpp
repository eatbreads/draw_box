#include "mainwindow.h"
#include <QFile>
#include <qdebug.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QFile file(":/shaders/vertex.glsl");
    if (!file.exists()) {
        qDebug() << "Shader file not found!";
    } else {
        qDebug() << "Shader file found!";
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
