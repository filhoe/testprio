#include "featuredao.h"
#include <iostream>

FeatureDAO::FeatureDAO() {

}

QString FeatureDAO::salvar(Feature &feature) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("INSERT INTO tb_features(ds_feature) VALUES(:descricao)");
        query.bindValue(":id", feature.getCodigo());
        query.bindValue(":descricao", feature.getNome());

        if (query.exec()) {
            feature.setCodigo(query.lastInsertId().toInt());
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


QString FeatureDAO::alterar(Feature &feature) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("UPDATE tb_features SET ds_feature = :descricao WHERE cd_feature = :id");
        query.bindValue(":id", feature.getCodigo());
        query.bindValue(":descricao", feature.getNome());
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


QString FeatureDAO::deletar(Feature &feature) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("DELETE from tb_features WHERE cd_feature = :id");
        query.bindValue(":id", feature.getCodigo());
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


Feature FeatureDAO::buscar(int id) {
    db.open();
    Feature feature;

    try {

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * from tb_features WHERE cd_feature = :id;");
        query.bindValue(":id", id);

        if (query.exec()) {
            while(query.next()) {
                feature.setCodigo(query.value(0).toInt());
                feature.setNome(query.value(1).toString());
            }
        }

        QSqlDatabase::database().commit();


    } catch(std::exception e) {

    }

    db.close();
    return feature;
}

QQueue<Feature> FeatureDAO::listarTodos() {
    db.open();
    QQueue<Feature> features;

    try {
        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * FROM tb_features ORDER BY ds_feature");

        if(query.exec()) {
            while(query.next()){
                Feature feature;
                feature.setCodigo(query.value(0).toInt());
                feature.setNome(query.value(1).toString());
                features.push_front(feature);
            }
        }

    } catch(std::exception e) {

    }

    db.close();
    return features;
}
