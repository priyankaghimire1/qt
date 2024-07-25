/********************************************************************************
** Form generated from reading UI file 'loginrider.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINRIDER_H
#define UI_LOGINRIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginrider
{
public:
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Pin;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Phonenumber;
    QPushButton *pushButton;

    void setupUi(QWidget *loginrider)
    {
        if (loginrider->objectName().isEmpty())
            loginrider->setObjectName("loginrider");
        loginrider->resize(545, 460);
        pushButton_2 = new QPushButton(loginrider);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(410, 220, 93, 29));
        layoutWidget = new QWidget(loginrider);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 200, 226, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Pin = new QLineEdit(layoutWidget);
        lineEdit_Pin->setObjectName("lineEdit_Pin");

        horizontalLayout_2->addWidget(lineEdit_Pin);

        layoutWidget_2 = new QWidget(loginrider);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(100, 150, 226, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_Phonenumber = new QLineEdit(layoutWidget_2);
        lineEdit_Phonenumber->setObjectName("lineEdit_Phonenumber");

        horizontalLayout->addWidget(lineEdit_Phonenumber);

        pushButton = new QPushButton(loginrider);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 180, 93, 29));

        retranslateUi(loginrider);

        QMetaObject::connectSlotsByName(loginrider);
    } // setupUi

    void retranslateUi(QWidget *loginrider)
    {
        loginrider->setWindowTitle(QCoreApplication::translate("loginrider", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("loginrider", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("loginrider", "Pin", nullptr));
        label->setText(QCoreApplication::translate("loginrider", "Phonenumber", nullptr));
        pushButton->setText(QCoreApplication::translate("loginrider", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginrider: public Ui_loginrider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINRIDER_H
