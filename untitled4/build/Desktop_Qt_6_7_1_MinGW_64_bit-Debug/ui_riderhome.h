/********************************************************************************
** Form generated from reading UI file 'riderhome.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIDERHOME_H
#define UI_RIDERHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_riderhome
{
public:
    QLabel *label;

    void setupUi(QWidget *riderhome)
    {
        if (riderhome->objectName().isEmpty())
            riderhome->setObjectName("riderhome");
        riderhome->resize(400, 300);
        label = new QLabel(riderhome);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 50, 111, 61));

        retranslateUi(riderhome);

        QMetaObject::connectSlotsByName(riderhome);
    } // setupUi

    void retranslateUi(QWidget *riderhome)
    {
        riderhome->setWindowTitle(QCoreApplication::translate("riderhome", "Form", nullptr));
        label->setText(QCoreApplication::translate("riderhome", "hello!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class riderhome: public Ui_riderhome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIDERHOME_H
