#include <utility>
#include <memory>
#include "AbonamentPremium.h"

    AbonamentPremium::AbonamentPremium() {
    }

    const int AbonamentPremium::getReducere()
{
        return reducere;
}

AbonamentPremium::AbonamentPremium(int reducere, std::string nume_abonament, float pret, int perioada) {
 this->reducere = reducere;
 this->nume_abonament = nume_abonament;
 this->pret = pret;
 this-> perioada = perioada;
}
void AbonamentPremium::show() {
    std::cout<<'\n';
    std::cout<<"Abonamentul "<< nume_abonament<<" "<< " este pe perioada de "<<perioada<<" luni si costa "<< pret-reducere<< " lei/luna, aplicandu-se o reducere de "<<reducere<<" de lei, fiind un abonament premium."<<'\n';
}

AbonamentPremium::~AbonamentPremium(){}