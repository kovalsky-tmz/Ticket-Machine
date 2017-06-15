
#include "jednorazowy.h"
#include "okresowy.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
using namespace std;

Okresowy::Okresowy(string n, string d, float c, string im, string na)
:Jednorazowy(n,d,c)
{
imie=im;
nazwisko=na;
};

void Okresowy::imienny_drukuj()
{
    jednorazowy_drukuj();
    cout<<"Zarejestrowany na: "<<imie<<" "<<nazwisko<<endl;
};
void Okresowy::okaziciel_drukuj()
{
   jednorazowy_drukuj();
};
