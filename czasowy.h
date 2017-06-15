#include <iostream>
#include <cstdio>
#include <time.h>
using namespace std;
class Czasowy:public Jednorazowy
{

public:
    Czasowy(string ="brak",string ="brak",float =0);
    void czasowy_120_drukuj();
    void czasowy_24_drukuj();
    void wyswietl();
};
