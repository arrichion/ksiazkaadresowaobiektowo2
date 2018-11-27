#ifndef PLIKZZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "windows.h"
#include <fstream>
#include <sstream>

using namespace std;

class PlikZUzytkownikami{
    fstream plikTekstowy;
    string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

};

#endif
