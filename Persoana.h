//
// Created by oprea on 4/12/2023.
//

#ifndef CACAPOO_PERSOANA_H
#define CACAPOO_PERSOANA_H
#include <string>

class Persoana {
private:
    int id;
    std::string nume;
    std::string cnp;
public:
    Persoana(int id, std::string nume, std::string cnp);
};


#endif
