/********************************************************************************
** Form generated from reading UI file 'searchchanges.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCHANGES_H
#define UI_SEARCHCHANGES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SearchChanges
{
public:
    QLabel *labelSelectRepository;
    QComboBox *comboBoxRepos;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowserSVNChanges;
    QDateEdit *dateEditFrom;
    QLabel *label_2;
    QDateEdit *dateEditTo;

    void setupUi(QDialog *SearchChanges)
    {
        if (SearchChanges->objectName().isEmpty())
            SearchChanges->setObjectName(QString::fromUtf8("SearchChanges"));
        SearchChanges->setWindowModality(Qt::ApplicationModal);
        SearchChanges->resize(891, 639);
        labelSelectRepository = new QLabel(SearchChanges);
        labelSelectRepository->setObjectName(QString::fromUtf8("labelSelectRepository"));
        labelSelectRepository->setGeometry(QRect(20, 20, 111, 16));
        comboBoxRepos = new QComboBox(SearchChanges);
        comboBoxRepos->addItem(QString());
        comboBoxRepos->setObjectName(QString::fromUtf8("comboBoxRepos"));
        comboBoxRepos->setGeometry(QRect(110, 20, 201, 20));
        label = new QLabel(SearchChanges);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(349, 21, 111, 16));
        pushButton = new QPushButton(SearchChanges);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(799, 16, 71, 23));
        pushButton_2 = new QPushButton(SearchChanges);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(728, 16, 71, 23));
        textBrowserSVNChanges = new QTextBrowser(SearchChanges);
        textBrowserSVNChanges->setObjectName(QString::fromUtf8("textBrowserSVNChanges"));
        textBrowserSVNChanges->setGeometry(QRect(20, 50, 851, 571));
        dateEditFrom = new QDateEdit(SearchChanges);
        dateEditFrom->setObjectName(QString::fromUtf8("dateEditFrom"));
        dateEditFrom->setGeometry(QRect(452, 19, 81, 22));
        dateEditFrom->setCurrentSectionIndex(0);
        dateEditFrom->setDate(QDate(2019, 5, 6));
        label_2 = new QLabel(SearchChanges);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(542, 20, 21, 16));
        dateEditTo = new QDateEdit(SearchChanges);
        dateEditTo->setObjectName(QString::fromUtf8("dateEditTo"));
        dateEditTo->setGeometry(QRect(562, 19, 110, 22));
        dateEditTo->setDate(QDate(2019, 5, 22));

        retranslateUi(SearchChanges);

        QMetaObject::connectSlotsByName(SearchChanges);
    } // setupUi

    void retranslateUi(QDialog *SearchChanges)
    {
        SearchChanges->setWindowTitle(QApplication::translate("SearchChanges", "Search for recent changes", nullptr));
        labelSelectRepository->setText(QApplication::translate("SearchChanges", "Select repository:", nullptr));
        comboBoxRepos->setItemText(0, QApplication::translate("SearchChanges", "Fusion for Office V1R8", nullptr));

        label->setText(QApplication::translate("SearchChanges", "Define a period from:", nullptr));
        pushButton->setText(QApplication::translate("SearchChanges", "OK", nullptr));
        pushButton_2->setText(QApplication::translate("SearchChanges", "Cancel", nullptr));
        dateEditFrom->setDisplayFormat(QApplication::translate("SearchChanges", "yyyy/MM/dd", nullptr));
        label_2->setText(QApplication::translate("SearchChanges", "to:", nullptr));
        dateEditTo->setDisplayFormat(QApplication::translate("SearchChanges", "yyyy/MM/dd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchChanges: public Ui_SearchChanges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCHANGES_H
