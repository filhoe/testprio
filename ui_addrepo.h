/********************************************************************************
** Form generated from reading UI file 'addrepo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREPO_H
#define UI_ADDREPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label_repoURL;
    QFrame *frame;
    QLabel *label_2;
    QLabel *label_reponame;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_reponame_2;
    QDialogButtonBox *buttonBox_2;
    QLabel *label_repoURL_2;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QFrame *frame_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::WindowModal);
        Dialog->resize(487, 168);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(335, 130, 130, 32));
        buttonBox->setMinimumSize(QSize(130, 0));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(69, 102, 396, 20));
        label_repoURL = new QLabel(Dialog);
        label_repoURL->setObjectName(QString::fromUtf8("label_repoURL"));
        label_repoURL->setGeometry(QRect(35, 102, 30, 20));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 591, 51));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 207, 236);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 381, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(false);
        label_2->setFont(font);
        label_2->setAutoFillBackground(false);
        label_reponame = new QLabel(Dialog);
        label_reponame->setObjectName(QString::fromUtf8("label_reponame"));
        label_reponame->setGeometry(QRect(26, 72, 40, 20));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(69, 71, 281, 21));
        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(357, 72, 110, 20));
        label_reponame_2 = new QLabel(Dialog);
        label_reponame_2->setObjectName(QString::fromUtf8("label_reponame_2"));
        label_reponame_2->setGeometry(QRect(26, 72, 40, 20));
        buttonBox_2 = new QDialogButtonBox(Dialog);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(335, 130, 130, 32));
        buttonBox_2->setMinimumSize(QSize(130, 0));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_repoURL_2 = new QLabel(Dialog);
        label_repoURL_2->setObjectName(QString::fromUtf8("label_repoURL_2"));
        label_repoURL_2->setGeometry(QRect(35, 102, 30, 20));
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(357, 72, 110, 20));
        lineEdit_3 = new QLineEdit(Dialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(69, 71, 281, 21));
        lineEdit_4 = new QLineEdit(Dialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(69, 102, 396, 20));
        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 591, 51));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 207, 236);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 381, 31));
        label_3->setFont(font);
        label_3->setAutoFillBackground(false);
        frame->raise();
        buttonBox->raise();
        lineEdit->raise();
        label_repoURL->raise();
        label_reponame->raise();
        lineEdit_2->raise();
        comboBox->raise();
        label_reponame_2->raise();
        buttonBox_2->raise();
        label_repoURL_2->raise();
        comboBox_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        frame_2->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        lineEdit->setText(QString());
        label_repoURL->setText(QApplication::translate("Dialog", "URL:", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Add a versioning repository", nullptr));
        label_reponame->setText(QApplication::translate("Dialog", "Name:", nullptr));
        lineEdit_2->setText(QString());
        comboBox->setItemText(0, QApplication::translate("Dialog", "Git", nullptr));
        comboBox->setItemText(1, QApplication::translate("Dialog", "Subversion", nullptr));

        label_reponame_2->setText(QApplication::translate("Dialog", "Name:", nullptr));
        label_repoURL_2->setText(QApplication::translate("Dialog", "URL:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("Dialog", "Git", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Dialog", "Subversion", nullptr));

        lineEdit_3->setText(QString());
        lineEdit_4->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "Add a versioning repository", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREPO_H
