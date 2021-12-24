/*
* @file test.cpp
* @description text dosyasından okuduğumuz kelimeleri çift bağıl listeye atıyoruz
* @course Bilgisayar Muhendisligi 2A
* @assignment 2.ODEV
* @date	27/11/2019
* @author adSoyad: wajeeh bacha emailAdresi:wajeeh.bacha@ogr.sakarya.edu.tr;
*/
#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include "dugum.hpp"
#include "Iterator.hpp"
#include "DoublyLinkedList.hpp"

using namespace std;
int main()
{
	system("CLS");

	DoublyLinkedList *kelimeler = new DoublyLinkedList();
	string kelime;
	int kazanilanbyte=0;
	int cnt=0;
	int x=0;
	int basamak=0;

	ifstream inFile;
	inFile.open("doc/text.txt");

	for (int index = 0;inFile >> kelime; index++)
	{
		if(kelimeler->find(kelime))
		{
			for (int i = 0; kelime[i]; i++)
			{
				cnt++;
			}
			x=cnt;
			do
			{
				basamak++;
				x=x/10;
			} while (x);
			cnt=cnt-basamak;
			kazanilanbyte += cnt;
			cnt=0;
			basamak=0;
			kelimeler->add(" ",index-kelimeler->indexOf(kelime));
		}
		else{
			kelimeler->add(kelime,0);
		}
		
		if (index==0)
		{
			cout<<"NULL<-";
			cout<<":"<<kelimeler->atEleman(index)<<" - "<<kelimeler->atIndex(index)<<":";
		}
		if (index!=0)
		{
			cout<<"<->";
			cout<<":"<<kelimeler->atEleman(index)<<" - "<<kelimeler->atIndex(index)<<":";
		}
	}
	cout<<"->NULL"<<endl;
	cout<<"toplam kazanc : "<<kazanilanbyte<<" Byte"<<endl;
	inFile.close();
	
	delete kelimeler;
	system("pause");
	return 0;
}