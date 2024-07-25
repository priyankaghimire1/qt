#include "signup.h"
//#include "login.h"
#include <QApplication>
#include<QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug () << "start";

    QSqlDatabase db;
    db =QSqlDatabase :: addDatabase ("QSQLITE");
    db.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db.sqlite");

    if(!db.open ()){

        qDebug() << "problem opening database";
    }
    qDebug() << "end";
    QString query="CREATE TABLE IF NOT EXISTS user("
                    " USERID INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "PHONENUMBER INTEGER NOT NULL,"
                    "PIN INTEGER NOT NULL,"
                    "location_from TEXT,"
                    "location_to TEXT,"
                    "status TEXT DEFAULT 'on hold');";

    QSqlQuery qry;
    if(!qry.exec (query))
    {
        qDebug () << "error creating table";
    }
    db.close();
    qDebug () << "end";
    qDebug () << "start";

    QSqlDatabase db1;
    db1 =QSqlDatabase :: addDatabase ("QSQLITE");
    db1.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db1.sqlite");

    if(!db1.open ()){

        qDebug() << "problem opening database";
    }
    qDebug() << "end";
    QString query1="CREATE TABLE IF NOT EXISTS rider("
                     " RIDERID INTEGER PRIMARY KEY AUTOINCREMENT,"
                     "PHONENUMBER INTEGER NOT NULL,"
                     "PIN INTEGER NOT NULL);";

    QSqlQuery qry1;
    if(!qry1.exec (query1))
    {
        qDebug () << "error creating table";
    }
    db1.close();
    qDebug () << "end";
    signup w;
    //login z;
    w.show();
    //z.show();
    return a.exec();
}
