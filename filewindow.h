#ifndef FILEWINDOW_H
#define FILEWINDOW_H

#include <QDialog>
#include <QQueue>
#include "filedao.h"

namespace Ui {
class FileWindow;
}

class FileWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FileWindow(QWidget *parent = nullptr);
    ~FileWindow();

private slots:
    void on_btnNovo_clicked();
    void on_btnCancelar_clicked();
    void on_btnConfirmar_clicked();
    void on_btnDeletar_clicked();
    void on_btnAlterar_clicked();
    void on_btnEfetivaAlteracao_clicked();
    void on_btnLimpar_clicked();

private:
    Ui::FileWindow *ui;
    FileDAO dao;

    void bloquearCampos(bool b);
    void limparCampos();
    void carregarTabela(QQueue<File> files);
};

#endif // FILEWINDOW_H
