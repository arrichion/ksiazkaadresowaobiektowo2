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
    //int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;

    vector <Adresat> Adresaci;

    //Uzytkownik podajDaneNowegoUzytkownika();
    //int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    //(string nazwaPlikuZAdresatami): plikZAdresatami(nazwPlikuZAdresatami){}; //???
    //void wczytajUzytkownikowZPliku();
    //void rejestracjaUzytkownika();
    //void wypiszWszystkichUzytkownikow();

};

#endif
