#include "filewindow.h"
#include "ui_filewindow.h"
#include <QMessageBox>
#include <QQueue>

FileWindow::FileWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileWindow) {
    ui->setupUi(this);
    //this->setFixedSize(532,324);
    this->carregarTabela(dao.listarTodos());
    this->limparCampos();
    this->on_btnCancelar_clicked();
}

FileWindow::~FileWindow()
{
    delete ui;
}

void FileWindow::bloquearCampos(bool b)
{
    ui->btnAlterar->setEnabled(b);
    ui->btnDeletar->setEnabled(b);
    ui->btnNovo->setEnabled(b);
    ui->lineEditNome->setEnabled(!b);
    ui->comboBoxFunc->setEnabled(!b);
    ui->btnCancelar->setEnabled(!b);
    ui->btnConfirmar->setEnabled(!b);
    ui->btnEfetivaAlteracao->setEnabled(!b);
    ui->btnLimpar->setEnabled(!b);
}

void FileWindow::limparCampos()
{
    ui->lineEditCodigo->setText("");
    ui->lineEditNome->setText("");
}

void FileWindow::carregarTabela(QQueue<File> files) {

    if(files.size() >= 0) {
        ui->tableWidgetFiles->setRowCount(0);
        File f;
        QQueue<File> aux;
        aux = files;

        for(int i = 0; i < files.size(); i++) {
            f = aux.back();
            aux.pop_back();

            QTableWidgetItem *item0 = new QTableWidgetItem(tr(QString::number(f.getCodigo()).toUtf8()));
            QTableWidgetItem *item1 = new QTableWidgetItem(tr(f.getName().toUtf8()));
            QTableWidgetItem *item2 = new QTableWidgetItem(tr(f.getFunc().toUtf8()));

            ui->tableWidgetFiles->insertRow(ui->tableWidgetFiles->rowCount());
            ui->tableWidgetFiles->setItem(ui->tableWidgetFiles->rowCount()-1, 0, item0);
            ui->tableWidgetFiles->setItem(ui->tableWidgetFiles->rowCount()-1, 1, item1);
            ui->tableWidgetFiles->setItem(ui->tableWidgetFiles->rowCount()-1, 2, item2);

        }

     }

  }

void FileWindow::on_btnNovo_clicked()
{
    this->limparCampos();
    this->bloquearCampos(false);
    ui->btnEfetivaAlteracao->setEnabled(false);
}

void FileWindow::on_btnCancelar_clicked()
{
    this->limparCampos();
    this->bloquearCampos(true);
}

void FileWindow::on_btnConfirmar_clicked()
{

        File f;
        f.setCodigo(ui->lineEditCodigo->text().toInt());
        f.setName(ui->lineEditNome->text());
        f.setFunc(ui->comboBoxFunc->currentText());
        dao.salvar(f);
        this->carregarTabela(dao.listarTodos());
        this->on_btnCancelar_clicked();

}

void FileWindow::on_btnDeletar_clicked() {
    if(ui->tableWidgetFiles->model()->rowCount() > 0 && ui->tableWidgetFiles->selectedItems().size() > 0) {

        QMessageBox::StandardButton resposta;
        resposta = QMessageBox::question(this, "Excluir?", "Deseja realmente excluir o arquivo?", QMessageBox::Yes|QMessageBox::No);
        if(resposta == QMessageBox::Yes) {
            File f;
            f.setCodigo(ui->tableWidgetFiles->model()->index(ui->tableWidgetFiles->currentIndex().row(), 0).data().toInt());
            qDebug() << f.toString;
            dao.deletar(f);

            this->carregarTabela(dao.listarTodos());
            this->limparCampos();
            this->on_btnCancelar_clicked();
        }

    }
}

void FileWindow::on_btnAlterar_clicked() {
    ui->lineEditCodigo->setText(ui->tableWidgetFiles->model()->index(ui->tableWidgetFiles->currentIndex().row(), 0).data().toString());
    ui->lineEditNome->setText(ui->tableWidgetFiles->model()->index(ui->tableWidgetFiles->currentIndex().row(), 1).data().toString());
    ui->comboBoxFunc->setCurrentText(ui->tableWidgetFiles->model()->index(ui->tableWidgetFiles->currentIndex().row(), 2).data().toString());

    this->bloquearCampos(false);
    ui->btnConfirmar->setEnabled(false);

}

void FileWindow::on_btnEfetivaAlteracao_clicked()
{
    {
            File f;
            f.setCodigo(ui->lineEditCodigo->text().toInt());
            f.setName(ui->lineEditNome->text());
            f.setFunc(ui->comboBoxFunc->currentText());
            dao.alterar(f);
            this->carregarTabela(dao.listarTodos());
            this->on_btnCancelar_clicked();

    }
}

void FileWindow::on_btnLimpar_clicked()
{
    ui->lineEditNome->setText("");
    ui->comboBoxFunc->setCurrentText("");
}
