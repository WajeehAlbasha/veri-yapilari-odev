/*
* @file DoublyLinkedList.cpp
* @description DoublyLinkedList sınıfın fonksiyonlarının gövdeleri
* @course Bilgisayar Muhendisligi 2A
* @assignment 2.ODEV
* @date	27/11/2019
* @author adSoyad: wajeeh bacha emailAdresi:wajeeh.bacha@ogr.sakarya.edu.tr;
*/
#include <iostream>
#include <string>
#include <string.h>
#include "Iterator.hpp"
#include "DoublyLinkedList.hpp"

using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
	basDugum = new Dugum(" ",0,NULL,NULL); // Bos bir dugum olusturuluyor	
	size=0;
}

const string& DoublyLinkedList:: atEleman(int konum)
{
	Dugum *temp;
	temp=basDugum->ileri;
	int sayac=0;
	while(temp != NULL)
    {
		if(sayac==konum){
			return temp->eleman;
		}
		temp=temp->ileri;
		sayac++;
	}
}

const int& DoublyLinkedList:: atIndex(int konum)
{
	Dugum *temp;
	temp=basDugum->ileri;
	int sayac=0;
	while(temp != NULL){
		if(sayac==konum){
			return temp->inde;
		}
		temp=temp->ileri;
		sayac++;
	}
}

bool DoublyLinkedList::isEmpty() const
{
	return basDugum->ileri == NULL;
}

int DoublyLinkedList::Count() const
{
	return size;
}

void DoublyLinkedList::add(const string& yeni,const int& inde)
{
	insert(Count(),yeni,inde);
}

void DoublyLinkedList::insert(int konum,const string& yeni,const int& inde)
{
	Iterator iterator;
	iterator = OncekiniKonumuIleBul(konum);
	Dugum *newNext = iterator.current->ileri;
	iterator.current->ileri = new Dugum(yeni,inde,newNext,iterator.current);
	if(newNext != NULL) newNext->geri = iterator.current->ileri;			
	size++;			
}

void DoublyLinkedList::remove(const string aranan)
{
	int konum = indexOf(aranan);
	removeAt(konum);
}

void DoublyLinkedList::removeAt(int konum)
{
	Iterator onceki;
	onceki = OncekiniKonumuIleBul(konum);
	if(onceki.current->ileri != NULL){
		Dugum *eskiDugum = onceki.current->ileri;
		onceki.current->ileri = onceki.current->ileri->ileri;
		if(eskiDugum->ileri != NULL) eskiDugum->ileri->geri = eskiDugum->geri;
		delete eskiDugum;
		size--;
	}
}

bool DoublyLinkedList::find(const string& aranan) const
{
	for(Iterator iterator(basDugum->ileri);!iterator.canMove();iterator.next()){
		if(iterator.current->eleman == aranan) return true;
	}
	return false;
}

int DoublyLinkedList::indexOf(const string& aranan)
{
	int index=0;
	for(Iterator iterator(basDugum->ileri);!iterator.canMove();iterator.next()){
		if(iterator.current->eleman == aranan) return index;
		index++;
	}

}
ostream& operator<<(ostream& screen, DoublyLinkedList &right)
{
	if(right.isEmpty()) screen<<"Liste bos";
	else{
		for(Iterator iterator = right.FirstNode();!iterator.canMove();iterator.next())
			screen<<iterator.getCurrent()<<" ";
		screen<<endl;
	}
	return screen;
}

void DoublyLinkedList::clear()/// Listedeki elemanlari temizler
{
	while(!isEmpty())
		removeAt(0);			
}

DoublyLinkedList::~DoublyLinkedList()
{
	clear();
	delete basDugum;
}