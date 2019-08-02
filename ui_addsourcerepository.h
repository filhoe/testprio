/********************************************************************************
** Form generated from reading UI file 'addsourcerepository.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSOURCEREPOSITORY_H
#define UI_ADDSOURCEREPOSITORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddSourceRepository
{
public:
    QFrame *frame_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QDialogButtonBox *buttonBox_2;
    QLabel *label_repoURL_2;
    QComboBox *comboBox_2;
    QLabel *label_reponame_2;

    void setupUi(QDialog *AddSourceRepository)
    {
        if (AddSourceRepository->objectName().isEmpty())
            AddSourceRepository->setObjectName(QString::fromUtf8("AddSourceRepository"));
        AddSourceRepository->resize(487, 176);
        frame_2 = new QFrame(AddSourceRepository);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 591, 51));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 207, 236);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 381, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(false);
        label_3->setFont(font);
        label_3->setAutoFillBackground(false);
        lineEdit_4 = new QLineEdit(AddSourceRepository);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(69, 102, 396, 20));
        lineEdit_3 = new QLineEdit(AddSourceRepository);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(69, 71, 281, 21));
        buttonBox_2 = new QDialogButtonBox(AddSourceRepository);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(335, 130, 130, 32));
        buttonBox_2->setMinimumSize(QSize(130, 0));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_repoURL_2 = new QLabel(AddSourceRepository);
        label_repoURL_2->setObjectName(QString::fromUtf8("label_repoURL_2"));
        label_repoURL_2->setGeometry(QRect(35, 102, 30, 20));
        comboBox_2 = new QComboBox(AddSourceRepository);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(357, 72, 110, 20));
        label_reponame_2 = new QLabel(AddSourceRepository);
        label_reponame_2->setObjectName(QString::fromUtf8("label_reponame_2"));
        label_reponame_2->setGeometry(QRect(26, 72, 40, 20));

        retranslateUi(AddSourceRepository);

        QMetaObject::connectSlotsByName(AddSourceRepository);
    } // setupUi

    void retranslateUi(QDialog *AddSourceRepository)
    {
        AddSourceRepository->setWindowTitle(QApplication::translate("AddSourceRepository", "Dialog", nullptr));
        label_3->setText(QApplication::translate("AddSourceRepository", "Add a versioning repository", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_3->setText(QString());
        label_repoURL_2->setText(QApplication::translate("AddSourceRepository", "URL:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("AddSourceRepository", "Git", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("AddSourceRepository", "Subversion", nullptr));

        label_reponame_2->setText(QApplication::translate("AddSourceRepository", "Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSourceRepository: public Ui_AddSourceRepository {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSOURCEREPOSITORY_H
