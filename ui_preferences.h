/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QLabel *labelDefaultValueDays;
    QComboBox *comboBoxDefaultDaysForSearches;
    QLabel *label;
    QComboBox *comboBoxPrimaryVersioningSystem;
    QPushButton *btnCancelPreferencesWindow;
    QPushButton *btnOKPreferencesWindow;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName(QString::fromUtf8("Preferences"));
        Preferences->resize(352, 218);
        Preferences->setModal(true);
        labelDefaultValueDays = new QLabel(Preferences);
        labelDefaultValueDays->setObjectName(QString::fromUtf8("labelDefaultValueDays"));
        labelDefaultValueDays->setGeometry(QRect(30, 40, 211, 16));
        comboBoxDefaultDaysForSearches = new QComboBox(Preferences);
        comboBoxDefaultDaysForSearches->addItem(QString());
        comboBoxDefaultDaysForSearches->addItem(QString());
        comboBoxDefaultDaysForSearches->addItem(QString());
        comboBoxDefaultDaysForSearches->addItem(QString());
        comboBoxDefaultDaysForSearches->setObjectName(QString::fromUtf8("comboBoxDefaultDaysForSearches"));
        comboBoxDefaultDaysForSearches->setGeometry(QRect(30, 60, 69, 20));
        label = new QLabel(Preferences);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 110, 351, 16));
        comboBoxPrimaryVersioningSystem = new QComboBox(Preferences);
        comboBoxPrimaryVersioningSystem->addItem(QString());
        comboBoxPrimaryVersioningSystem->addItem(QString());
        comboBoxPrimaryVersioningSystem->setObjectName(QString::fromUtf8("comboBoxPrimaryVersioningSystem"));
        comboBoxPrimaryVersioningSystem->setGeometry(QRect(30, 140, 131, 20));
        btnCancelPreferencesWindow = new QPushButton(Preferences);
        btnCancelPreferencesWindow->setObjectName(QString::fromUtf8("btnCancelPreferencesWindow"));
        btnCancelPreferencesWindow->setGeometry(QRect(260, 180, 75, 23));
        btnCancelPreferencesWindow->setStyleSheet(QString::fromUtf8(""));
        btnOKPreferencesWindow = new QPushButton(Preferences);
        btnOKPreferencesWindow->setObjectName(QString::fromUtf8("btnOKPreferencesWindow"));
        btnOKPreferencesWindow->setGeometry(QRect(180, 180, 75, 23));

        retranslateUi(Preferences);

        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QDialog *Preferences)
    {
        Preferences->setWindowTitle(QApplication::translate("Preferences", "Preferences", nullptr));
        labelDefaultValueDays->setText(QApplication::translate("Preferences", "Days for searches (default value):", nullptr));
        comboBoxDefaultDaysForSearches->setItemText(0, QApplication::translate("Preferences", "7", nullptr));
        comboBoxDefaultDaysForSearches->setItemText(1, QApplication::translate("Preferences", "15", nullptr));
        comboBoxDefaultDaysForSearches->setItemText(2, QApplication::translate("Preferences", "30", nullptr));
        comboBoxDefaultDaysForSearches->setItemText(3, QApplication::translate("Preferences", "60", nullptr));

        label->setText(QApplication::translate("Preferences", "Default versioning system for new products creation?", nullptr));
        comboBoxPrimaryVersioningSystem->setItemText(0, QApplication::translate("Preferences", "Git", nullptr));
        comboBoxPrimaryVersioningSystem->setItemText(1, QApplication::translate("Preferences", "Subversion (SVN)", nullptr));

        btnCancelPreferencesWindow->setText(QApplication::translate("Preferences", "Cancel", nullptr));
        btnOKPreferencesWindow->setText(QApplication::translate("Preferences", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
