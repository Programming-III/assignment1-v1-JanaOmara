#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

/

class Enclosure {
        private :
            Animal*animal;
            int capacity;
            int current;
        public:
            Enclosure(){
                capacity=0;
                
            }
            Enclosure(int cap);
            void addAnimal(Animal* a);
            void displayAnimals();
        ~Enclosure();
    };





#endif
