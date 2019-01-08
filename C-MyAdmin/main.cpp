#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();


      /* QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("localhost");
       db.setUserName("root");
       db.setPassword("");
       db.setDatabaseName("cmyadmin");

       if(db.open()){
           qDebug() << "Db connect ok";
       }else{
           qDebug() << "Db connect not ok";
       }*/

    return a.exec();

}
