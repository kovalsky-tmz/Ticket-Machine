#include <iostream>
#include "jednorazowy.h"
#include <cstdio>
#include <cstdlib>
#include <time.h>
using namespace std;
Jednorazowy::Jednorazowy(string n,string d, float c)
{
    nazwa_rodzaj=n;
    data=d;
    cena=c;
};

void Jednorazowy::jednorazowy_drukuj()
{
    time_t czas;
    struct tm * ptr;
    time( & czas );
    ptr = localtime( & czas );
    char * data = asctime( ptr );
    cout<<nazwa_rodzaj<<", Cena:"<<cena<<"zl, "<<"Data:"<<data<<endl;

};
