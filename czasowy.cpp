#include <iostream>
#include "jednorazowy.h"
#include "czasowy.h"
#include <cstdio>
#include <cstdlib>
#include <time.h>
using namespace std;
Czasowy::Czasowy(string n,string d,float c)
:Jednorazowy(n,d,c){};

void Czasowy::czasowy_120_drukuj()
{
    time_t czas;
    struct tm * ptr;
    time( & czas );
    ptr = localtime( & czas );
    char * data = asctime( ptr );
    cout<<nazwa_rodzaj<<", Cena:"<<cena<<"zl, "<<"Data:"<<data;
    cout<<"Do godziny: "<<ptr->tm_hour+2<<":"<<ptr->tm_min<<endl<<endl;


};
void Czasowy::czasowy_24_drukuj()
{
    time_t czas;
    struct tm * ptr;
    time( & czas );
    ptr = localtime( & czas );
    char * data = asctime( ptr );
    cout<<nazwa_rodzaj<<", Cena:"<<cena<<"zl, "<<"Data:"<<data;
    cout<<"Do dnia: "<<"0"<<ptr->tm_mday+1<<"."<<"0"<<ptr->tm_mon+1<<", Godziny "<<ptr->tm_hour<<":"<<ptr->tm_min<<endl;

};
