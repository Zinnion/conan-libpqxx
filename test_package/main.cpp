#include <cstdlib>
#include <iostream>

#include "pqxx/pqxx"

int main()
{
    std::cout << "libpqxx version: " << PQXX_VERSION << std::endl;

    //pqxx::connection conn("dbname=zinnion user=zinnion password=Br@sa154 host=68.169.103.42 port=26257 requiressl=1 sslmode=verify-full");
    pqxx::connection conn("dbname=zinnion user=zinnion password=Br@sa154 host=68.169.103.42 port=26257 requiressl=1");
    std::cout << "is connected: "<< conn.is_open() << std::endl;
    if (conn.is_open()) {
        conn.disconnect();
    }

    return EXIT_SUCCESS;
}
