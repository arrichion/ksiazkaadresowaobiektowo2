#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat{
    int id;
    string imie, nazwisko, adres;

public:
    void ustawId(int noweId);
    void ustawImie(string nowyImie);
    void ustawNazwisko(string noweNazwsiko);
    void ustawAdres(string noweAdres);


    int pobierzId();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzAdres();
};

#endif
