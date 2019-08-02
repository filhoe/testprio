#ifndef FILE_H
#define FILE_H
#include <QString>

class File {
private:
    int codigo;
    QString nome;
    QString func;

public:
    File();
    int getCodigo() const;
    void setCodigo(int value);

    QString getName() const;
    void setName(const QString &value);

    QString getFunc() const;
    void setFunc(const QString &value);
    QString toString;

};

#endif // FILE_H
