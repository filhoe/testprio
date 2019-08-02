#include "user.h"

int User::getUserCode() const {
    return this->userCode;
}

void User::setUserCode(int value) {
    if (value > 0) {
        this->userCode = value;
    }
}

QString User::getUserName() const {
    return this->userName;
}

void User::setUserName(const QString &value) {
    this->userName = value;
}

QString User::getUserPassword() const {
    return this->userPassword;
}

void User::setUserPassword(const QString &value) {
    this->userName = value;
}

User::User()
{

}
