#ifndef FILEDAO_H
#define FILEDAO_H
#include <QQueue>
#include "file.h"
#include "dbhandler.h"
#include <queue>


class FileDAO {

private:
    DBHandler db;

public:
    FileDAO();
    QString salvar(File &FileDao);
    QString alterar(File &FileDao);
    QString deletar(File &FileDao);
    File buscar(int codigo);
    QQueue<File> listarTodos();

};

#endif // FILEDAO_H
