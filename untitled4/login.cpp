#include "login.h"
#include "ui_login.h"
#include "destination.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
    ,destinationWindow(nullptr)// Initialize the destination window pointer
    ,riderhomewindow(nullptr)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
    if (destinationWindow) {
        delete destinationWindow;
    }
}

void login::on_pushButton_clicked()
{
    QString Phonenumber, Pin;
    Phonenumber = ui->lineEdit_Phonenumber->text();
    Pin = ui->lineEdit_Pin->text();
    if (true){


        // Ensure the database is open
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db.sqlite");
        if (!db.isOpen()) {
            if (!db.open()) {
                QMessageBox::critical(this, "Error", "Failed to connect to the database.");
                return;
            }
        }

        // Prepare the query to check for a matching record
        QSqlQuery query;
        query.prepare("SELECT COUNT(*) FROM user WHERE phonenumber = :phonenumber AND pin = :pin");
        query.bindValue(":phonenumber", Phonenumber);
        query.bindValue(":pin", Pin);

        // Execute the query
        if (!query.exec()) {
            QMessageBox::critical(this, "Error", "Failed to execute query.");
            qDebug() << "Error executing query: " << query.lastError();
            return;
        }

        // Check the result
        if (query.next() && query.value(0).toInt() > 0) {
            QMessageBox::information(this, "Success", "Login successful.");
            // Proceed to the next step, e.g., open the main window
            if (!destinationWindow) {
                destinationWindow = new destination(this);
            }
            destinationWindow->setCurrentPhoneNumber(Phonenumber); // Pass the phone number
            destinationWindow->show();
            this->hide(); // Optional: Hide the login window
        }
        else {
            QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
            db1.setDatabaseName("D:/Priyanka/Coding/qt/qt/database/db1.sqlite");
            if (!db1.isOpen()) {
                if (!db1.open()) {
                    QMessageBox::critical(this, "Error", "Failed to connect to the database.");
                    return;
                }
            }

            // Prepare the query to check for a matching record
            QSqlQuery query1;
            query1.prepare("SELECT COUNT(*) FROM user WHERE phonenumber = :phonenumber AND pin = :pin");
            query1.bindValue(":phonenumber", Phonenumber);
            query1.bindValue(":pin", Pin);

            // Execute the query
            if (!query1.exec()) {
                QMessageBox::critical(this, "Error", "Failed to execute query.");
                qDebug() << "Error executing query: " << query1.lastError();
                return;
            }

            // Check the result
            if (query1.next() && query1.value(0).toInt() > 0) {
                QMessageBox::information(this, "Success", "Login successful.");
                if (!riderhomewindow) {
                    riderhomewindow = new riderhome(this);
                }
                //destinationWindow->setCurrentPhoneNumber(Phonenumber); // Pass the phone number
                riderhomewindow->show();
                this->hide();
            }}
        }
    }


