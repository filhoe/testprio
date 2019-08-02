#ifndef FEATUREWINDOW_H
#define FEATUREWINDOW_H

#include <QDialog>
#include <QQueue>
#include "featuredao.h"

namespace Ui {
class FeatureWindow;
}

class FeatureWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FeatureWindow(QWidget *parent = nullptr);
    ~FeatureWindow();

private slots:
    void on_btnNovo_clicked();
    void on_btnCancelar_clicked();
    void on_btnConfirmar_clicked();
    void on_btnDeletar_clicked();
    void on_btnAlterar_clicked();
    void on_btnEfetivaAlteracao_clicked();
    void on_btnLimpar_clicked();

private:
    Ui::FeatureWindow *ui;
    FeatureDAO dao;

    void bloquearCampos(bool b);
    void limparCampos();
    void carregarTabela(QQueue<Feature> features);
};

#endif // FEATUREWINDOW_H
