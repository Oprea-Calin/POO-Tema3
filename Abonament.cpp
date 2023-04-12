#include "Abonament.h"
#include <utility>
#include <memory>
#include <bits/stdc++.h>


   Abonament::Abonament(){}
   Abonament::Abonament(std::string nume_abonament, float pret, int perioada)
    {
        this->nume_abonament = nume_abonament;
        this->pret = pret;
        this->perioada = perioada;
    }
    float Abonament::getPret()
    {
        return pret;
    }
    int Abonament::getPerioada()
    {
        return perioada;
    }
    std::string Abonament::showAb()
    {
        return nume_abonament;
    }
    Abonament& Abonament::operator=(const Abonament& other)
    {
        this->nume_abonament = other.nume_abonament;
        this->perioada = other.perioada;
        this->pret = other.pret;
        return *this;
    }

    Abonament::~Abonament() {}

std::ostream &operator<<(std::ostream& os, const Abonament& abonament)
{
    os << "Abonament "<< abonament.nume_abonament << " cu pretul de " << abonament.pret<<" pe o perioada de "<< abonament.perioada<<std::endl;

}
std::istream& operator>>(std::istream& os, Abonament& abonament) {
    std::cout << "Tip abonament";
    os >> abonament.nume_abonament;
    std::cout << "Pret";
    os >> abonament.pret;
    std::cout << "Perioada";
    os >> abonament.perioada;
}