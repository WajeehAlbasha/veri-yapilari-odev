/*
* @file Iterator.cpp
* @description iterator sınıfın fonksiyonlarının gövdeleri
* @course Bilgisayar Muhendisligi 2A
* @assignment 2.ODEV
* @date	27/11/2019
* @author adSoyad: wajeeh bacha emailAdresi:wajeeh.bacha@ogr.sakarya.edu.tr;
*/
#include <iostream>
#include <string>
#include <string.h>
#include "Iterator.hpp"

using namespace std;

Iterator::Iterator()// Yapici metot
{  
	current=NULL;
}

Iterator::Iterator(Dugum *dugum)// Yapici metot
{  
	current=dugum;
}

bool Iterator::canMove()
{
	return current == NULL;
}

void Iterator::next()
{
	if(canMove());
	current = current->ileri;
}

void Iterator::prev()
{
	if(canMove());
	current = current->geri;
}

const string Iterator:: getCurrent()const
{
	return current->eleman;
}
