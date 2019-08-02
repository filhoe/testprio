#include "userwindow.h"
#include "ui_userwindow.h"
#include <QMessageBox>
#include <QQueue>

UserWindow::UserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserWindow) {
    ui->setupUi(this);
    this->setFixedSize(532,324);
    this->carregarTabela(dao.listarTodos());
    this->limparCampos();
    this->on_btnCancelar_clicked();
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::bloquearCampos(bool b)
{
    ui->btnAlterar->setEnabled(b);
    ui->btnDeletar->setEnabled(b);
    ui->btnNovo->setEnabled(b);

    ui->lineEditUserName->setEnabled(!b);
    ui->btnCancelar->setEnabled(!b);
    ui->btnConfirmar->setEnabled(!b);
    ui->btnEfetivaAlteracao->setEnabled(!b);
    ui->btnLimpar->setEnabled(!b);
}

void UserWindow::limparCampos()
{
    ui->lineEditUserCode->setText("");
    ui->lineEditUserName->setText("");
}

void UserWindow::carregarTabela(QQueue<User> users) {

    if(users.size() >= 0) {
        ui->tableWidget->setRowCount(0);
        User u;
        QQueue<User> aux;
        aux = users;

        for(int i = 0; i < users.size(); i++) {
            u = aux.back();
            aux.pop_back();

           // QTableWidgetItem *item0 = new QTableWidgetItem(tr(QString::number(u.getUserCode().toUtf8()));
            QTableWidgetItem *item1 = new QTableWidgetItem(tr(u.getUserName().toUtf8()));
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            //ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, item0);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, item1);
    }

  };

}

void UserWindow::on_btnNovo_clicked()
{
    this->limparCampos();
    this->bloquearCampos(false);
    ui->btnEfetivaAlteracao->setEnabled(false);
}

void UserWindow::on_btnCancelar_clicked()
{
    this->limparCampos();
    this->bloquearCampos(true);
}

void UserWindow::on_btnConfirmar_clicked()
{
        User u;
        u.setUserCode(ui->lineEditUserCode->text().toInt());
        u.setUserName(ui->lineEditUserName->text());

        dao.salvar(u);

        this->carregarTabela(dao.listarTodos());
        this->on_btnCancelar_clicked();
}

void UserWindow::on_btnDeletar_clicked() {
    if(ui->tableWidget->model()->rowCount() > 0 && ui->tableWidget->selectedItems().size() > 0) {

        QMessageBox::StandardButton resposta;
        resposta = QMessageBox::question(this, "Deletar", "Deseja realmente deletar?", QMessageBox::Yes|QMessageBox::No);
        if(resposta == QMessageBox::Yes) {
            User u;
            u.setUserCode(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toInt());
            u.setUserName(ui->lineEditUserName->text());

            qDebug() << u.toString;
            dao.deletar(u);

            this->carregarTabela(dao.listarTodos());
            this->limparCampos();
            this->on_btnCancelar_clicked();
        }

    }
}

void UserWindow::on_btnAlterar_clicked() {
    ui->lineEditUserName->setText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 0).data().toString());
    ui->lineEditUserPassword->setText(ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(), 1).data().toString());

    this->bloquearCampos(false);
    ui->btnConfirmar->setEnabled(false);

}

void UserWindow::on_btnEfetivaAlteracao_clicked()

    {
            User u;
            u.setUserCode(ui->lineEditUserCode->text().toInt());
            u.setUserName(ui->lineEditUserName->text());

            dao.alterar(u);

            this->carregarTabela(dao.listarTodos());
            this->on_btnCancelar_clicked();
    }


void UserWindow::on_btnLimpar_clicked()
{
    ui->lineEditUserName->setText("");
    ui->lineEditUserPassword->setText("");
}
