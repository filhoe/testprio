#include "searchchangeswindow.h"
#include "ui_searchchanges.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

SearchChanges::SearchChanges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchChanges)

{
    ui->setupUi(this);
}

SearchChanges::~SearchChanges()
{
    delete ui;
}

void SearchChanges::on_pushButton_clicked()
{

    QString dateFrom = ui->dateEditFrom->text();
    QString dateTo = ui->dateEditTo->text();

    //CMD command
    //system("svn log http://svn.alsdorf.cycos.com/repository/ODC/branches/ODC_V7_R1/V7_R1 -v -r {2019-05-06}:{2019-05-21} > C:\\TestPrio\\svnlog.txt");

    QFile file("C:\\TestPrio\\svnlog.txt");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(nullptr,"info", file.errorString());

    QTextStream in(&file);

    ui->textBrowserSVNChanges->setText(in.readAll());

    this->setFocus();
    ui->setupUi(this);

}
