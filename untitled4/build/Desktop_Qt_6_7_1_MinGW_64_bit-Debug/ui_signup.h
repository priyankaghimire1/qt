/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Phonenumber;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Pin;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(514, 407);
        groupBox = new QGroupBox(signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 90, 391, 141));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 110, 93, 29));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 20, 255, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_Phonenumber = new QLineEdit(layoutWidget);
        lineEdit_Phonenumber->setObjectName("lineEdit_Phonenumber");

        horizontalLayout->addWidget(lineEdit_Phonenumber);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 110, 93, 29));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(70, 60, 183, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Pin = new QLineEdit(layoutWidget_2);
        lineEdit_Pin->setObjectName("lineEdit_Pin");

        horizontalLayout_2->addWidget(lineEdit_Pin);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 110, 121, 29));
        label = new QLabel(signup);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 240, 231, 21));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("signup", "Signin", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "Login as user", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Phonenumber", nullptr));
        pushButton_2->setText(QCoreApplication::translate("signup", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Pin", nullptr));
        pushButton_3->setText(QCoreApplication::translate("signup", "Login as rider", nullptr));
        label->setText(QCoreApplication::translate("signup", "[+] Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
