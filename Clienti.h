#ifndef CACAPOO_CLIENTI_H
#define CACAPOO_CLIENTI_H
#include "Abonat.h"

class Clienti {

protected:
    std::vector<Abonat*> abonati;
    std::vector<Abonament*> abonamente;
    int nr_abonatipremium=0;

public:
    Clienti();
    void adauga_abonat(const Abonat &abonat,const Abonament &abonament);
    void adauga_abonat(const Abonat &abonat,const AbonamentPremium &abonamentpremium);
    float suma_bani_incasata();
    int getNrAbonati();

    std::vector<Abonat*> getAbonati();

    Abonat& operator[](const std::string& other_nume);
    friend std::ostream& operator<<(std::ostream& stream, const Clienti& obj);

    virtual ~Clienti();
};


#endif
