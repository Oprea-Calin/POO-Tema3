#include "Abonat.h"
#include <string>

Abonat::Abonat(std::string nr_telefon, Abonament abonament, int id, std::string nume, std::string cnp)
{
this->nr_telefon = nr_telefon;
this->abonament = abonament;
};
Abonament Abonat::getAbonament(){
    return abonament;
}
AbonamentPremium* Abonat::getAbonamentRef()
{
    AbonamentPremium* abonament1 = new AbonamentPremium();
    abonament1 = dynamic_cast<AbonamentPremium*>(&abonament);

    return abonament1;
}