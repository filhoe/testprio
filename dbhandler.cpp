#include "dbhandler.h"
#include <QDir>
#include <QString>
#include <QFile>

DBHandler::DBHandler() {

}

void DBHandler::conectar() { //Modificar este método futuramente para ser compatível com macOS e Linux.


    // Copy database model from resources to C:\TestPrio folder
    QDir dir;

    if (!QFile::exists("C:/TestPrio/testprio.db")) {
        dir.mkdir("C:/TestPrio");
        QFile::copy(":/db/testprio.db", "C:\\TestPrio\\testprio.db");
        QFile::setPermissions("C:/TestPrio/testprio.db", QFileDevice::ReadOwner|QFileDevice::WriteOwner);
    }

     // Verify active connections with SQLite database
     if (QSqlDatabase::contains("TestPrioDB"))
        db = QSqlDatabase::database("TestPrioDB");
     else
        db = QSqlDatabase::addDatabase("QSQLITE", "TestPrioDB");
        db.setDatabaseName("C:/TestPrio/testprio.db");


     if ( !db.open() )
     {
        qDebug() << db.lastError();
        qFatal("Failed to connect Sqlite database");
     }
}

void DBHandler::open() {
    if ( !db.open() ) {
       conectar();
    }
}

void DBHandler::close() {
    db.close();
}
