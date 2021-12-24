/**
* @file veriYapilariOdev1
* @description kovaSayisi isteniyo ve toplar giriliyor ve adresleri ile işlemler yapılıyor
* @course Bilgisayar Muhendisligi 2A
* @assignment 1.ODEV
* @date	2/11/2019
* @author adı: wajeeh bacha emailAdresi;
**/

#include "kova.hpp"
#include "top.hpp"
#include <time.h>
#include <iostream>
#include <random>
#include <string>


using namespace std;


top::top(string karakter){
    topKarakteri = karakter;
}    

string top::getKarakter()
{
    return topKarakteri;
}

    


