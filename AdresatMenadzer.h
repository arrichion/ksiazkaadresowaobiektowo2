#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include "windows.h"
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "Menu.h"

using namespace std;

class AdresatMenadzer{
    const int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;
    Menu menu;

    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    int podajIdWybranegoAdresata();
    void zaktualizujDaneEdytowanegoAdresata(Adresat adresat, int idEdytowanegoAdresata);

public:
    AdresatMenadzer(string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami, int IDZALOGOWANEGOUZYTKOWNIKA)
        : plikZAdresatami(nazwaPlikuZAdresatami, nazwaTymczasowegoPlikuZAdresatami), idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA){
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };

    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int usunAdresata();
    void edytujAdresata();
};

#endif
