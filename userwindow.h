#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QDialog>
#include <QQueue>
#include "userdao.h"

namespace Ui {
class UserWindow;
}

class UserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();

private slots:
    void on_btnNovo_clicked();
    void on_btnCancelar_clicked();
    void on_btnConfirmar_clicked();
    void on_btnDeletar_clicked();
    void on_btnAlterar_clicked();
    void on_btnEfetivaAlteracao_clicked();
    void on_btnLimpar_clicked();

private:
    Ui::UserWindow *ui;
    UserDAO dao;

    void bloquearCampos(bool b);
    void limparCampos();
    void carregarTabela(QQueue<User> users);
};

#endif // USERWINDOW_H
