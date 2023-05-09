#ifndef CACAPOO_ABONAT_H
#define CACAPOO_ABONAT_H
#include <string>
#include "Abonament.h"
#include "AbonamentPremium.h"
#include "Persoana.h"

class Abonat {

protected:
    std::string nr_telefon;
    Abonament* abonament; //pointer la abonament
    std::string nume;
public:
    Abonat(std::string nr_telefon, Abonament abonament, int id, std::string nume, std::string cnp);
    Abonament getAbonament();
    std::string getNume();
    std::string getNumarTel();
    AbonamentPremium* getAbonamentRef(Abonament abonament1);
};


#endif
