#ifndef SIGNUP_H
#define SIGNUP_H


#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include <QMessageBox>
#include <QCoreApplication>
#include "login.h"



QT_BEGIN_NAMESPACE
namespace Ui {
class signup;
}
QT_END_NAMESPACE

class signup: public QMainWindow
{
    Q_OBJECT

public:
    signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::signup *ui;
    QSqlDatabase db;
    login *loginwindow;

};
#endif // SIGNUP_H
