#ifndef LOGIN_RIDER_H
#define LOGIN_RIDER_H

#include <QtSql>
#include <QMessageBox>
#include <QMainWindow>
#include "viewrequests.h"

namespace Ui {
class login_rider;
}

class login_rider : public QMainWindow
{
    Q_OBJECT

public:
    explicit login_rider(QWidget *parent = nullptr);
    ~login_rider();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::login_rider *ui;
    viewRequests *viewrequestsWindow;
    QSqlDatabase db;
};

#endif // LOGIN_RIDER_H
