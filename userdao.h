#ifndef USERDAO_H
#define USERDAO_H
#include <QQueue>
#include "user.h"
#include "dbhandler.h"
#include <queue>


class UserDAO {

private:
    DBHandler db;

public:
    UserDAO();
    QString salvar(User &UserDao);
    QString alterar(User &UserDao);
    QString deletar(User &UserDao);
    User buscar(int codigo);
    QQueue<User> listarTodos();

};

#endif // USERDAO_H
