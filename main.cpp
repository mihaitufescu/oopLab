#include <iostream>
#include "cstring"
#include "unistd.h"
using namespace std;

class Masina
{
    private:
            char *nume = new char[30];
            int anFabricatie;
            char *culoare= new char[30];
            char *alias = new char[30];


    public:

            Masina (const char * _nume= "default", int _anFabricatie= 0,const char * _culoare = "default")
            {
                strcpy(nume , _nume);
                anFabricatie = _anFabricatie;
                strcpy(culoare , _culoare);
            }

            void Afisare()
            {
               std::cout<< "Numele modelului este: " << nume << std::endl << "Anul de fabricatie este: "<< anFabricatie << std::endl << "Culoarea este: "<< culoare<<endl;
            }

            const char * getAlias ()
            {
                return alias;
            }
            void setAlias(const char * _alias)
            {
                if(_alias!=0)
                {
                    strcpy(alias, _alias);
                }
                else
                {
                    strcpy(alias, "default");
                }
            }
            void AfisareAlias()
            {
                std::cout<<"Aliasul este: "<<alias<<std::endl;
            }

            ~Masina() //destructor
            {
                delete[] nume;
            }
};



int main() {

    Masina *ecosport = new Masina("ecosport",2018,"albastraMetalizat");
    ecosport->Afisare();
    ecosport->setAlias("Lamborghini Urus");
    ecosport->AfisareAlias();
    Masina **cotoarbe = new *Masina[200];
    cotoarbe[0]= new Masina("307",2008,"albastru");
    cotoarbe[0]->Afisare();
    delete[] cotoarbe[0];
    cotoarbe[1]= new Masina("Passat B5.5", 2002, "albastru necaz");
    cotoarbe[1]->Afisare();
    delete[] cotoarbe[1];
    return 0;
}
