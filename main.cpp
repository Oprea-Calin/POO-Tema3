#include <iostream>
#include "Abonament.h"
#include "AbonamentPremium.h"
#include "Clienti.h"

int main()
{
    Clienti clienti;
    Abonament abonament1("abonament1", 100, 6);
    Abonament abonament2("abonament2", 200, 12);
    AbonamentPremium abonament_premium(20, "abonament_premium", 300, 12);
    Abonat abonat1("0721111111", abonament1, 1, "Ion", "1234567890123");
    Abonat abonat2("0722222222", abonament2,2,"Mihnea","111111111111");
    Abonat abonat3("0722232222", abonament_premium,3,"Marian","111112111111");

    clienti.adauga_abonat(abonat1);
    clienti.adauga_abonat(abonat2);
    clienti.adauga_abonat(abonat3);
    std::cout<<clienti.numar_abonati_premium();
    std::cout<<std::endl;
    std::cout<<clienti.suma_bani_incasata();

    return 0;
}
