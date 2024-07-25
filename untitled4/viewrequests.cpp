#include "viewrequests.h"
#include "ui_viewrequests.h"
#include"rideaccepted.h"

viewRequests::viewRequests(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::viewRequests)
    ,rideacceptedwindow(nullptr)
{
    ui->setupUi(this);
}

viewRequests::~viewRequests()
{
    delete ui;
}

void viewRequests::on_pushButton_clicked()
{
    QSqlQueryModel *modal= new QSqlQueryModel();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db.sqlite");
    db.open();
    QSqlQuery query = QSqlQuery(db);
    query.prepare ("SELECT USERID, PHONENUMBER, location_from, location_to, status FROM user WHERE status = 'on hold';");
    query.exec();
    modal->setQuery(std::move(query));
    ui->tableView->setModel(modal);
    db.close();
}


//void viewRequests::on_pushButton_2_clicked()
//{
    //if(!acceptridesWindow){
    //    acceptridesWindow= new acceptrides(acceptridesWindow);
    //}
    //acceptridesWindow->show();
    //this->hide();
//}


void viewRequests::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db.sqlite");
    db.open();
    QSqlQuery query = QSqlQuery(db);
    query.prepare("UPDATE user SET status = ' Accepted ' WHERE USERID = " + val + ";");
    query.exec();
    if (!query.exec()){
        QMessageBox::warning(this, "Failure", "Invalid phone number or pin.");
    }
    if(!rideacceptedwindow){
        rideacceptedwindow = new rideaccepted(rideacceptedwindow);
    }
    rideacceptedwindow->show();
    this->hide();
    db.close();
}

