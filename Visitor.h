#include <iostream>
#include <string>
using namespace std;
#ifndef VISITOR_H
#define VISITOR_H
 class Visitor {
     private :
        string visitorName;
        int ticketsBought ;
     public :
     Visitor();
     Visitor(string vn, int t);
     void dispalyInfo();
     
        
     
 };
 #endif
