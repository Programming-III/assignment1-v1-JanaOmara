

#include <iostream>
#include <string>
using namespace std;
#ifndef ANIMAL_H 
#define ANIMAL_H
class Animal{
    private:
        string name ;
        int age ;
        bool isHungry;
    public :
        Animal(){
            name = "null";
            age = 0;
            isHungry= false;
        }
        Animal(string n , int a, bool hun);
        void setname (string n);
        void setage (int a);
        string getname ();
        int getage();
        void display();
        void feed();
};
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
class Bird : public Animal{
    private:
        float wingSpan;
    public :
        Bird() : Animal() {
            wingSpan= 0;
        }
        
        Bird(float wing,string n, int a);
         void dispaly();
    
};
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
    
};
 #endif   




#endif
