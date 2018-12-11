#include "AdresatMenadzer.h"

Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    Adresat adresat;

    adresat.ustawId(plikZAdresatami.pobierzIdOstatniegoAdresata()+1);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cin.sync();
    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

int AdresatMenadzer::dodajAdresata(){
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
}

void AdresatMenadzer::wyswietlWszystkichAdresatow(){
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (int i=0; i<adresaci.size(); ++i)
            adresaci[i].wyswietlDaneAdresata();
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatMenadzer::znajdzAdresataPoImieniu(){
    string szukaneImie = "";
    bool znalezionoAdresata = false;

    system("cls");
    cout << " >>> WYSZUKIWANIE ADRESATA PO IMIENIU <<<" << endl << endl;
    cout << "Wprowadz wyszukiwane imie: ";
    cin>>szukaneImie;

    for (int i=0; i<adresaci.size(); ++i){
        if (adresaci[i].pobierzImie()==szukaneImie){
            adresaci[i].wyswietlDaneAdresata();
            znalezionoAdresata = true;
        }
    }

    if(!znalezionoAdresata)
        cout << endl << "Nie znaleziono adresatow o podanym imieniu" << endl;

    cout << endl;
    system("pause");
}

void AdresatMenadzer::znajdzAdresataPoNazwisku(){
    string szukaneNazwisko = "";
    bool znalezionoAdresata = false;

    system("cls");
    cout << " >>> WYSZUKIWANIE ADRESATA PO NAZWISKU <<<" << endl << endl;
    cout << "Wprowadz wyszukiwane nazwisko: ";
    cin>>szukaneNazwisko;

    for (int i=0; i<adresaci.size(); ++i){
        if (adresaci[i].pobierzNazwisko()==szukaneNazwisko){
            adresaci[i].wyswietlDaneAdresata();
            znalezionoAdresata = true;
        }
    }

    if(!znalezionoAdresata)
        cout << endl << "Nie znaleziono adresatow o podanym imieniu" << endl;

    cout << endl;
    system("pause");
}
