/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QTableWidget *tableWidget;
    QPushButton *btnCancelar;
    QLabel *labelCodigo;
    QLineEdit *lineEditUserCode;
    QLabel *Name;
    QLineEdit *lineEditUserName;
    QPushButton *btnEfetivaAlteracao;
    QPushButton *btnLimpar;
    QPushButton *btnConfirmar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNovo;
    QPushButton *btnAlterar;
    QPushButton *btnDeletar;
    QLabel *Password;
    QLineEdit *lineEditUserPassword;

    void setupUi(QDialog *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QString::fromUtf8("UserWindow"));
        UserWindow->setWindowModality(Qt::ApplicationModal);
        UserWindow->resize(532, 324);
        tableWidget = new QTableWidget(UserWindow);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 241, 281));
        tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget->verticalHeader()->setVisible(false);
        btnCancelar = new QPushButton(UserWindow);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(330, 270, 131, 31));
        labelCodigo = new QLabel(UserWindow);
        labelCodigo->setObjectName(QString::fromUtf8("labelCodigo"));
        labelCodigo->setGeometry(QRect(293, 61, 49, 20));
        lineEditUserCode = new QLineEdit(UserWindow);
        lineEditUserCode->setObjectName(QString::fromUtf8("lineEditUserCode"));
        lineEditUserCode->setEnabled(false);
        lineEditUserCode->setGeometry(QRect(334, 62, 131, 22));
        Name = new QLabel(UserWindow);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(299, 90, 41, 22));
        lineEditUserName = new QLineEdit(UserWindow);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));
        lineEditUserName->setGeometry(QRect(334, 92, 131, 22));
        btnEfetivaAlteracao = new QPushButton(UserWindow);
        btnEfetivaAlteracao->setObjectName(QString::fromUtf8("btnEfetivaAlteracao"));
        btnEfetivaAlteracao->setGeometry(QRect(330, 230, 131, 31));
        btnLimpar = new QPushButton(UserWindow);
        btnLimpar->setObjectName(QString::fromUtf8("btnLimpar"));
        btnLimpar->setGeometry(QRect(410, 143, 51, 21));
        btnConfirmar = new QPushButton(UserWindow);
        btnConfirmar->setObjectName(QString::fromUtf8("btnConfirmar"));
        btnConfirmar->setGeometry(QRect(330, 190, 131, 31));
        layoutWidget = new QWidget(UserWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 11, 254, 40));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnNovo = new QPushButton(layoutWidget);
        btnNovo->setObjectName(QString::fromUtf8("btnNovo"));

        horizontalLayout->addWidget(btnNovo);

        btnAlterar = new QPushButton(layoutWidget);
        btnAlterar->setObjectName(QString::fromUtf8("btnAlterar"));

        horizontalLayout->addWidget(btnAlterar);

        btnDeletar = new QPushButton(layoutWidget);
        btnDeletar->setObjectName(QString::fromUtf8("btnDeletar"));

        horizontalLayout->addWidget(btnDeletar);

        Password = new QLabel(UserWindow);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(297, 119, 41, 22));
        lineEditUserPassword = new QLineEdit(UserWindow);
        lineEditUserPassword->setObjectName(QString::fromUtf8("lineEditUserPassword"));
        lineEditUserPassword->setGeometry(QRect(334, 120, 131, 22));
        lineEditUserPassword->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditUserPassword->setEchoMode(QLineEdit::Password);
        lineEditUserPassword->setClearButtonEnabled(true);

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QDialog *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "User Management", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserWindow", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserWindow", "Nome", nullptr));
        btnCancelar->setText(QApplication::translate("UserWindow", "Cancelar", nullptr));
        labelCodigo->setText(QApplication::translate("UserWindow", "C\303\263digo:", nullptr));
        Name->setText(QApplication::translate("UserWindow", "Nome:", nullptr));
        btnEfetivaAlteracao->setText(QApplication::translate("UserWindow", "Alterar", nullptr));
        btnLimpar->setText(QApplication::translate("UserWindow", "Limpar", nullptr));
        btnConfirmar->setText(QApplication::translate("UserWindow", "Inserir", nullptr));
        btnNovo->setText(QApplication::translate("UserWindow", "Novo", nullptr));
        btnAlterar->setText(QApplication::translate("UserWindow", "Alterar", nullptr));
        btnDeletar->setText(QApplication::translate("UserWindow", "Deletar", nullptr));
        Password->setText(QApplication::translate("UserWindow", "Senha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
