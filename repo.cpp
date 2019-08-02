#include "repo.h"

int Repo::getCodigo() const {
    return this->codigo;
}

void Repo::setCodigo(int value) {
    if (value > 0) {
        this->codigo = value;
    }
}

QString Repo::getName() const {
    return this->nome;
}

void Repo::setName(const QString &value) {
    this->nome = value;
}

QString Repo::getUrl() const {
    return this->url;
}

void Repo::setUrl(const QString &value) {
    this->url = value;
}

QString Repo::getVersionControl() const
{
    return versionControl;
}

void Repo::setVersionControl(const QString &value)
{
    versionControl = value;
}

Repo::Repo()
{
    
}
