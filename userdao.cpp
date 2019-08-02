#include "userdao.h"
#include <iostream>

UserDAO::UserDAO() {

}

QString UserDAO::salvar(User &user) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("INSERT INTO tb_users(user_name, user_password) VALUES(:name, :password)");
        query.bindValue(":name", user.getUserName());
        query.bindValue(":password", user.getUserPassword());

        if (query.exec()) {
            user.setUserCode(query.lastInsertId().toInt());
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


QString UserDAO::alterar(User &user) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("UPDATE tb_users SET user_name = :name, user_password = :password WHERE cd_user = :id");
        query.bindValue(":id", user.getUserCode());
        query.bindValue(":name", user.getUserName());
        query.bindValue(":password", user.getUserPassword());
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


QString UserDAO::deletar(User &user) {
    db.open();

    QString msg;

    try {
        QSqlDatabase::database().transaction();

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("DELETE from tb_users WHERE cd_user = :id");
        query.bindValue(":id", user.getUserCode());
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


User UserDAO::buscar(int id) {
    db.open();
    User user;

    try {

        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * from tb_users WHERE cd_user = :id;");
        query.bindValue(":id", id);

        if (query.exec()) {
            while(query.next()) {
                user.setUserCode(query.value(0).toInt());
                user.setUserName(query.value(1).toString());
            }
        }

        QSqlDatabase::database().commit();


    } catch(std::exception e) {

    }

    db.close();
    return user;
}

QQueue<User> UserDAO::listarTodos() {
    db.open();
    QQueue<User> users;

    try {
        QSqlQuery query (QSqlDatabase::database( "TestPrioDB" ));
        query.prepare("SELECT * FROM tb_users ORDER BY user_name");

        if(query.exec()) {
            while(query.next()){
                User user;
                user.setUserCode(query.value(0).toInt());
                user.setUserName(query.value(1).toString());
                users.push_front(user);
            }
        }

    } catch(std::exception e) {

    }

    db.close();
    return users;
}
