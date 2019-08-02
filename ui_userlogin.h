/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QLabel *label;
    QLineEdit *inputTextLoginName;
    QLabel *label_2;
    QLineEdit *inputTextLoginPassword;
    QCommandLinkButton *logonButton;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName(QString::fromUtf8("UserLogin"));
        UserLogin->resize(203, 171);
        label = new QLabel(UserLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 25, 40, 13));
        inputTextLoginName = new QLineEdit(UserLogin);
        inputTextLoginName->setObjectName(QString::fromUtf8("inputTextLoginName"));
        inputTextLoginName->setGeometry(QRect(63, 21, 131, 21));
        label_2 = new QLabel(UserLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 48, 60, 16));
        inputTextLoginPassword = new QLineEdit(UserLogin);
        inputTextLoginPassword->setObjectName(QString::fromUtf8("inputTextLoginPassword"));
        inputTextLoginPassword->setGeometry(QRect(63, 46, 131, 20));
        inputTextLoginPassword->setEchoMode(QLineEdit::Password);
        inputTextLoginPassword->setClearButtonEnabled(true);
        logonButton = new QCommandLinkButton(UserLogin);
        logonButton->setObjectName(QString::fromUtf8("logonButton"));
        logonButton->setGeometry(QRect(114, 70, 80, 41));
        label_3 = new QLabel(UserLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 110, 16));
        pushButton = new QPushButton(UserLogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(18, 140, 75, 23));

        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QDialog *UserLogin)
    {
        UserLogin->setWindowTitle(QApplication::translate("UserLogin", "Login", nullptr));
        label->setText(QApplication::translate("UserLogin", "Login:", nullptr));
        label_2->setText(QApplication::translate("UserLogin", "Password:", nullptr));
        logonButton->setText(QApplication::translate("UserLogin", "Logon", nullptr));
        label_3->setText(QApplication::translate("UserLogin", "Are you a new user?", nullptr));
        pushButton->setText(QApplication::translate("UserLogin", "Auto register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
