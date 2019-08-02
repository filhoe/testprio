/********************************************************************************
** Form generated from reading UI file 'reportwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWINDOW_H
#define UI_REPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ReportWindow
{
public:
    QLabel *labelPrio;
    QLabel *label_FeaturesAvailable;
    QLabel *label_PrioFeaList;
    QLabel *label_Message;

    void setupUi(QDialog *ReportWindow)
    {
        if (ReportWindow->objectName().isEmpty())
            ReportWindow->setObjectName(QString::fromUtf8("ReportWindow"));
        ReportWindow->resize(546, 377);
        labelPrio = new QLabel(ReportWindow);
        labelPrio->setObjectName(QString::fromUtf8("labelPrio"));
        labelPrio->setGeometry(QRect(30, 20, 111, 16));
        label_FeaturesAvailable = new QLabel(ReportWindow);
        label_FeaturesAvailable->setObjectName(QString::fromUtf8("label_FeaturesAvailable"));
        label_FeaturesAvailable->setGeometry(QRect(30, 70, 481, 16));
        label_PrioFeaList = new QLabel(ReportWindow);
        label_PrioFeaList->setObjectName(QString::fromUtf8("label_PrioFeaList"));
        label_PrioFeaList->setGeometry(QRect(30, 150, 221, 20));
        label_PrioFeaList->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";"));
        label_Message = new QLabel(ReportWindow);
        label_Message->setObjectName(QString::fromUtf8("label_Message"));
        label_Message->setGeometry(QRect(32, 110, 470, 16));

        retranslateUi(ReportWindow);

        QMetaObject::connectSlotsByName(ReportWindow);
    } // setupUi

    void retranslateUi(QDialog *ReportWindow)
    {
        ReportWindow->setWindowTitle(QApplication::translate("ReportWindow", "Prioritization Report", nullptr));
        labelPrio->setText(QApplication::translate("ReportWindow", "Prioritization Report:", nullptr));
        label_FeaturesAvailable->setText(QApplication::translate("ReportWindow", "There is a prioritized features list available for the next test sessions!", nullptr));
        label_PrioFeaList->setText(QApplication::translate("ReportWindow", "1. CHAT, 2. CALL HISTORY, 3. VIDEO.", nullptr));
        label_Message->setText(QApplication::translate("ReportWindow", "Please, start the tests following the order below, based on the number of changes detected:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportWindow: public Ui_ReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWINDOW_H
