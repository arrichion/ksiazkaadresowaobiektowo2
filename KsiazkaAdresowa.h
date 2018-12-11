#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer;
    Menu menu;
    const string nazwaPlikuZAdresatami;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI)
        : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};

    ~KsiazkaAdresowa(){
        delete adresatMenadzer;
    }

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wylogowanieUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
};

#endif
