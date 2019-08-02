#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <featurewindow.h>
#include <repowindow.h>
#include <filewindow.h>
#include <userwindow.h>
#include <reportwindow.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionFeatures_triggered();

    void on_actionVerify_changes_triggered();

    void on_actionPreferences_triggered();

    void on_actionRelationship_Manager_triggered();

    void on_actionRepository_triggered();

    void on_actionFiles_triggered();

    void on_actionUsers_triggered();

    void on_actionReports_triggered();

    void on_actionSearches_triggered();

private:
    Ui::MainWindow *ui;
    FeatureWindow formFeature;
    RepoWindow formRepo;
	FileWindow formFile;
    UserWindow formUser;
    ReportWindow formReport;
};

#endif // MAINWINDOW_H
