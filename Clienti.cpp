#include "Clienti.h"
#include "Abonat.h"
Clienti::Clienti()
{

}
void Clienti::adauga_abonat(Abonat abonat)
{
    abonati.push_back(abonat);
}

int Clienti::numar_abonati_premium()
{
    int count = 0;
    for (int i=0; i<abonati.size(); i++)
    {

        Abonament* ab = abonati[i].getAbonamentRef();
        std::cout<<ab;
        if ( ab != nullptr)
        {
            count++;
        }
    }
    return count;
}
float Clienti::suma_bani_incasata()
{
    float suma = 0;
    for (int i = 0; i < abonati.size(); i++)
    {
        suma += abonati[i].getAbonament().getPret() * abonati[i].getAbonament().getPerioada();
    }
    return suma;
}
std::vector<Abonat> Clienti::getAbonati()
{
    return abonati;
}