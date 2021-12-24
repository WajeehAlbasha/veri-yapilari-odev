#ifndef KOVA_HPP
#define KOVA_HPP

#include "top.hpp"
#include <iostream>
#include <random>
#include <string>

using namespace std;


class kova{
private:
top *topadresi;


    

public:
void setTopadres(top *adres)
{ 
    topadresi = adres;  
} 

void yazdir()
{
    cout << topadresi;
}

    
    kova();//varsayilan yapici metot
};
#endif