#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here



class Reptile : public Animal {
    private:
     bool venomous ;
    public:
    Reptile(): Animal()
    {
        venomous = false;
    }
    Reptile(bool ven,string n, int a);
    void dispaly();
    ~Reptile();
};





#endif
