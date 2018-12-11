#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include "windows.h"
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami{
    const string nazwaPlikuZAdresatami;
    const string nazwaTymczasowegoPlikuZAdresatami;
    int idOstatniegoAdresata;
    bool czyPlikJestPusty();
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunOdczytywanyPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazweTymczasowegoPlikuNaNazweOdczytywanegoPliku(string nazwaTymczasowegoPlikuZRozszerzeniem, string nazwaPlikuZRozszerzeniem);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI, string NAZWATYMCZASOWEGOPLIKUZADRESATAMI)
        : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI), nazwaTymczasowegoPlikuZAdresatami(NAZWATYMCZASOWEGOPLIKUZADRESATAMI){};
    void dopiszAdresataDoPliku(Adresat adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
};

#endif
