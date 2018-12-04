#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat{
    int id, idUzytkownika;
    string imie, nazwisko, adres, numerTelefonu, email;

public:
    void ustawId(int noweId);
    void ustawImie(string nowyImie);
    void ustawNazwisko(string noweNazwsiko);
    void ustawAdres(string noweAdres);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);


    int pobierzId();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzAdres();
    int pobierzIdUzytkownika();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    void wyswietlDaneAdresata();

};

#endif
