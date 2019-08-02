#include "file.h"

int File::getCodigo() const {
    return this->codigo;
}

void File::setCodigo(int value) {
    if (value > 0) {
        this->codigo = value;
    }
}

QString File::getName() const {
    return this->nome;
}

void File::setName(const QString &value) {
    this->nome = value;
}

QString File::getFunc() const {
    return this->func;
}

void File::setFunc(const QString &value) {
    this->func = value;
}

File::File()
{
    
}
