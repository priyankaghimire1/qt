#include "rideaccepted.h"
#include "ui_rideaccepted.h"

rideaccepted::rideaccepted(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::rideaccepted)
{
    ui->setupUi(this);
}

rideaccepted::~rideaccepted()
{
    delete ui;
}
