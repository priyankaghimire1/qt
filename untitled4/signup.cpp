#include "signup.h"
#include "ui_signup.h"
#include "login.h"
#include <QMessageBox>
#include <QtSql>

signup::signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signup),
    loginwindow(nullptr)
{

    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/db.sqlite");
    if(!db.open ())
        ui->label->setText ("Failed to open the database");
    else
        ui->label->setText("Connected .... ");
}


signup::~signup()
{
    delete ui;
    if (loginwindow) {
        delete loginwindow;
    }
}
void signup::on_pushButton_clicked()
{
    QString Phonenumber, Pin;
    Phonenumber = ui->lineEdit_Phonenumber->text();
    Pin = ui->lineEdit_Pin->text();

    // Ensure the database is open
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db.sqlite");
    if (!db.isOpen()) {
        if (!db.open()) {
            QMessageBox::critical(this, "Error", "Failed to connect to the database.");
            return;
        }
    }

    // Prepare the query to check for duplicates
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM user WHERE phonenumber = :phonenumber");
    checkQuery.bindValue(":phonenumber", Phonenumber);

    // Execute the query
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Error", "Failed to check for duplicates.");
        qDebug() << "Error checking for duplicates: " << checkQuery.lastError();
        return;
    }

    // Check the result
    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Duplicate", "The phone number already exists.");
        return;
    }

    // Prepare the insertion query
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO user (phonenumber, pin) VALUES (:phonenumber, :pin)");
    insertQuery.bindValue(":phonenumber", Phonenumber);
    insertQuery.bindValue(":pin", Pin);

    // Execute the insertion query
    if (!insertQuery.exec()) {
        QMessageBox::critical(this, "Error", "Failed to insert data into the database.");
        qDebug() << "Error inserting data: " << insertQuery.lastError();
    } else {
        QMessageBox::information(this, "Success", "Data inserted successfully.");
        QMessageBox::information(this, "Success", "Sign-in successful. Redirecting to login...");

        // Show the login window
        if (!loginwindow) {
            loginwindow = new login(this);
        }
        loginwindow->show();
        this->hide(); // Hide the sign-in window
    }
}

void signup::on_pushButton_2_clicked()
{
    QCoreApplication::quit();
}


void signup::on_pushButton_3_clicked()
{
    QString Phonenumber, Pin;
    Phonenumber = ui->lineEdit_Phonenumber->text();
    Pin = ui->lineEdit_Pin->text();


    // Ensure the database is open
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db1.sqlite");
    if (!db.isOpen()) {
        if (!db.open()) {
            QMessageBox::critical(this, "Error", "Failed to connect to the database.");
            return;
        }
    }

    // Prepare the query to check for duplicates
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM user WHERE phonenumber = :phonenumber");
    checkQuery.bindValue(":phonenumber", Phonenumber);

    // Execute the query
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Error", "Failed to check for duplicates.");
        qDebug() << "Error checking for duplicates: " << checkQuery.lastError();
        return;
    }

    // Check the result
    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Duplicate", "The phone number already exists.");
        return;
    }

    // Prepare the insertion query
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO user (phonenumber, pin) VALUES (:phonenumber, :pin)");
    insertQuery.bindValue(":phonenumber", Phonenumber);
    insertQuery.bindValue(":pin", Pin);

    // Execute the insertion query
    if (!insertQuery.exec()) {
        QMessageBox::critical(this, "Error", "Failed to insert data into the database.");
        qDebug() << "Error inserting data: " << insertQuery.lastError();
    } else {
        QMessageBox::information(this, "Success", "Data inserted successfully.");
        QMessageBox::information(this, "Success", "Sign-in successful. Redirecting to login...");

        // Show the login window
        if (!loginwindow) {
            loginwindow = new login(this);
        }
        loginwindow->show();
        this->hide(); // Hide the sign-in window
    }
}
