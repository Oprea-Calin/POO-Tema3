#include "Clienti.h"
#include "Abonat.h"
Clienti::Clienti()
{

}
void Clienti::adauga_abonat(const Abonat &abonat, const Abonament &abonament)
{
    abonati.push_back(new Abonat(abonat));
    abonamente.push_back(new Abonament(abonament));
}

void Clienti::adauga_abonat(const Abonat &abonat, const AbonamentPremium &abonamentpremium)
{
    abonati.push_back(new Abonat(abonat));
    abonamente.push_back(new AbonamentPremium(abonamentpremium));
    nr_abonatipremium++;
}
int Clienti::getNrAbonati() {

    return nr_abonatipremium;
}

float Clienti::suma_bani_incasata()
{
    float suma = 0;
    for (int i = 0; i < abonati.size(); i++)
    {
        //AbonamentPremium* aba= abonati[i]->getAbonamentRef(abonati[i]->getAbonament());
        abonamente[i]->show();
        std::cout<<"Abonamentul este al abonatului "<<abonati[i]->getNume()<<" cu numarul de telefon "<<abonati[i]->getNumarTel()<<'\n';
        std::cout<<'\n';
        suma += abonati[i]->getAbonament().getPret() * abonati[i]->getAbonament().getPerioada();
        if(typeid(*abonamente[i]) == typeid(AbonamentPremium))
        {
            suma-=abonamente[i]->getReducere() * abonamente[i]->getPerioada();
        }
    }
    return suma;
}
std::vector<Abonat*> Clienti::getAbonati()
{
    return abonati;
}
std::ostream& operator<<(std::ostream& stream, const Clienti& obj)
{
    int counter = 0;
    for (auto i : obj.abonamente)
    {
        if (typeid(*i) == typeid(AbonamentPremium))
        {
            Abonament* aux;
            aux = dynamic_cast<AbonamentPremium*>(i);                       //working dynamic_cast
            aux->show();
            counter++;
        }
        else
        {
            i->show();
        }
    }

    return stream;
}
//functii virtuale, pointer la clasa de baza, smart pointers, dynamic cast, supraincarcare copiere, exceptii, const
//
Clienti::~Clienti(){}