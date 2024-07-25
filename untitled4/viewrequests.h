#ifndef VIEWREQUESTS_H
#define VIEWREQUESTS_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>
#include "rideaccepted.h"

namespace Ui {
class viewRequests;
}

class viewRequests : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewRequests(QWidget *parent = nullptr);
    ~viewRequests();



private slots:
    void on_pushButton_clicked();

    //void on_pushButton_2_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::viewRequests *ui;
    QSqlDatabase db;
    rideaccepted *rideacceptedwindow;
};

#endif // VIEWREQUESTS_H
