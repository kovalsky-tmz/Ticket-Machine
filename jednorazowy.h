#include <iostream>
#include <cstdio>
#include <time.h>
using namespace std;
class Jednorazowy
{
    protected:
            float cena;
            string data;
            string nazwa_rodzaj;

public :

    Jednorazowy(string ="brak",string ="brak",float =0);
    void norm();
    void jednorazowy_drukuj();
    void wyswietl();
    void ulgowy_ustawowy();
};
