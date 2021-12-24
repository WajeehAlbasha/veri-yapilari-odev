/*
* @file Dugum.cpp
* @description dugum sınıfın fonksiyonlarının gövdeleri
* @course Bilgisayar Muhendisligi 2A
* @assignment 2.ODEV
* @date	27/11/2019
* @author adSoyad: wajeeh bacha emailAdresi:wajeeh.bacha@ogr.sakarya.edu.tr;
*/
#include <iostream>
#include <string>
#include <string.h>
#include "Iterator.hpp"
#include "Dugum.hpp"

using namespace std;

Dugum::Dugum(const string& eleman,const int& inde,Dugum *ilr=NULL,Dugum *gr=NULL)
{
	this->eleman=eleman;
	this->inde=inde;
	ileri=ilr;
	geri=gr;
}