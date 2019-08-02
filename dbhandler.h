#ifndef DBHANDLER_H
#define DBHANDLER_H
#include <QtSql>

class DBHandler
{

private:
    QSqlDatabase db;
    void conectar();

public:
    DBHandler();
    void open();
    void close();
};

#endif // DBHANDLER_H
