#include "repowindow.h"
#include "ui_repowindow.h"
#include <QMessageBox>
#include <QQueue>

RepoWindow::RepoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RepoWindow) {
    ui->setupUi(this);
    //this->setFixedSize(532,324);
    this->carregarTabela(dao.listarTodos());
    this->limparCampos();
    this->on_btnCancelar_clicked();
}

RepoWindow::~RepoWindow()
{
    delete ui;
}

void RepoWindow::bloquearCampos(bool b)
{
    ui->btnAlterar->setEnabled(b);
    ui->btnDeletar->setEnabled(b);
    ui->btnNovo->setEnabled(b);
    ui->lineEditNome->setEnabled(!b);
    ui->lineEditURL->setEnabled(!b);
    ui->comboBoxVersionControl->setEnabled(!b);
    ui->btnCancelar->setEnabled(!b);
    ui->btnConfirmar->setEnabled(!b);
    ui->btnEfetivaAlteracao->setEnabled(!b);
    ui->btnLimpar->setEnabled(!b);
}

void RepoWindow::limparCampos()
{
    ui->lineEditCodigo->setText("");
    ui->lineEditNome->setText("");
    ui->lineEditURL->setText("");
}

void RepoWindow::carregarTabela(QQueue<Repo> repos) {

    if(repos.size() >= 0) {
        ui->tableWidget->setRowCount(0);
        Repo r;
        QQueue<Repo> aux;
        aux = repos;

        for(int i = 0; i < repos.size(); i++) {
            r = aux.back();
            aux.pop_back();

            QTableWidgetItem *item0 = new QTableWidgetItem(tr(QString::number(r.getCodigo()).toUtf8()));
            QTableWidgetItem *item1 = new QTableWidgetItem(tr(r.getName().toUtf8()));
            QTableWidgetItem *item2 = new QTableWidgetItem(tr(r.getUrl().toUtf8()));
            QTableWidgetItem *item3 = new QTableWidgetItem(tr(r.getVersionControl().toUtf8()));

            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, item0);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, item1);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, item2);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 3, item3);
        }

     }

  }

void RepoWindow::on_btnNovo_clicked()
{
    this->limparCampos();
    this->bloquearCampos(false);
    ui->btnEfetivaAlteracao->setEnabled(false);
}

void RepoWindow::on_btnCancelar_clicked()
{
    this->limparCampos();
    this->bloquearCampos(true);
}

void RepoWindow::on_btnConfirmar_clicked()
{

        Repo r;
        r.setCodigo(ui->lineEditCodigo->text().toInt());
        r.setName(ui->lineEditNome->text());
        r.setUrl(ui->lineEditURL->text());
        r.setVersionControl(ui->comboBoxVersionControl->currentText());
        dao.salvar(r);
        this->carregarTabela(dao.listarTodos());
        this->on_btnCancelar_clicked();

}

void RepoWindow::on_btnDeletar_clicked() {
    if(ui->tableWidget->model()->rowCount() > 0 && ui->tableWidget->selectedItems().size() > 0) {

        QMessageBox::StandardButton resposta;
        resposta = QMessageBox::question(this, "Excluir?", "Deseja realmente excluir o repositório?", QMessageBox::Yes|QMessageBox::No);
        if(resposta == QMessageBox::Yes) {
            Repo r;
            r.setCodigo(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toInt());
            qDebug() << r.toString;
            dao.deletar(r);

            this->carregarTabela(dao.listarTodos());
            this->limparCampos();
            this->on_btnCancelar_clicked();
        }

    }
}

void RepoWindow::on_btnAlterar_clicked() {
    ui->lineEditCodigo->setText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toString());
    ui->lineEditNome->setText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 1).data().toString());
    ui->lineEditURL->setText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 2).data().toString());
    ui->comboBoxVersionControl->setEditText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 3).data().toString());

    this->bloquearCampos(false);
    ui->btnConfirmar->setEnabled(false);

}

void RepoWindow::on_btnEfetivaAlteracao_clicked()
{
    {
            Repo r;
            r.setCodigo(ui->lineEditCodigo->text().toInt());
            r.setName(ui->lineEditNome->text());
            r.setUrl(ui->lineEditURL->text());
            r.setVersionControl(ui->comboBoxVersionControl->currentText());
            dao.alterar(r);
            this->carregarTabela(dao.listarTodos());
            this->on_btnCancelar_clicked();

    }
}

void RepoWindow::on_btnLimpar_clicked()
{
    ui->lineEditNome->setText("");
    ui->lineEditURL->setText("");
}
