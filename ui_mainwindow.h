/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPreferences;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionRelationship_Manager;
    QAction *actionVerify_changes;
    QAction *actionAbout_TestPrio;
    QAction *actionFeatures;
    QAction *actionRepository;
    QAction *actionFiles;
    QAction *actionUsers;
    QAction *actionReports;
    QAction *actionSearches;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuSearch;
    QMenu *menuHelp;
    QMenu *menuTools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(645, 361);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(645, 361));
        MainWindow->setMaximumSize(QSize(645, 361));
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icn_testprio.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDocumentMode(true);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionRelationship_Manager = new QAction(MainWindow);
        actionRelationship_Manager->setObjectName(QString::fromUtf8("actionRelationship_Manager"));
        actionVerify_changes = new QAction(MainWindow);
        actionVerify_changes->setObjectName(QString::fromUtf8("actionVerify_changes"));
        actionAbout_TestPrio = new QAction(MainWindow);
        actionAbout_TestPrio->setObjectName(QString::fromUtf8("actionAbout_TestPrio"));
        actionFeatures = new QAction(MainWindow);
        actionFeatures->setObjectName(QString::fromUtf8("actionFeatures"));
        actionRepository = new QAction(MainWindow);
        actionRepository->setObjectName(QString::fromUtf8("actionRepository"));
        actionFiles = new QAction(MainWindow);
        actionFiles->setObjectName(QString::fromUtf8("actionFiles"));
        actionUsers = new QAction(MainWindow);
        actionUsers->setObjectName(QString::fromUtf8("actionUsers"));
        actionReports = new QAction(MainWindow);
        actionReports->setObjectName(QString::fromUtf8("actionReports"));
        actionSearches = new QAction(MainWindow);
        actionSearches->setObjectName(QString::fromUtf8("actionSearches"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 645, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSearch = new QMenu(menuBar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSearch->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionFeatures);
        menuEdit->addAction(actionRepository);
        menuEdit->addAction(actionFiles);
        menuEdit->addAction(actionUsers);
        menuSearch->addAction(actionVerify_changes);
        menuSearch->addAction(actionReports);
        menuHelp->addAction(actionAbout_TestPrio);
        menuTools->addAction(actionPreferences);
        menuTools->addAction(actionRelationship_Manager);
        menuTools->addAction(actionSearches);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test Prioritization Tool", nullptr));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", nullptr));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionRelationship_Manager->setText(QApplication::translate("MainWindow", "Relationship Manager", nullptr));
        actionVerify_changes->setText(QApplication::translate("MainWindow", "Verify Changes", nullptr));
        actionAbout_TestPrio->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionFeatures->setText(QApplication::translate("MainWindow", "Features", nullptr));
        actionRepository->setText(QApplication::translate("MainWindow", "Code Repositories", nullptr));
        actionFiles->setText(QApplication::translate("MainWindow", "Files", nullptr));
        actionUsers->setText(QApplication::translate("MainWindow", "Users", nullptr));
        actionReports->setText(QApplication::translate("MainWindow", "Change Reports", nullptr));
        actionSearches->setText(QApplication::translate("MainWindow", "Searches", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuSearch->setTitle(QApplication::translate("MainWindow", "Search", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
