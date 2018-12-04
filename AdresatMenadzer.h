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
    int idOstatniegoAdresata, idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;

    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdOstatniegoAdresata();
    bool czyIstniejeLogin(string login);

public:
    AdresatMenadzer(string nazwaPlikuZAdresatami): plikZAdresatami(nazwaPlikuZAdresatami){};
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    int dodajAdresata();
    void wyswietlDaneAdresata();
    void wyswietlWszystkichAdresatow();
    void dopiszAdresataDoPliku(Adresat adresat);
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);

};

#endif
