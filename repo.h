#ifndef REPO_H
#define REPO_H
#include <QString>

class Repo {
private:
    int codigo;
    QString nome;
    QString url;
    QString versionControl;

public:
    Repo();
    int getCodigo() const;
    void setCodigo(int value);

    QString getName() const;
    void setName(const QString &value);

    QString getUrl() const;
    void setUrl(const QString &value);
    QString toString;

    QString getVersionControl() const;
    void setVersionControl(const QString &value);

};

#endif // REPO_H
