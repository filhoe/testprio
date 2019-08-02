#ifndef FEATURE_H
#define FEATURE_H
#include <QString>

class Feature {
private:
    int codigo;
    QString nome;

public:
    Feature();
    int getCodigo() const;
    void setCodigo(int value);
    QString getNome() const;
    void setNome(const QString &value);
    QString toString;
};

#endif // FEATURE_H
