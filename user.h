#ifndef USER_H
#define USER_H
#include <QString>

class User {
private:
    int userCode;
    QString userName;
    QString userPassword;

public:
    User();
    int getUserCode() const;
    void setUserCode(int value);
    QString getUserName() const;
    void setUserName(const QString &value);
    QString toString;
    QString getUserPassword() const;
    void setUserPassword(const QString &value);
};

#endif // USER_H
