#include "featurewindow.h"
#include "ui_featurewindow.h"
#include <QMessageBox>
#include <QQueue>

FeatureWindow::FeatureWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FeatureWindow) {
    ui->setupUi(this);
    this->setFixedSize(532,324);
    this->carregarTabela(dao.listarTodos());
    this->limparCampos();
    this->on_btnCancelar_clicked();
}

FeatureWindow::~FeatureWindow()
{
    delete ui;
}

/*
void FeatureWindow::on_btnClose_clicked() {
    //QMessageBox::StandardButton resposta;
    //resposta = QMessageBox::question(this, "Close", "Do you really want to close this window?", QMessageBox::Yes|QMessageBox::No);
    //if(resposta == QMessageBox::Yes) {
        this->close();
    //}

}
*/
void FeatureWindow::bloquearCampos(bool b)
{
    ui->btnAlterar->setEnabled(b);
    ui->btnDeletar->setEnabled(b);
    ui->btnNovo->setEnabled(b);

    ui->lineEditDescricao->setEnabled(!b);
    ui->btnCancelar->setEnabled(!b);
    ui->btnConfirmar->setEnabled(!b);
    ui->btnEfetivaAlteracao->setEnabled(!b);
    ui->btnLimpar->setEnabled(!b);
}

void FeatureWindow::limparCampos()
{
    ui->lineEditCodigo->setText("");
    ui->lineEditDescricao->setText("");
}

void FeatureWindow::carregarTabela(QQueue<Feature> features) {

    if(features.size() >= 0) {
        ui->tableWidget->setRowCount(0);
        Feature f;
        QQueue<Feature> aux;
        aux = features;

        for(int i = 0; i < features.size(); i++) {
            f = aux.back();
            aux.pop_back();

            QTableWidgetItem *item0 = new QTableWidgetItem(tr(QString::number(f.getCodigo()).toUtf8()));
            QTableWidgetItem *item1 = new QTableWidgetItem(tr(f.getNome().toUtf8()));

            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, item0);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, item1);
    }

  }

}

void FeatureWindow::on_btnNovo_clicked()
{
    this->limparCampos();
    this->bloquearCampos(false);
    ui->btnEfetivaAlteracao->setEnabled(false);
}

void FeatureWindow::on_btnCancelar_clicked()
{
    this->limparCampos();
    this->bloquearCampos(true);
}

void FeatureWindow::on_btnConfirmar_clicked()
{
    //QMessageBox::StandardButton resposta;
    //resposta = QMessageBox::question(this, "Save", "Do you really want to save data?", QMessageBox::Yes|QMessageBox::No);
    //if(resposta == QMessageBox::Yes) {
        Feature f;
        f.setCodigo(ui->lineEditCodigo->text().toInt());
        f.setNome(ui->lineEditDescricao->text());

        //f.setCodigo(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toInt());
        //f.setNome(ui->lineEditDescricao->text());

        //if (f.getCodigo() > 0) {
         //   dao.alterar(f);
        //} else {
            dao.salvar(f);
        //}

        this->carregarTabela(dao.listarTodos());
        //this->limparCampos();
        this->on_btnCancelar_clicked();
    //}
}

void FeatureWindow::on_btnDeletar_clicked() {
    if(ui->tableWidget->model()->rowCount() > 0 && ui->tableWidget->selectedItems().size() > 0) {

        QMessageBox::StandardButton resposta;
        resposta = QMessageBox::question(this, "Delete", "Do you really want to delete data?", QMessageBox::Yes|QMessageBox::No);
        if(resposta == QMessageBox::Yes) {
            Feature f;
            f.setCodigo(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toInt());
            f.setNome(ui->lineEditDescricao->text());

            qDebug() << f.toString;
            dao.deletar(f);

            this->carregarTabela(dao.listarTodos());
            this->limparCampos();
            this->on_btnCancelar_clicked();
        }

    }
}

void FeatureWindow::on_btnAlterar_clicked() {
    ui->lineEditCodigo->setText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toString());
    ui->lineEditDescricao->setText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 1).data().toString());

    this->bloquearCampos(false);
    ui->btnConfirmar->setEnabled(false);

}

void FeatureWindow::on_btnEfetivaAlteracao_clicked()
{
    {
        //QMessageBox::StandardButton resposta;
        //resposta = QMessageBox::question(this, "Save", "Do you really want to save data?", QMessageBox::Yes|QMessageBox::No);
        //if(resposta == QMessageBox::Yes) {
            Feature f;
            f.setCodigo(ui->lineEditCodigo->text().toInt());
            f.setNome(ui->lineEditDescricao->text());

            //f.setCodigo(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toInt());
            //f.setNome(ui->lineEditDescricao->text());

            //if (f.getCodigo() > 0) {
                dao.alterar(f);
            //} else {
            //    dao.salvar(f);
           // }

            this->carregarTabela(dao.listarTodos());
            //this->limparCampos();
            this->on_btnCancelar_clicked();
        //}
    }
}

void FeatureWindow::on_btnLimpar_clicked()
{
    ui->lineEditDescricao->setText("");
}
