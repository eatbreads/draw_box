#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myopenglwidget.h"
#include "trianglewidget.h"
#include "rectangle.h"
#include "texturedrectangle_s.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actiondraw_triggered();

    void on_actionclear_triggered();

    //void on_actiondraw_triggered(bool checked);

private:
    Ui::MainWindow *ui;
    TexturedRectangle_s * trectangle;
    OpenGLRectangle * rectangle;
    MyOpenGLWidget *myopenglptr;
    TriangleWidget *triangleptr;
};
#endif // MAINWINDOW_H
