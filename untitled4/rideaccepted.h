#ifndef RIDEACCEPTED_H
#define RIDEACCEPTED_H

#include <QMainWindow>

namespace Ui {
class rideaccepted;
}

class rideaccepted : public QMainWindow
{
    Q_OBJECT

public:
    explicit rideaccepted(QWidget *parent = nullptr);
    ~rideaccepted();

private:
    Ui::rideaccepted *ui;
};

#endif // RIDEACCEPTED_H
