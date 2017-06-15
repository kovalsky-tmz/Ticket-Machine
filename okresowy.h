#include <iostream>
#include <cstdio>
#include <time.h>
using namespace std;
class Okresowy:public Jednorazowy
{
string imie;
string nazwisko;
public:
Okresowy(string ="brak",string ="brak",float =0, string="brak",string="brak");
void imienny_drukuj();
void okaziciel_drukuj();
};
