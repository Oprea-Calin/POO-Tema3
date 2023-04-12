#ifndef CACAPOO_CLIENTI_H
#define CACAPOO_CLIENTI_H
#include "Abonat.h"

class Clienti {

protected:
    std::vector<Abonat> abonati;

public:
    Clienti();
    void adauga_abonat(Abonat abonat);
    int numar_abonati_premium();
    float suma_bani_incasata();
    std::vector<Abonat> getAbonati();
};


#endif //CACAPOO_CLIENTI_H
