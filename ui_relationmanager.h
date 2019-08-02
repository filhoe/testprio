/********************************************************************************
** Form generated from reading UI file 'relationmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATIONMANAGER_H
#define UI_RELATIONMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RelationManager
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QGraphicsView *topBoardRelationManager;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *RelationManager)
    {
        if (RelationManager->objectName().isEmpty())
            RelationManager->setObjectName(QString::fromUtf8("RelationManager"));
        RelationManager->resize(578, 182);
        comboBox = new QComboBox(RelationManager);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 80, 201, 31));
        label = new QLabel(RelationManager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 14, 231, 20));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        comboBox_2 = new QComboBox(RelationManager);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(350, 80, 201, 31));
        topBoardRelationManager = new QGraphicsView(RelationManager);
        topBoardRelationManager->setObjectName(QString::fromUtf8("topBoardRelationManager"));
        topBoardRelationManager->setGeometry(QRect(0, 0, 791, 51));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        topBoardRelationManager->setFont(font1);
        pushButton = new QPushButton(RelationManager);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(477, 140, 70, 23));
        pushButton_2 = new QPushButton(RelationManager);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 140, 70, 23));
        commandLinkButton = new QCommandLinkButton(RelationManager);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(230, 70, 111, 41));
        topBoardRelationManager->raise();
        comboBox->raise();
        label->raise();
        comboBox_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        commandLinkButton->raise();

        retranslateUi(RelationManager);

        QMetaObject::connectSlotsByName(RelationManager);
    } // setupUi

    void retranslateUi(QDialog *RelationManager)
    {
        RelationManager->setWindowTitle(QApplication::translate("RelationManager", "Dialog", nullptr));
        comboBox->setItemText(0, QApplication::translate("RelationManager", "file1.cs", nullptr));
        comboBox->setItemText(1, QApplication::translate("RelationManager", "file2.cs", nullptr));
        comboBox->setItemText(2, QApplication::translate("RelationManager", "file3.cs", nullptr));
        comboBox->setItemText(3, QApplication::translate("RelationManager", "file4.cs", nullptr));
        comboBox->setItemText(4, QApplication::translate("RelationManager", "file5.cs", nullptr));
        comboBox->setItemText(5, QApplication::translate("RelationManager", "file6.cs", nullptr));
        comboBox->setItemText(6, QApplication::translate("RelationManager", "file7.cs", nullptr));

        label->setText(QApplication::translate("RelationManager", "Relationship Manager", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("RelationManager", "Call Control", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("RelationManager", "Conference", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("RelationManager", "Chat", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("RelationManager", "Video", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("RelationManager", "Settings", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("RelationManager", "Web Collaboration", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("RelationManager", "Search", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("RelationManager", "Presence", nullptr));
        comboBox_2->setItemText(8, QApplication::translate("RelationManager", "Tell-me-when", nullptr));

        pushButton->setText(QApplication::translate("RelationManager", "Save", nullptr));
        pushButton_2->setText(QApplication::translate("RelationManager", "Cancel", nullptr));
        commandLinkButton->setText(QApplication::translate("RelationManager", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RelationManager: public Ui_RelationManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATIONMANAGER_H
