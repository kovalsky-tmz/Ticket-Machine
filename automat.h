#include <iostream>
#include <cstdio>
#include <time.h>
using namespace std;
class Automat
{
    float dzi_gr;
    float dwa_gr;
    float pi_gr;
    int zl;
    int dwa_zl;
    int pi_zl;
    float cena;
public:
    Automat(float=0 ,float=0.1,float=0.2,float=0.5,int=1, int=2,int=5);
    bool licz();
};
