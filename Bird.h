#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 



class Bird : public Animal{
    private:
        float wingSpan;
    public :
        Bird() : Animal() {
            wingSpan= 0;
        }
        
        Bird(float wing,string n, int a);
         void dispaly();
~Bird();
    
};



#endif
