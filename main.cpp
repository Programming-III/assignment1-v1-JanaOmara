#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"
Animal::Animal (string n , int a, bool hun){
    name= n;
    age=a;
    isHungry=hun;
}

void Animal:: display(){
    cout<< "Name :"<< name<<endl;
    cout << "Age :"<<age<<endl;
    cout<<"isHungry :"<<isHungry<<endl;
}
void Animal :: feed(){
    if(isHungry==false){
        cout<< "not Hungry"<<endl;
    }
}
Mammal:: Mammal(string c,string n, int a ){
    colour=c;
}
void Mammal:: dispaly(){
    Animal: dispaly();
    cout<<colour<<endl;
}
Bird::Bird (float wing,string n, int a){
    wingSpan=wing;
}
Reptile:: Reptile(bool ven,string n, int a){
    venomous=ven;
}
void Enclosure::addAnimal(Animal* a){
    a=new Animal[capacity];
}
Enclosure::~Enclosure(){
  delete[] animal;
}
void Enclosure:: displayAnimals(){
    
}
Visitor::Visitor(string vn, int t){
    visitorName=vn;
    ticketsBought=t;
}
void Visitor::dispalyInfo(){
    cout << "Name "<<visitorName<<endl;
    cout<<"ticketsBought:"<<ticketsBought<<endl;
}
//iknow the rest but not enough time
int main()
{
    Mammal m ("orange ","Lion",5);
    m.dispaly();
   Visitor v("mariam",4);
   v.dispalyInfo();
   

    return 0;
}
