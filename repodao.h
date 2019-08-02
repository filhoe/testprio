#ifndef REPODAO_H
#define REPODAO_H
#include <QQueue>
#include "repo.h"
#include "dbhandler.h"
#include <queue>


class RepoDAO {

private:
    DBHandler db;

public:
    RepoDAO();
    QString salvar(Repo &RepoDao);
    QString alterar(Repo &RepoDao);
    QString deletar(Repo &RepoDao);
    Repo buscar(int codigo);
    QQueue<Repo> listarTodos();

};

#endif // REPODAO_H
