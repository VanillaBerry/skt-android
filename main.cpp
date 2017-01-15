#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include "img_edit/img_effects.h"
#include <QScrollArea>
#include <QFileDialog>
#include "QObject"

//#include <QAndroidJniObject>
//#include "androidfiledialog.h"
#include <QMessageBox>

/*QString filepath(){
     QAndroidJniObject jb = QAndroidJniObject::callStaticObjectMethod
            ("android/dialogs/MyPath"
             ,"getPath", "()Ljava/lang/String");
     QString str = jb.toString();


     return str;
};*/

    /*return QAndroidJniObject::callStaticMethod<jint>
(”com/kdab/training/MyJavaClass” // class name
, ”fibonacci” // method name
, ”(I)I” // signature
, n);*/
/*};*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    QObject::connect(&w, SIGNAL(closing()), &a, SLOT (quit()));

    return a.exec();
}
