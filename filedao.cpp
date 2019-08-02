#include "filedao.h"
#include <iostream>

FileDAO::FileDAO() {

}

QString FileDAO::salvar(File &file) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));

        //FALTA fazer a relação com a outra tabela tb_feature para associar com o arquivo
        query.prepare("INSERT INTO tb_files(file_name, associated_feature) VALUES(:name, :feature)");
        query.bindValue(":id", file.getCodigo());
        query.bindValue(":name", file.getName());
        query.bindValue(":feature", file.getFunc());
        
        if (query.exec()) {
            file.setCodigo(query.lastInsertId().toInt());
        }
        QSqlDatabase::database().commit();
        msg = "Dados salvos com sucesso.";

    } catch(std::exception e) {
        QSqlDatabase::database().rollback();
        msg = "Não foi possível salvar.";
    }

    db.close();
    return msg;
}


QString FileDAO::alterar(File &file) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("UPDATE tb_files SET file_name=:nome, associated_feature=:feature WHERE cd_file = :id");
        query.bindValue(":id", file.getCodigo());
        query.bindValue(":nome", file.getName());
        query.bindValue(":feature", file.getFunc());
        query.exec();

        QSqlDatabase::database().commit();

        msg = "Dados alterados com sucesso.";
    } catch(std::exception e) {
        QSqlDatabase::database().rollback();
        msg = "Não foi possível alterar os dados.";
    }

    db.close();
    return msg;
}


QString FileDAO::deletar(File &file) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("DELETE from tb_files WHERE cd_file = :id");
        query.bindValue(":id", file.getCodigo());
        query.exec();

        QSqlDatabase::database().commit();

        msg = "Dados deletados com sucesso.";

    } catch(std::exception e) {
        QSqlDatabase::database().rollback();
        msg = "Não foi possível deletar os dados.";
    }

    db.close();
    return msg;
}


File FileDAO::buscar(int id) {
    db.open();
    File file;

    try {

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * from tb_files WHERE cd_file = :id;");
        query.bindValue(":id", id);

        if (query.exec()) {
            while(query.next()) {
                file.setCodigo(query.value(0).toInt());
                file.setName(query.value(1).toString());
                file.setFunc(query.value(2).toString());
            }
        }

        QSqlDatabase::database().commit();


    } catch(std::exception e) {

    }

    db.close();
    return file;
}

QQueue<File> FileDAO::listarTodos() {
    db.open();
    QQueue<File> files;

    try {
        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * FROM tb_files");

        if(query.exec()) {
            while(query.next()){
                File file;
                file.setCodigo(query.value(0).toInt());
                file.setName(query.value(1).toString());
                file.setFunc(query.value(2).toString());

                files.push_front(file);
            }
        }

    } catch(std::exception e) {

    }

    db.close();
    return files;
}
