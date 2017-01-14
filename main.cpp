#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include "img_edit/img_effects.h"
#include "image_editor.h"
#include <QScrollArea>
#include <QFileDialog>

/*QT += androidextras*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    QImage img_orig;


//    fileDialog.setOption(QFileDialog::DontUseNativeDialog,true);
    QString str = QFileDialog::getOpenFileName(0, "Select Image", "", "*.bmp *.jpg");

/*    QFileDialog fileDialog(0,"Select Image", "./..", "*.bmp *.jpg");
    fileDialog.setAcceptMode(QFileDialog::AcceptOpen);
    fileDialog.setFileMode(QFileDialog::ExistingFiles);
    if (QDialog::Accepted != fileDialog.exec())
        return NULL;

    QStringList sel = fileDialog.selectedFiles();*/

    img_orig.load(str);


    image_editor img_edit;

    img_edit.setImage(img_orig);
    img_edit.show();


    img_orig.save("../skt-desktop/bitmaps/gus_2.jpg",0,100);

    return a.exec();
}
