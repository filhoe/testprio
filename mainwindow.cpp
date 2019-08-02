#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "searchchangeswindow.h"
#include "ui_searchchanges.h"
#include "preferences.h"
#include "ui_preferences.h"
#include "ui_featurewindow.h"
#include "repo.h"
#include "ui_repowindow.h"
#include "file.h"
#include "ui_filewindow.h"
#include "relationmanager.h"
#include "ui_relationmanager.h"
#include "user.h"
#include "ui_userwindow.h"
#include "reportwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{

    ui->setupUi(this);
    QPixmap bkgnd(":/img/bg.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    this->setFixedSize(600,400);
    //connect(this, SIGNAL(testSignal()), SLOT(actionReports()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionFeatures_triggered()
{
    formFeature.show();
}

void MainWindow::on_actionRepository_triggered()
{
    formRepo.show();
}

void MainWindow::on_actionVerify_changes_triggered()
{
    SearchChanges sc;
    sc.exec();
}

void MainWindow::on_actionPreferences_triggered()
{
    Preferences p;
    p.exec();
}

void MainWindow::on_actionRelationship_Manager_triggered()
{
    RelationManager rm;
    rm.exec();
}

void MainWindow::on_actionFiles_triggered()
{
    formFile.show();
}

void MainWindow::on_actionUsers_triggered()
{
    formUser.show();
}


void MainWindow::on_actionReports_triggered()
{
    formReport.show();
}

void MainWindow::on_actionSearches_triggered()
{
    ReportWindow rw;
    rw.exec();
}
