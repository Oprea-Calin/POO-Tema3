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

void Clienti::numar_abonati_premium()
{
//    nr_abonatipremium=0;
//    for (auto i : abonati) {
//        if (typeid(*i) == typeid(AbonamentPremium)) {
//            Abonament *aux;
//            aux = dynamic_cast<AbonamentPremium *>(aux);
//            aux->show();
//            nr_abonatipremium++;
//        } else {
//            continue;
//        }
//    }

       // Abonament abonament = abonati[i]->getAbonament();
       // AbonamentPremium* ab = abonati[i]->getAbonamentRef(abonament);
        //dynamic_cast pe pointer
        //AbonamentPremium* ab= dynamic_cast<AbonamentPremium*>(abonati[i]);
        //if ( ab != nullptr)
       // {
//            count++;
//        }
//    }
}
float Clienti::suma_bani_incasata()
{
    float suma = 0;
    for (int i = 0; i < abonati.size(); i++)
    {
        abonamente[i]->show();
        std::cout<<"Abonamentul este al abonatului "<<abonati[i]->getAbonament().getNume()<<" cu numarul de telefon "<<abonati[i]->getNumarTel()<<'\n';
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
//functii virtuale, pointer la clasa de baza, smart pointers, dynamic cast, supraincarcare copiere, exceptii, const
//
Clienti::~Clienti(){}