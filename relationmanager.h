#ifndef RELATIONMANAGER_H
#define RELATIONMANAGER_H

#include <QDialog>

namespace Ui {
class RelationManager;
}

class RelationManager : public QDialog
{
    Q_OBJECT

public:
    explicit RelationManager(QWidget *parent = nullptr);
    ~RelationManager();

private:
    Ui::RelationManager *ui;
};

#endif // RELATIONMANAGER_H
