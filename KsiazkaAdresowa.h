#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer adresatMenadzer; //(uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami):
        uzytkownikMenadzer(nazwaPlikuZUzytkownikami),
        adresatMenadzer(nazwaPlikuZAdresatami){
        uzytkownikMenadzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void  wylogowanieUzytkownika();

};

#endif
