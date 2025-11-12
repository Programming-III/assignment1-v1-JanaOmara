#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal{
    private:
        string colour;
    public:
        Mammal() : Animal(){
            colour ="Null";
        }
         Mammal (string c,string n, int a ) ;
     void dispaly();
};






#endif
