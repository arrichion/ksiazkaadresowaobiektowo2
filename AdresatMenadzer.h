#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include "windows.h"
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer{
    const int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;

    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();

public:
    AdresatMenadzer(string nazwaPlikuZAdresatami, int IDZALOGOWANEGOUZYTKOWNIKA)
        : plikZAdresatami(nazwaPlikuZAdresatami), idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA){
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };

    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void znajdzAdresataPoImieniu();
    void znajdzAdresataPoNazwisku();
};

#endif
