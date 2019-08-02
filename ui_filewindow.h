/********************************************************************************
** Form generated from reading UI file 'filewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEWINDOW_H
#define UI_FILEWINDOW_H

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

class Ui_FileWindow
{
public:
    QTableWidget *tableWidgetFiles;
    QPushButton *btnCancelar;
    QLabel *labelCodigo;
    QLineEdit *lineEditCodigo;
    QLabel *URL;
    QPushButton *btnEfetivaAlteracao;
    QPushButton *btnLimpar;
    QPushButton *btnConfirmar;
    QPushButton *btnAlterar;
    QPushButton *btnNovo;
    QPushButton *btnDeletar;
    QLabel *label;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QComboBox *comboBoxFunc;

    void setupUi(QDialog *FileWindow)
    {
        if (FileWindow->objectName().isEmpty())
            FileWindow->setObjectName(QString::fromUtf8("FileWindow"));
        FileWindow->setWindowModality(Qt::ApplicationModal);
        FileWindow->resize(499, 355);
        tableWidgetFiles = new QTableWidget(FileWindow);
        if (tableWidgetFiles->columnCount() < 3)
            tableWidgetFiles->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetFiles->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetFiles->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetFiles->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetFiles->setObjectName(QString::fromUtf8("tableWidgetFiles"));
        tableWidgetFiles->setGeometry(QRect(20, 80, 461, 91));
        tableWidgetFiles->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidgetFiles->verticalHeader()->setVisible(false);
        btnCancelar = new QPushButton(FileWindow);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(351, 310, 131, 31));
        labelCodigo = new QLabel(FileWindow);
        labelCodigo->setObjectName(QString::fromUtf8("labelCodigo"));
        labelCodigo->setGeometry(QRect(76, 190, 49, 20));
        lineEditCodigo = new QLineEdit(FileWindow);
        lineEditCodigo->setObjectName(QString::fromUtf8("lineEditCodigo"));
        lineEditCodigo->setEnabled(false);
        lineEditCodigo->setGeometry(QRect(120, 190, 41, 22));
        URL = new QLabel(FileWindow);
        URL->setObjectName(QString::fromUtf8("URL"));
        URL->setGeometry(QRect(36, 250, 81, 22));
        btnEfetivaAlteracao = new QPushButton(FileWindow);
        btnEfetivaAlteracao->setObjectName(QString::fromUtf8("btnEfetivaAlteracao"));
        btnEfetivaAlteracao->setGeometry(QRect(211, 310, 131, 31));
        btnLimpar = new QPushButton(FileWindow);
        btnLimpar->setObjectName(QString::fromUtf8("btnLimpar"));
        btnLimpar->setGeometry(QRect(400, 250, 81, 20));
        btnConfirmar = new QPushButton(FileWindow);
        btnConfirmar->setObjectName(QString::fromUtf8("btnConfirmar"));
        btnConfirmar->setGeometry(QRect(71, 310, 131, 31));
        btnAlterar = new QPushButton(FileWindow);
        btnAlterar->setObjectName(QString::fromUtf8("btnAlterar"));
        btnAlterar->setGeometry(QRect(100, 40, 80, 21));
        btnNovo = new QPushButton(FileWindow);
        btnNovo->setObjectName(QString::fromUtf8("btnNovo"));
        btnNovo->setGeometry(QRect(20, 40, 81, 21));
        btnDeletar = new QPushButton(FileWindow);
        btnDeletar->setObjectName(QString::fromUtf8("btnDeletar"));
        btnDeletar->setGeometry(QRect(179, 40, 81, 21));
        label = new QLabel(FileWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 10, 151, 16));
        labelNome = new QLabel(FileWindow);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));
        labelNome->setGeometry(QRect(80, 220, 31, 20));
        lineEditNome = new QLineEdit(FileWindow);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        lineEditNome->setEnabled(true);
        lineEditNome->setGeometry(QRect(120, 220, 361, 22));
        comboBoxFunc = new QComboBox(FileWindow);
        comboBoxFunc->addItem(QString());
        comboBoxFunc->addItem(QString());
        comboBoxFunc->addItem(QString());
        comboBoxFunc->addItem(QString());
        comboBoxFunc->addItem(QString());
        comboBoxFunc->addItem(QString());
        comboBoxFunc->addItem(QString());
        comboBoxFunc->addItem(QString());
        comboBoxFunc->setObjectName(QString::fromUtf8("comboBoxFunc"));
        comboBoxFunc->setGeometry(QRect(120, 250, 191, 22));

        retranslateUi(FileWindow);

        QMetaObject::connectSlotsByName(FileWindow);
    } // setupUi

    void retranslateUi(QDialog *FileWindow)
    {
        FileWindow->setWindowTitle(QApplication::translate("FileWindow", "Project files and features", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetFiles->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FileWindow", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetFiles->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FileWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetFiles->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FileWindow", "Funcionalidade", nullptr));
        btnCancelar->setText(QApplication::translate("FileWindow", "Cancelar", nullptr));
        labelCodigo->setText(QApplication::translate("FileWindow", "C\303\263digo:", nullptr));
        URL->setText(QApplication::translate("FileWindow", "Funcionalidade:", nullptr));
        btnEfetivaAlteracao->setText(QApplication::translate("FileWindow", "Alterar", nullptr));
        btnLimpar->setText(QApplication::translate("FileWindow", "Limpar campos", nullptr));
        btnConfirmar->setText(QApplication::translate("FileWindow", "Inserir", nullptr));
        btnAlterar->setText(QApplication::translate("FileWindow", "Alterar", nullptr));
        btnNovo->setText(QApplication::translate("FileWindow", "Novo", nullptr));
        btnDeletar->setText(QApplication::translate("FileWindow", "Deletar", nullptr));
        label->setText(QApplication::translate("FileWindow", "Arquivos do projeto:", nullptr));
        labelNome->setText(QApplication::translate("FileWindow", "Nome:", nullptr));
        comboBoxFunc->setItemText(0, QApplication::translate("FileWindow", "Call Control", nullptr));
        comboBoxFunc->setItemText(1, QApplication::translate("FileWindow", "Call History", nullptr));
        comboBoxFunc->setItemText(2, QApplication::translate("FileWindow", "Chat", nullptr));
        comboBoxFunc->setItemText(3, QApplication::translate("FileWindow", "Conference", nullptr));
        comboBoxFunc->setItemText(4, QApplication::translate("FileWindow", "Rules", nullptr));
        comboBoxFunc->setItemText(5, QApplication::translate("FileWindow", "Video", nullptr));
        comboBoxFunc->setItemText(6, QApplication::translate("FileWindow", "Voice Mail", nullptr));
        comboBoxFunc->setItemText(7, QApplication::translate("FileWindow", "Web Collab", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FileWindow: public Ui_FileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEWINDOW_H
