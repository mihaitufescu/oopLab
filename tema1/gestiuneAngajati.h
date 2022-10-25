//
// Created by Simona on 10/25/2022.
//

#ifndef MAIN_CPP_GESTIUNEANGAJATI_H
#define MAIN_CPP_GESTIUNEANGAJATI_H
#include <iostream>
#include <cstring>
#include "Angajat.h"

class gestiuneAngajati {
private:
    int numarAngajati;
    int idDirector;
    Angajat **listaAngajati = new Angajat*[200];

public:
        gestiuneAngajati(int numarAngajati, int idDirector, Angajat *listaAngajati[])
        {
            this->numarAngajati = numarAngajati;
            this->idDirector = idDirector;
            for(int i=0;i<numarAngajati;i++)
            {
                this->listaAngajati[i] = listaAngajati[i];
            }
        }


};


#endif //MAIN_CPP_GESTIUNEANGAJATI_H
