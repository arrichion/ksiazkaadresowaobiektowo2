#ifndef UZYTKOWNIKMENADZER_H
#define UZYTKOWNIKMENADZER_H

#include <iostream>
#include <vector>
#include "windows.h"
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenadzer{
    int idZalogowanegoUzytkownika;
    PlikZUzytkownikami plikZUzytkownikami;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    UzytkownikMenadzer(string nazwPlikuZUzytkownikami): plikZUzytkownikami(nazwPlikuZUzytkownikami){
        uzytkownicy = wczytajUzytkownikowZPliku();
        idZalogowanegoUzytkownika = 0;
    } ;
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void zapiszWszystkichUzytkownikowDoPliku();
    int pobierzIdZalogowanegoUzytkownika();
    void  wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();

};

#endif
