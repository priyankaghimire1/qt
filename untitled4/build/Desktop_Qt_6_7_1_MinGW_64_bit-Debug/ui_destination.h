/********************************************************************************
** Form generated from reading UI file 'destination.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESTINATION_H
#define UI_DESTINATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_destination
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *lineEdit_From;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_To;

    void setupUi(QWidget *destination)
    {
        if (destination->objectName().isEmpty())
            destination->setObjectName("destination");
        destination->resize(532, 435);
        pushButton = new QPushButton(destination);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 160, 93, 29));
        pushButton_2 = new QPushButton(destination);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 110, 93, 29));
        splitter = new QSplitter(destination);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(30, 80, 217, 26));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        lineEdit_From = new QLineEdit(splitter);
        lineEdit_From->setObjectName("lineEdit_From");
        splitter->addWidget(lineEdit_From);
        layoutWidget = new QWidget(destination);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 110, 226, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_To = new QLineEdit(layoutWidget);
        lineEdit_To->setObjectName("lineEdit_To");

        horizontalLayout->addWidget(lineEdit_To);


        retranslateUi(destination);

        QMetaObject::connectSlotsByName(destination);
    } // setupUi

    void retranslateUi(QWidget *destination)
    {
        destination->setWindowTitle(QCoreApplication::translate("destination", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("destination", "Click me!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("destination", "Exit", nullptr));
        label->setText(QCoreApplication::translate("destination", "From", nullptr));
        label_2->setText(QCoreApplication::translate("destination", "To", nullptr));
    } // retranslateUi

};

namespace Ui {
    class destination: public Ui_destination {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESTINATION_H
