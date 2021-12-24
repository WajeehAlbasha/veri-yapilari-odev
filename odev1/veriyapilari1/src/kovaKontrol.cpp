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
#include <iostream>
#include "kovaKontrol.hpp"
#include <random>
#include <string>

using namespace std;

/*void kovaKontrol::toplariTerstenYerlestir(top* toplar[],int kovaSayisi)
{
    top **toplar1 = new top*[kovaSayisi];
    for (int i = 0;i<kovaSayisi;i++)
    {
        toplar1[i]=new top();

        toplar1[i]=toplar[i];
        
    }
    for (int j = 0; j < kovaSayisi; j++)
    {
        toplar[j]=toplar1[kovaSayisi-j-1];
    }
    delete []toplar1; 
}*/

void kovaKontrol::yazdir(string topKarakteri)
{   
    for(int satirSayisi = 0 ; satirSayisi< 7;satirSayisi++)
    {        
        for (int i = 0;i<satirSayisi-5;i++)
        {
            cout<<"   .|.  "<<endl;  
            for (int j = 0;j < i + 1;j++)
            {
                cout<<"  .   . "<<endl;
                for (int h = 0;h < j + 1;h++)
                {
                    cout<<" .     ."<<endl;
                    for (int t = 0;t < h + 1;t++)
                    {
                        cout<<" #     #"<<endl;
                        for (int s = 0;s < t + 1;s++)
                        {
                        cout<<" #  "  << topKarakteri <<"  #"<<endl;
                            for (int d = 0;d < s + 1;d++)
                            {
                            cout<<" #     #"<<endl;  
                                for (int y =0;y < d + 1;y++)
                                {
                                cout<<" #######"<<endl;
                                }                          
                            }                            
                        }
                    }
                } 
            }         
        }    
    }
}

void kovaKontrol::kovalariTerstenYerlestir(kova* kovalar[],int kovaSayisi)
{
    kova **kovalar1 = new kova*[kovaSayisi];
    for (int i = 0;i<kovaSayisi;i++)
    {
        kovalar1[i]=new kova();

        kovalar1[i]=kovalar[i];
        
    }
    for (int j = 0; j < kovaSayisi; j++)
    {
        kovalar[j]=kovalar1[kovaSayisi-j-1];
    }
    delete []kovalar1; 
}

void kovaKontrol::kovaDesgistir(kova* kovalar[],int s1,int s2)
{
    kova *adrs;

    adrs = kovalar[s1-1];

    kovalar[s1-1] = kovalar[s2-1];

    kovalar[s2-1]=adrs;
}
void kovaKontrol::topDesgistir(top* toplar[],int s1,int s2)
{
    top *adrs;

    adrs = toplar[s1-1];

    toplar[s1-1] = toplar[s2-1];

    toplar[s2-1]=adrs;
}

