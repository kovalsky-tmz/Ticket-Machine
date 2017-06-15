#include "automat.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
using namespace std;
Automat::Automat(float ce,float dzgr, float dwagr, float pigr, int z, int dwa, int pi)
{
    dzi_gr=dzgr;
    dwa_gr=dwagr;
    pi_gr=pigr;
    zl=z;
    dwa_zl=dwa;
    pi_zl=pi;
    cena=ce;

};

 void Automat::licz()
 {

     int wybor;
     float zmienna=0;
   do
    {
	    cout.precision( 4 );
            cout<<"Do zaplaty:"<<cena<<"zl"<<endl;
            cout<<"1. 10gr"<<endl;
            cout<<"2. 20gr"<<endl;
            cout<<"3. 50gr"<<endl;
            cout<<"4. 1zl"<<endl;
            cout<<"5. 2zl"<<endl;
            cout<<"6. 5zl"<<endl;
        cin>>wybor;
        system("clear");
        switch(wybor){
    case 1:
        zmienna=0.1;
        cena=cena-zmienna;
        break;
    case 2:
        zmienna=0.2;
        cena=cena-zmienna;
        break;
    case 3:
        zmienna=0.5;
        cena=cena-zmienna;
        break;
    case 4:
        zmienna=1;
        cena=cena-zmienna;
        break;
    case 5:
        zmienna=2;
        cena=cena-zmienna;
        break;
    case 6:
        zmienna=5;
        cena=cena-zmienna;
    break;
        }

    } while(cena>0);
cout.precision( 4 );
cout<<"Reszta: "<<cena<<"zl"<<endl;
cout<<"Dziekujemy za skorzystanie z biletomatu, nacisnij dowolny klawisz"<<endl;
cin.ignore();
cin.get();
};
