#ifndef CACAPOO_ABONAMENT_H
#define CACAPOO_ABONAMENT_H
#include <string>
#include <memory>

class Abonament
{
protected:
    std::string nume_abonament;
    float pret;
    int perioada;
public:
    Abonament();
    Abonament(std::string nume_abonament, float pret, int perioada);
    float getPret();
    int getPerioada();
    std::string showAb();
    Abonament& operator=(const Abonament& other);
    friend std::ostream& operator<<(std::ostream& os, const Abonament& abonament);
    friend std::istream& operator>>(std::istream& os, Abonament& abonament);
    virtual ~Abonament();
};
std::ostream& operator<<(std::ostream& os, const Abonament& abonament);
std::istream& operator>>(std::istream& os, Abonament& abonament);


#endif
