#ifndef FEATUREDAO_H
#define FEATUREDAO_H
#include <QQueue>
#include "feature.h"
#include "dbhandler.h"
#include <queue>


class FeatureDAO {

private:
    DBHandler db;

public:
    FeatureDAO();
    QString salvar(Feature &FeatureDao);
    QString alterar(Feature &FeatureDao);
    QString deletar(Feature &FeatureDao);
    Feature buscar(int codigo);
    QQueue<Feature> listarTodos();

};

#endif // FEATUREDAO_H
