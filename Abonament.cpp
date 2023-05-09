#include "Abonament.h"
#include <bits/stdc++.h>


Abonament::Abonament(){

}

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
const int Abonament:: getReducere() {
    return 0;
}
const std::string Abonament::getNume(){
    return nume_abonament;
}

void Abonament::show()
{
    std::cout<<"Abonamentul "<< nume_abonament<<" "<< " este pe perioada de "<<perioada<<" luni si costa "<< pret<< " lei/luna. ";
}

Abonament& Abonament::operator=(const Abonament& other)
{
    this->nume_abonament = other.nume_abonament;
    this->perioada = other.perioada;
    this->pret = other.pret;
    return *this;
}

Abonament::~Abonament(){}

std::ostream &operator<<(std::ostream& os, Abonament& abonament)
{
    os << "Abonament "<< abonament.getNume() << " cu pretul de " << abonament.getReducere()<<" pe o perioada de "<< abonament.getPerioada()<<'\n';
    return os;
}
std::istream& operator>>(std::istream& os, Abonament& abonament) {
    std::cout << "Tip abonament";
    os >> abonament.nume_abonament;
    std::cout << "Pret";
    os >> abonament.pret;
    std::cout << "Perioada";
    os >> abonament.perioada;
    return os;
}