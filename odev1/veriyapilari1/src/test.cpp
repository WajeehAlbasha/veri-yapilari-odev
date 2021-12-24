/**
* @file veriYapilariOdev1
* @description kovaSayisi isteniyo ve toplar giriliyor ve adresleri ile işlemler yapılıyor
* @course Bilgisayar Muhendisligi 2A
* @assignment 1.ODEV
* @date	2/11/2019
* @author adı: wajeeh bacha emailAdresi:;
**/

#include <iostream>
#include "kova.hpp"
#include "top.hpp"
#include "kovaKontrol.hpp"
#include <random>
#include <string>
#include <time.h>

using namespace std;

int main()
{
		system("CLS");
		cout<<"Kova Sayisi: ";
		int kovaSayisi;
		cin>> kovaSayisi;
		kova **kovalar = new kova*[kovaSayisi];
		top **toplar = new top*[kovaSayisi];
		string dizi[]={"A","B","C","D","E"};
		kovaKontrol k1;
		top *t = new top("-");
		bool a =true;
		for(int i=0;i<kovaSayisi; i++)
  	    {
   	    	kovalar[i] = new kova();     
   	    	cout<<i+1<<". Kova"<<endl;
			k1.yazdir(t->getKarakter());
   	   		cout<<"Kova Adresi:"<<kovalar[i]<<endl;       
			cout<<"top Adresi: ";
			if(t->getKarakter() == "-"){
			cout<< "NULL"<<endl<<endl;
			}
		}  
	int sec;
	do{
		int s1;
		int s2;
			
						
				
		cout<<"1.Toplari Yerlestir"<<endl;
		cout<<"2.Toplari Yoket"<<endl;
		cout<<"3.Kova Degistir"<<endl;
		cout<<"4.Top Degistir"<<endl;
		cout<<"5.Kovalari Tersten Yerlestir"<<endl;
		cout<<"6.Toplari Tersten Yerlestir"<<endl;
		cout<<"7.Cikis"<<endl;
		cout<<"Secim:";
		cin>>sec;
		switch(sec){
			case 1:
			{
				//top *t = new top(t->ranUret());
				for(int i=0;i<kovaSayisi; i++)
				{
					if(a)
					{
						toplar[i]=new top(dizi[i]);
					}
				
					

					cout<<i+1<<". Kova"<<endl;
					k1.yazdir(toplar[i]->getKarakter());
					cout<<"Kova Adresi:"<<kovalar[i]<<endl; 
					kovalar[i]->setTopadres(toplar[i]);      
					cout<<"top Adresi: ";
					
					
					
						kovalar[i]->yazdir();
						cout <<endl<<endl;
						

						
				}a=false;
			}break;
			case 2:
			{
				a = true;
				for(int i=0;i<kovaSayisi; i++)
				{
					top *t = new top("-");
					cout<<i+1<<". Kova"<<endl;
					k1.yazdir(t->getKarakter());
					cout<<"Kova Adresi:"<<kovalar[i]<<endl;
					kovalar[i]->setTopadres(toplar[i]);      
					cout<<"top Adresi: ";
					if(t->getKarakter() == "-")
					{
						cout<< "NULL"<<endl<<endl;
					}
						 
				}
			}break;
			case 3:
			{
				cout<<"Hangi Kova :";
				cin>>s1;
				cout<<"Hnagi Kova ile :";
				cin>>s2;
				k1.kovaDesgistir(kovalar,s1,s2);
				for(int i=0;i<kovaSayisi; i++)
				{
					cout<<i+1<<". Kova"<<endl;
					k1.yazdir(t->getKarakter());
					cout<<"Kova Adresi:"<<kovalar[i]<<endl; 
					kovalar[i]->setTopadres(toplar[i]);      
					cout<<"top Adresi: ";					
					kovalar[i]->yazdir();
					cout <<endl<<endl;	
				}		
			}break;
			case 4:
			{
				cout<<"Hangi top :";
				cin>>s1;
				cout<<"Hnagi top ile :";
				cin>>s2;
				k1.topDesgistir(toplar,s1,s2);
				for(int i=0;i<kovaSayisi; i++)
				{
					cout<<i+1<<". Kova"<<endl;
					k1.yazdir(t->getKarakter());
					cout<<"Kova Adresi:"<<kovalar[i]<<endl; 
					kovalar[i]->setTopadres(toplar[i]);      
					cout<<"top Adresi: ";					
					kovalar[i]->yazdir();
					cout <<endl<<endl;	
				}
			}break;
			case 5:
			{
				k1.kovalariTerstenYerlestir(kovalar,kovaSayisi);
				for(int i=0;i<kovaSayisi; i++)
				{
					cout<<i+1<<". Kova"<<endl;
					k1.yazdir(t->getKarakter());
					cout<<"Kova Adresi:"<<kovalar[i]<<endl; 
					kovalar[i]->setTopadres(toplar[i]);      
					cout<<"top Adresi: ";					
					kovalar[i]->yazdir();
					cout <<endl<<endl;	
				}	
			}
			break;
			case 6:			
				/*k1.toplariTerstenYerlestir(toplar,kovaSayisi);
				for(int i=0;i<kovaSayisi; i++)
				{
					cout<<i+1<<". Kova"<<endl;
					k1.yazdir(t->getKarakter());
					cout<<"Kova Adresi:"<<kovalar[i]<<endl; 
					kovalar[i]->setTopadres(toplar[i]);      
					cout<<"top Adresi: ";					
					kovalar[i]->yazdir();
					cout <<endl<<endl;	
				}*/
			break;	
			case 7:

			break;
			default:
				cout<<endl<<"Yanlis tercih!"<<endl;
				cin.ignore();
				cin.get();
			break;
		}
	}while(sec != 7);
		delete []kovalar;
		delete []toplar;    
}
   