#ifndef DATABASE_H
#define DATABASE_H


class Database
{
private:

    Database();

    ~Database();

    static Database* Connection;

public:

    Database(const Database&) = delete; 

    void operator = (const Database&) = delete;

    static Database* GetConnection();   

private:


};

#endif