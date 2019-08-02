#ifndef SEARCHCHANGES_H
#define SEARCHCHANGES_H

#include <QDialog>

namespace Ui {
class SearchChanges;
}

class SearchChanges : public QDialog
{
    Q_OBJECT

public:
    explicit SearchChanges(QWidget *parent = nullptr);
    ~SearchChanges();

    QString getName() const;
    //void setName(const QString &value);

private slots:
    //void on_comboBoxRepo_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::SearchChanges *ui;
    int daysToSearch;
    QString repositoryName;
};

#endif // SEARCHCHANGES_H
