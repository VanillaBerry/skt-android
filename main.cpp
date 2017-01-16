#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include "img_edit/img_effects.h"
#include <QScrollArea>
#include <QFileDialog>
#include "QObject"

#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    QObject::connect(&w, SIGNAL(closing()), &a, SLOT (quit()));

    return a.exec();
}
