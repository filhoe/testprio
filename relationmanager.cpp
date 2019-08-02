#include "relationmanager.h"
#include "ui_relationmanager.h"

RelationManager::RelationManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RelationManager)
{
    ui->setupUi(this);
}

RelationManager::~RelationManager()
{
    delete ui;
}
