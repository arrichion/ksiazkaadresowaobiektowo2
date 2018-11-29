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

