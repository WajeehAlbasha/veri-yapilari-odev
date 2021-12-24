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
string topKarakteri="-";



public:
    
    string getKarakter();
    string ranUret();
    top(string karakter);//varsayilan yapıcı metot
    //void randomUretme();
    
};

#endif