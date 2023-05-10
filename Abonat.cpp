#include "Abonat.h"
#include <string>

Abonat::Abonat(std::string nr_telefon, Abonament abonament, int id, std::string nume, std::string cnp)
{
this->nr_telefon = nr_telefon;
this->abonament = &abonament;
this->nume=nume;
}
Abonament Abonat::getAbonament(){
    return *abonament;
}
std::string Abonat::getNume() {
    return nume;
}
std::string Abonat::getNumarTel(){
    return nr_telefon;
}
AbonamentPremium* Abonat::getAbonamentRef(const Abonament &abonament1)
{
      //std::cout<<*abonament<<"\n";
//    try{
//    Abonament* ab = new AbonamentPremium();
//
//    AbonamentPremium* abc = dynamic_cast<AbonamentPremium*>(ab);
//    return abc;
//    }catch (std::exception& e){
//        std::cout<<e.what()<<std::endl;
//    }


//    auto* ap = dynamic_cast<AbonamentPremium*>(abonament);
//    return ap;
    if (typeid(abonament1)== typeid(AbonamentPremium)) {
        try {
            auto* abonament_ = dynamic_cast<AbonamentPremium*>(abonament);

            return abonament_;
        }
        catch (std::exception exception) {
            return NULL;
        }
    }
        /*
    if(auto* ap = dynamic_cast<AbonamentPremium*>(&abonament))
    {
        std::cout<<"cast referinta reusit"<< " "<< abonament;
        return ap;
    }
    else
        std::cout<<"cast referinta nereusit";
*/
}