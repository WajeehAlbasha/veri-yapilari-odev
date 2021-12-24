#ifndef TOP_HPP
#define TOP_HPP

#include "kova.hpp"
#include <iostream>
#include <random>
#include <string>
#include <time.h>


using namespace std;


class top{
private:
string topKarakteri;
//string karakterler[26] = {"A","B","C","D","E","F","G","H","I","G","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z


public:
    
    string getKarakter();
    string ranUret();
    top(string karakter);//varsayilan yapıcı metot
    //void randomUretme();
    
};

#endif