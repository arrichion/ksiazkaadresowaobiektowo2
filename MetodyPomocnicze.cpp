#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include "MetodyPomocnicze.h"

string MetodyPomocnicze::konwerjsaIntNaString(int liczba){
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

#endif
