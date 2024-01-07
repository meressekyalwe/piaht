#include "database.h"

Database::Database()
{
    Connection = nullptr;
}

Database::~Database()
{
    delete Connection;
}

Database* Database::GetConnection()
{
    if(Connection == nullptr)
    {
        //Connection = new Database();
    }

    return Connection;
}
