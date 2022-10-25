#include <iostream>
#include <cstring>
#include "Angajat.h"
#include "gestiuneAngajati.h"
using namespace std;



int main() {
    Angajat *a1 = new Angajat(213,"Costel Marian", 37, 210);
    a1->afisareAngajat();
    Angajat *a2 = a1;
    cout<<*a2;
    cin>>*a1;
    cout<<*a1;
    delete a1;
    Angajat **lista = new Angajat*[20];

    //De facut o lista temporara si parsat lista temporara in constructor cu &
    // De separata fiecare metoda in .cpp din .h
    return 0;
}
