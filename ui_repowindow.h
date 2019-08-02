/********************************************************************************
** Form generated from reading UI file 'repowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPOWINDOW_H
#define UI_REPOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RepoWindow
{
public:
    QTableWidget *tableWidget;
    QPushButton *btnCancelar;
    QLabel *labelCodigo;
    QLineEdit *lineEditCodigo;
    QLabel *URL;
    QLineEdit *lineEditURL;
    QPushButton *btnEfetivaAlteracao;
    QPushButton *btnLimpar;
    QPushButton *btnConfirmar;
    QPushButton *btnAlterar;
    QPushButton *btnNovo;
    QPushButton *btnDeletar;
    QLabel *label;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QComboBox *comboBoxVersionControl;

    void setupUi(QDialog *RepoWindow)
    {
        if (RepoWindow->objectName().isEmpty())
            RepoWindow->setObjectName(QString::fromUtf8("RepoWindow"));
        RepoWindow->setWindowModality(Qt::ApplicationModal);
        RepoWindow->resize(499, 355);
        tableWidget = new QTableWidget(RepoWindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 80, 461, 91));
        tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget->verticalHeader()->setVisible(false);
        btnCancelar = new QPushButton(RepoWindow);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(351, 310, 131, 31));
        labelCodigo = new QLabel(RepoWindow);
        labelCodigo->setObjectName(QString::fromUtf8("labelCodigo"));
        labelCodigo->setGeometry(QRect(76, 190, 49, 20));
        lineEditCodigo = new QLineEdit(RepoWindow);
        lineEditCodigo->setObjectName(QString::fromUtf8("lineEditCodigo"));
        lineEditCodigo->setEnabled(false);
        lineEditCodigo->setGeometry(QRect(120, 190, 41, 22));
        URL = new QLabel(RepoWindow);
        URL->setObjectName(QString::fromUtf8("URL"));
        URL->setGeometry(QRect(89, 250, 31, 22));
        lineEditURL = new QLineEdit(RepoWindow);
        lineEditURL->setObjectName(QString::fromUtf8("lineEditURL"));
        lineEditURL->setGeometry(QRect(120, 250, 361, 22));
        btnEfetivaAlteracao = new QPushButton(RepoWindow);
        btnEfetivaAlteracao->setObjectName(QString::fromUtf8("btnEfetivaAlteracao"));
        btnEfetivaAlteracao->setGeometry(QRect(211, 310, 131, 31));
        btnLimpar = new QPushButton(RepoWindow);
        btnLimpar->setObjectName(QString::fromUtf8("btnLimpar"));
        btnLimpar->setGeometry(QRect(401, 272, 81, 21));
        btnConfirmar = new QPushButton(RepoWindow);
        btnConfirmar->setObjectName(QString::fromUtf8("btnConfirmar"));
        btnConfirmar->setGeometry(QRect(71, 310, 131, 31));
        btnAlterar = new QPushButton(RepoWindow);
        btnAlterar->setObjectName(QString::fromUtf8("btnAlterar"));
        btnAlterar->setGeometry(QRect(100, 40, 80, 21));
        btnNovo = new QPushButton(RepoWindow);
        btnNovo->setObjectName(QString::fromUtf8("btnNovo"));
        btnNovo->setGeometry(QRect(20, 40, 81, 21));
        btnDeletar = new QPushButton(RepoWindow);
        btnDeletar->setObjectName(QString::fromUtf8("btnDeletar"));
        btnDeletar->setGeometry(QRect(179, 40, 81, 21));
        label = new QLabel(RepoWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 10, 151, 16));
        labelNome = new QLabel(RepoWindow);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));
        labelNome->setGeometry(QRect(80, 220, 31, 20));
        lineEditNome = new QLineEdit(RepoWindow);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        lineEditNome->setEnabled(true);
        lineEditNome->setGeometry(QRect(120, 220, 251, 22));
        comboBoxVersionControl = new QComboBox(RepoWindow);
        comboBoxVersionControl->addItem(QString());
        comboBoxVersionControl->addItem(QString());
        comboBoxVersionControl->setObjectName(QString::fromUtf8("comboBoxVersionControl"));
        comboBoxVersionControl->setGeometry(QRect(380, 220, 101, 22));

        retranslateUi(RepoWindow);

        QMetaObject::connectSlotsByName(RepoWindow);
    } // setupUi

    void retranslateUi(QDialog *RepoWindow)
    {
        RepoWindow->setWindowTitle(QApplication::translate("RepoWindow", "Code Repositories", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RepoWindow", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RepoWindow", "Produto", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("RepoWindow", "URL", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("RepoWindow", "Tipo", nullptr));
        btnCancelar->setText(QApplication::translate("RepoWindow", "Cancelar", nullptr));
        labelCodigo->setText(QApplication::translate("RepoWindow", "C\303\263digo:", nullptr));
        URL->setText(QApplication::translate("RepoWindow", "URL:", nullptr));
        btnEfetivaAlteracao->setText(QApplication::translate("RepoWindow", "Alterar", nullptr));
        btnLimpar->setText(QApplication::translate("RepoWindow", "Limpar campos", nullptr));
        btnConfirmar->setText(QApplication::translate("RepoWindow", "Inserir", nullptr));
        btnAlterar->setText(QApplication::translate("RepoWindow", "Alterar", nullptr));
        btnNovo->setText(QApplication::translate("RepoWindow", "Novo", nullptr));
        btnDeletar->setText(QApplication::translate("RepoWindow", "Deletar", nullptr));
        label->setText(QApplication::translate("RepoWindow", "Reposit\303\263rios de Versionamento:", nullptr));
        labelNome->setText(QApplication::translate("RepoWindow", "Nome:", nullptr));
        comboBoxVersionControl->setItemText(0, QApplication::translate("RepoWindow", "Git", nullptr));
        comboBoxVersionControl->setItemText(1, QApplication::translate("RepoWindow", "Svn", nullptr));

    } // retranslateUi

};

namespace Ui {
    class RepoWindow: public Ui_RepoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPOWINDOW_H
