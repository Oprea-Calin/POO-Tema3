#include <utility>
#include <memory>
#include "AbonamentPremium.h"

    AbonamentPremium::AbonamentPremium() {
    }

    int AbonamentPremium::getReducere()
{
        return reducere;
};

AbonamentPremium::AbonamentPremium(int reducere, std::string nume_abonament, float pret, int perioada) {
 this->reducere = reducere;
 this->nume_abonament = nume_abonament;
 this->pret = pret;
 this-> perioada = perioada;
}
