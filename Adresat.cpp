#include "Adresat.h"

void Adresat::ustawId(int noweId){
    if (noweId>=0)
        id = noweId;
}

void Adresat::ustawImie(string noweImie){
    imie = noweImie;
}

void Adresat::ustawNazwisko(string noweNazwisko){
    nazwisko = noweNazwisko;
}

void Adresat::ustawAdres(string nowyAdres){
    adres = nowyAdres;
}

void Adresat::ustawIdUzytkownika(int noweIdUzytkownika){
    idUzytkownika=noweIdUzytkownika;
}

void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu){
    numerTelefonu = nowyNumerTelefonu;
}

void Adresat::ustawEmail(string nowyEmail){
    email = nowyEmail;
}

int Adresat::pobierzId(){
    return id;
}

string Adresat::pobierzImie(){
    return imie;
}

string Adresat::pobierzNazwisko(){
    return nazwisko;
}

string Adresat::pobierzAdres(){
    return adres;
}

int Adresat::pobierzIdUzytkownika(){
    return idUzytkownika;
}

string Adresat::pobierzNumerTelefonu(){
    return numerTelefonu;
}

string Adresat::pobierzEmail(){
    return email;
}

void Adresat::wyswietlDaneAdresata(){
    cout << endl << "Id:                 " << pobierzId() << endl;
    cout << "Imie:               " << pobierzImie() << endl;
    cout << "Nazwisko:           " << pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << pobierzNumerTelefonu() << endl;
    cout << "Email:              " << pobierzEmail() << endl;
    cout << "Adres:              " << pobierzAdres() << endl;
    cout << "ID User:            " << pobierzIdUzytkownika() << endl;

}
