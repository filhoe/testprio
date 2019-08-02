/********************************************************************************
** Form generated from reading UI file 'featurewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATUREWINDOW_H
#define UI_FEATUREWINDOW_H

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

class Ui_FeatureWindow
{
public:
    QTableWidget *tableWidget;
    QPushButton *btnCancelar;
    QLabel *labelCodigo;
    QLineEdit *lineEditCodigo;
    QLabel *Descricao;
    QLineEdit *lineEditDescricao;
    QPushButton *btnEfetivaAlteracao;
    QPushButton *btnLimpar;
    QPushButton *btnConfirmar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNovo;
    QPushButton *btnAlterar;
    QPushButton *btnDeletar;

    void setupUi(QDialog *FeatureWindow)
    {
        if (FeatureWindow->objectName().isEmpty())
            FeatureWindow->setObjectName(QString::fromUtf8("FeatureWindow"));
        FeatureWindow->setWindowModality(Qt::ApplicationModal);
        FeatureWindow->resize(532, 324);
        tableWidget = new QTableWidget(FeatureWindow);
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
        btnCancelar = new QPushButton(FeatureWindow);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(330, 250, 131, 31));
        labelCodigo = new QLabel(FeatureWindow);
        labelCodigo->setObjectName(QString::fromUtf8("labelCodigo"));
        labelCodigo->setGeometry(QRect(293, 61, 49, 20));
        lineEditCodigo = new QLineEdit(FeatureWindow);
        lineEditCodigo->setObjectName(QString::fromUtf8("lineEditCodigo"));
        lineEditCodigo->setEnabled(false);
        lineEditCodigo->setGeometry(QRect(334, 62, 131, 22));
        Descricao = new QLabel(FeatureWindow);
        Descricao->setObjectName(QString::fromUtf8("Descricao"));
        Descricao->setGeometry(QRect(280, 90, 49, 22));
        lineEditDescricao = new QLineEdit(FeatureWindow);
        lineEditDescricao->setObjectName(QString::fromUtf8("lineEditDescricao"));
        lineEditDescricao->setGeometry(QRect(334, 92, 131, 22));
        btnEfetivaAlteracao = new QPushButton(FeatureWindow);
        btnEfetivaAlteracao->setObjectName(QString::fromUtf8("btnEfetivaAlteracao"));
        btnEfetivaAlteracao->setGeometry(QRect(330, 210, 131, 31));
        btnLimpar = new QPushButton(FeatureWindow);
        btnLimpar->setObjectName(QString::fromUtf8("btnLimpar"));
        btnLimpar->setGeometry(QRect(413, 120, 51, 21));
        btnConfirmar = new QPushButton(FeatureWindow);
        btnConfirmar->setObjectName(QString::fromUtf8("btnConfirmar"));
        btnConfirmar->setGeometry(QRect(330, 170, 131, 31));
        layoutWidget = new QWidget(FeatureWindow);
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


        retranslateUi(FeatureWindow);

        QMetaObject::connectSlotsByName(FeatureWindow);
    } // setupUi

    void retranslateUi(QDialog *FeatureWindow)
    {
        FeatureWindow->setWindowTitle(QApplication::translate("FeatureWindow", "Features Management", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FeatureWindow", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FeatureWindow", "Descri\303\247\303\243o", nullptr));
        btnCancelar->setText(QApplication::translate("FeatureWindow", "Cancelar", nullptr));
        labelCodigo->setText(QApplication::translate("FeatureWindow", "C\303\263digo:", nullptr));
        Descricao->setText(QApplication::translate("FeatureWindow", "Descri\303\247\303\243o:", nullptr));
        btnEfetivaAlteracao->setText(QApplication::translate("FeatureWindow", "Alterar", nullptr));
        btnLimpar->setText(QApplication::translate("FeatureWindow", "Limpar", nullptr));
        btnConfirmar->setText(QApplication::translate("FeatureWindow", "Inserir", nullptr));
        btnNovo->setText(QApplication::translate("FeatureWindow", "Novo", nullptr));
        btnAlterar->setText(QApplication::translate("FeatureWindow", "Alterar", nullptr));
        btnDeletar->setText(QApplication::translate("FeatureWindow", "Deletar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FeatureWindow: public Ui_FeatureWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATUREWINDOW_H
