#include "repodao.h"
#include <iostream>

RepoDAO::RepoDAO() {

}

QString RepoDAO::salvar(Repo &repo) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("INSERT INTO tb_repos(name_repo, url_repo, version_control) VALUES(:name, :url, :versionControl)");
        query.bindValue(":id", repo.getCodigo());
        query.bindValue(":name", repo.getName());
        query.bindValue(":url", repo.getUrl());
        query.bindValue(":versionControl", repo.getVersionControl());

        if (query.exec()) {
            repo.setCodigo(query.lastInsertId().toInt());
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


QString RepoDAO::alterar(Repo &repo) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("UPDATE tb_repos SET name_repo=:nome, url_repo=:url, version_control=:versionControl WHERE cd_repo = :id");
        query.bindValue(":id", repo.getCodigo());
        query.bindValue(":nome", repo.getName());
        query.bindValue(":url", repo.getUrl());
        query.bindValue(":versionControl", repo.getVersionControl());
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


QString RepoDAO::deletar(Repo &repo) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("DELETE from tb_repos WHERE cd_repo = :id");
        query.bindValue(":id", repo.getCodigo());
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


Repo RepoDAO::buscar(int id) {
    db.open();
    Repo repo;

    try {

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * from tb_repos WHERE cd_repo = :id;");
        query.bindValue(":id", id);

        if (query.exec()) {
            while(query.next()) {
                repo.setCodigo(query.value(0).toInt());
                repo.setName(query.value(1).toString());
                repo.setUrl(query.value(2).toString());
                repo.setVersionControl(query.value(3).toString());
            }
        }

        QSqlDatabase::database().commit();


    } catch(std::exception e) {

    }

    db.close();
    return repo;
}

QQueue<Repo> RepoDAO::listarTodos() {
    db.open();
    QQueue<Repo> repos;

    try {
        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * FROM tb_repos ORDER BY url_repo");

        if(query.exec()) {
            while(query.next()){
                Repo repo;
                repo.setCodigo(query.value(0).toInt());
                repo.setName(query.value(1).toString());
                repo.setUrl(query.value(2).toString());
                repo.setVersionControl(query.value(3).toString());

                repos.push_front(repo);
            }
        }

    } catch(std::exception e) {

    }

    db.close();
    return repos;
}
