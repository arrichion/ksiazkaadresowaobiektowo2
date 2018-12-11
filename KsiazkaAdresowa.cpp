#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenadzer.logowanieUzytkownika();
    if(uzytkownikMenadzer.czyUzytkownikJestZalogowany())
        adresatMenadzer = new AdresatMenadzer(nazwaPlikuZAdresatami, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata(){
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
        adresatMenadzer->dodajAdresata();
    else{
        cout << "Nie jesteœ zalogowany" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
    adresatMenadzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenadzer.wylogowanieUzytkownika();
    delete adresatMenadzer;
    adresatMenadzer = NULL;
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu(){
    adresatMenadzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku(){
    adresatMenadzer->wyszukajAdresatowPoNazwisku();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego(){
    menu.wybierzOpcjeZMenuGlownego();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika(){
    menu.wybierzOpcjeZMenuUzytkownika();
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika(){
    uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}
