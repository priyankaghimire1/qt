#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include <QMessageBox>
#include <QCoreApplication>
#include "destination.h"
#include "riderhome.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login *ui;
    QSqlDatabase db;
    destination *destinationWindow;    // Add a member for the destination window
    riderhome *riderhomewindow;
};

#endif // LOGIN_H
