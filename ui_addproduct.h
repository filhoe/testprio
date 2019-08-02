/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addproduct
{
public:
    QLabel *labelProductName;
    QLineEdit *lineEdit;
    QPushButton *btnOKAddProduct;
    QPushButton *btnCancelAddProduct;

    void setupUi(QDialog *addproduct)
    {
        if (addproduct->objectName().isEmpty())
            addproduct->setObjectName(QString::fromUtf8("addproduct"));
        addproduct->resize(276, 120);
        labelProductName = new QLabel(addproduct);
        labelProductName->setObjectName(QString::fromUtf8("labelProductName"));
        labelProductName->setGeometry(QRect(15, 30, 91, 20));
        lineEdit = new QLineEdit(addproduct);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(112, 30, 151, 22));
        btnOKAddProduct = new QPushButton(addproduct);
        btnOKAddProduct->setObjectName(QString::fromUtf8("btnOKAddProduct"));
        btnOKAddProduct->setGeometry(QRect(183, 80, 80, 24));
        btnCancelAddProduct = new QPushButton(addproduct);
        btnCancelAddProduct->setObjectName(QString::fromUtf8("btnCancelAddProduct"));
        btnCancelAddProduct->setGeometry(QRect(94, 80, 80, 24));

        retranslateUi(addproduct);

        QMetaObject::connectSlotsByName(addproduct);
    } // setupUi

    void retranslateUi(QDialog *addproduct)
    {
        addproduct->setWindowTitle(QApplication::translate("addproduct", "Add Product", nullptr));
        labelProductName->setText(QApplication::translate("addproduct", "Product name:", nullptr));
        btnOKAddProduct->setText(QApplication::translate("addproduct", "OK", nullptr));
        btnCancelAddProduct->setText(QApplication::translate("addproduct", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addproduct: public Ui_addproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
