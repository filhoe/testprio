#ifndef REPOWINDOW_H
#define REPOWINDOW_H

#include <QDialog>
#include <QQueue>
#include "repodao.h"

namespace Ui {
class RepoWindow;
}

class RepoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RepoWindow(QWidget *parent = nullptr);
    ~RepoWindow();

private slots:
    void on_btnNovo_clicked();
    void on_btnCancelar_clicked();
    void on_btnConfirmar_clicked();
    void on_btnDeletar_clicked();
    void on_btnAlterar_clicked();
    void on_btnEfetivaAlteracao_clicked();
    void on_btnLimpar_clicked();

private:
    Ui::RepoWindow *ui;
    RepoDAO dao;

    void bloquearCampos(bool b);
    void limparCampos();
    void carregarTabela(QQueue<Repo> repos);
};

#endif // REPOWINDOW_H
