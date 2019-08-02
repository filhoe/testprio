#include "feature.h"

int Feature::getCodigo() const {
    return this->codigo;
}

void Feature::setCodigo(int value) {
    if (value > 0) {
        this->codigo = value;
    }
}

QString Feature::getNome() const {
    return this->nome;
}

void Feature::setNome(const QString &value) {
    this->nome = value;
}

Feature::Feature()
{

}
