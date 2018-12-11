#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Menu{
    char wybor;

    char wczytajZnak();

public:
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    char wybierzOpcjeZMenuEdycja();
};
















#endif
