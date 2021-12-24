#ifndef KOVAKONTROL_HPP
#define KOVAKONTROL_HPP
#include "kova.hpp"
#include "top.hpp"
#include <iostream>
#include <random>
#include <string>

class kovaKontrol{
private:
    
public:

void kovaDesgistir(kova* kovalar[],int s1,int s2);
void topDesgistir(top* toplar[],int s1,int s2);
void yazdir(string topKarakteri); 
void kovalariTerstenYerlestir(kova* kovalar[],int kovaSayisi);
void toplariTerstenYerlestir(top* toplar[],int kovaSayisi);    
};
#endif