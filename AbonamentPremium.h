#ifndef CACAPOO_ABONAMENTPREMIUM_H
#define CACAPOO_ABONAMENTPREMIUM_H
#include <utility>
#include <memory>
#include <bits/stdc++.h>
#include "Abonament.h"


class AbonamentPremium : public Abonament
{
private:
    int reducere;
public:
    AbonamentPremium();
    AbonamentPremium(int reducere, std::string nume_abonament, float pret, int perioada);
    const int getReducere();
    virtual ~AbonamentPremium();
};

#endif //CACAPOO_ABONAMENTPREMIUM_H