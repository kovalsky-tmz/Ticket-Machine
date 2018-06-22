#include <iostream>
#include "automat.h"
#include "jednorazowy.h"
#include "czasowy.h"
#include "okresowy.h"
#include <cstdio>
#include <cstdlib>
#include <time.h>
using namespace std;

void menu_okresowe()
{
    cout<<"Wybierz opcje:"<<endl
    <<"1. 14 Dniowy"<<endl
    <<"2. Miesieczny"<<endl
    <<"3. Anuluj"<<endl;

}
void menu_gl()
{
    cout<<"AUTOBAT BILETOWY SWIDNICA"<<endl<<endl<<"Wybierz opcje:"<<endl
    <<"1. Bilety"<<endl
    <<"2. Informacje o biletach"<<endl;

}

void menu_okresowe_rodzaj()
{
    cout<<"WYBRALES BILETY OKRESOWE:"<<endl
    <<"1. Bilet Imienny "<<endl
    <<"2. Bilet Na Okaziciela"<<endl
    <<"3. Wroc"<<endl;
}
void menu_bilet(){
    cout<<"WYBRALES BILETY:"<<endl
    <<"1. Bilet Jednorazowy"<<endl
    <<"2. Bilet Czasowy"<<endl
    <<"3. Bilety Okresowe"<<endl
    <<"4. Wroc"<<endl;
}

void menu_rodzaj(){
    cout<<"Rodzaj:"<<endl
    <<"1. Normalny"<<endl
    <<"2. Ulgowy gminny"<<endl
    <<"3. Ulgowy ustawowy"<<endl
    <<"4.Wroc"<<endl;
}
void menu_czasowy(){
    cout<<"Na ile?:"<<endl
    <<"1. 120minut"<<endl
    <<"2. 24 godziny"<<endl
    <<"3. Wroc"<<endl;
}

void info()
{
    cout<<"CENTRUM INFORMACJI"<<endl
    <<"1. Bilet Jednorazowy"<<endl
    <<"2. Bilet Czasowy"<<endl
    <<"3. Bilet Imienny"<<endl
    <<"4. Bilet Na Okaziciela"<<endl
    <<"5. Wroc"<<endl;
}

int main()
{

    int wybor;
    int wybor1;
    int wybor2;
    int wybor3;
    int wybor4;
    int wybor5;
    int wybor6;
    int wybor7;
    int wybor8;
    int wybor9;
    int wybor10;
    int wybor11;
    string imie;
    string nazwisko;

do
    {
    int ile=0;
    menu_gl();
    cin>>wybor;
    system("clear");

    switch(wybor)
        {
    case 1:
        menu_bilet();
        cin>>wybor1;
        system("clear");
            switch (wybor1)
            {
        case 1:
            menu_rodzaj();
            cin>>wybor2;
            system("clear");
            switch(wybor2)
                {
                case 1: ////jednorazowy normalny
                    {
                    cout<<"Ile biletow drukowac?"<<endl;
                    cin>>ile;
                    if(ile<=10)
                    {
                    Jednorazowy* wsk[10];
                    system("clear");

                    Automat a(ile*2.00);
                    float result=a.licz();
                    if(result==false)break;
                    for(int i=0; i<ile;i++)
                    {
                        cout<<"Bilety nr:"<< i<<endl;
                        wsk[i]=new Jednorazowy("Jednorazowy Normalny","brak",2);
                        wsk[i]->jednorazowy_drukuj();
                    }

		    for(int i=0; i<ile;i++)
                    {
                        delete  wsk[i];
                    }


                    cin.ignore();
				    cin.get();
                     system("clear");
                    }
                    else
                        {
                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                        cin.ignore();
				    cin.get();
                        system("clear");
                        }
                            }
                            break;
                case 2: ////jednorazowy gminny
                    {
                     cout<<"Ile biletow drukowac?"<<endl;
                    cin>>ile;
                    if(ile<=10)
                    {
                    Jednorazowy* wsk[10];
                    system("clear");

                    Automat a(ile*1.6);
                    a.licz();

                    for(int i=0; i<ile;i++)
                    {
                        cout<<"Bilety nr:"<< i<<endl;
                        wsk[i]=new Jednorazowy("Jednorazowy Ulgowy Gminny","brak", 1.6);
                        wsk[i]->jednorazowy_drukuj();
                    }

                    for(int i=0; i<ile;i++)
                    {
                        delete  wsk[i];
                    }

                   cin.ignore();
				    cin.get();
                     system("clear");
                    }
                    else
                        {
                        cout <<"Za duzo biletow.  Niemozliwe do wydrukowania"<<endl;
                        cin.ignore();
				    cin.get();
                        system("clear");
                        }
                            }
                        break;
                case 3: ////jednorazowy ustawowy
                    {
                     cout<<"Ile biletow drukowac?"<<endl;
                    cin>>ile;
                    if(ile<=10)
                    {
                    Jednorazowy* wsk[10];
                    system("clear");

                    Automat a(ile*1.40);
                    a.licz();

                    for(int i=0; i<ile;i++)
                    {
                        cout<<"Bilety nr:"<< i<<endl;
                        wsk[i]=new Jednorazowy("Jednorazowy Ulgowy Ustawowy", "brak",1.4);
                        wsk[i]->jednorazowy_drukuj();
                    }
                    for(int i=0; i<ile;i++)
                    {
                        delete  wsk[i];
                    }

                    cin.ignore();
				    cin.get();
                     system("clear");
                    }
                    else
                        {
                        cout <<"Za duzo biletow."<<endl;
                        cin.ignore();
				    cin.get();
                        system("clear");
                        }
                            }
                        break;
                case 4:
                    break;
            }
        break;
            case 2:
                menu_czasowy();
                cin>>wybor4;
                system("clear");
                switch(wybor4)
                    {
                    case 1: //// czasowy normalny
                        menu_rodzaj();
                        cin>>wybor5;
                        system("clear");
                        switch(wybor5)
                        {
                        case 1:
                            {
                        cout<<"Ile biletow drukowac?"<<endl;
                        cin>>ile;
                        if(ile<=10)
                        {
                        Czasowy* wsk[10];
                        system("clear");
                        Automat a(ile*4.0);
                        a.licz();
                        for(int i=0; i<ile;i++)
                        {
                            cout<<"Bilety nr:"<< i<<endl;
                            wsk[i]=new Czasowy("Czasowy Normalny 120-minutowy", "brak",4.0);
                            wsk[i]->czasowy_120_drukuj();
                        }
                        for(int i=0; i<ile;i++)
                        {
                        	delete  wsk[i];
                        }

                        cin.ignore();
				    cin.get();
                         system("clear");
                        }
                        else
                            {
                            cout <<"Za duzo biletow.  Niemozliwe do wydrukowania"<<endl;
                            cin.ignore();
				    cin.get();
                            system("clear");
                            }
                            }
                            break;
                        case 2: //// Czas Ulg Gmin
                            {
                            cout<<"Ile biletow drukowac?"<<endl;
                            cin>>ile;
                            system("clear");
                            if(ile<=10)
                            {
                            Czasowy* wsk[10];
                            system("clear");
                            Automat a(ile*3.6);
                            a.licz();

                            for(int i=0; i<ile;i++)
                            {
                                cout<<"Bilety nr:"<< i<<endl;
                                wsk[i]=new Czasowy("Czasowy Ulgowy Gminny 120-minutowy", "brak",3.6);
                                wsk[i]->czasowy_120_drukuj();
                            }
                            for(int i=0; i<ile;i++)
                    	    {
                        	delete  wsk[i];
                    	    }
                            cin.ignore();
				    cin.get();
                             system("clear");
                            }
                            else
                                {
                                cout <<"Za duzo biletow."<<endl;
                                cin.ignore();
				    cin.get();
                                system("clear");
                                }
                            }
                            break;
                        case 3: ////Czasowy Ulgowy Ustawowy
                            {
                           cout<<"Ile biletow drukowac?"<<endl;
                            cin>>ile;
                            system("clear");
                            if(ile<=10)
                            {
                            Czasowy* wsk[10];
                            system("clear");
                            Automat a(ile*3.4);
                            a.licz();

                            for(int i=0; i<ile;i++)
                            {
                                cout<<"Bilety nr:"<< i<<endl;
                                wsk[i]=new Czasowy("Czasowy Ulgowy Ustawowy 120-minutowy", "brak",3.4);
                                wsk[i]->czasowy_120_drukuj();
                            }
                            for(int i=0; i<ile;i++)
                            {
                        	delete  wsk[i];
                            }

                           cin.ignore();
				    cin.get();
                             system("clear");
                            }
                            else
                                {
                                cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                               cin.ignore();
				    cin.get();
                                system("clear");
                                }
                                }
                                break;
                            }
                            break;
                    case 2: //// 24 H
                        menu_rodzaj();
                        cin>>wybor6;
                        system("clear");
                        switch(wybor6)
                        {
                        case 1: //// 24h norm
                            {
                            cout<<"Ile biletow drukowac?"<<endl;
                            cin>>ile;
                            system("clear");
                            if(ile<=10)
                            {
                            Czasowy* wsk[10];
                            system("clear");
                            Automat a(ile*9.0);
                            a.licz();

                            for(int i=0; i<ile;i++)
                            {
                                cout<<"Bilety nr:"<< i<<endl;
                                wsk[i]=new Czasowy("Czasowy Normalny 24-godzinny", "brak",9.0);
                                wsk[i]->czasowy_24_drukuj();
                            }
                            for(int i=0; i<ile;i++)
                            {
                        	delete  wsk[i];
                            }

                            cin.ignore();
				    cin.get();
                             system("clear");
                            }
                            else
                                {
                                cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                cin.ignore();
				    cin.get();
                                system("clear");
                                }
                            }
                            break;
                        case 2: ////24h ulg gmin
                            {
                            cout<<"Ile biletow drukowac?"<<endl;
                            cin>>ile;
                            system("clear");
                            if(ile<=10)
                            {
                            Czasowy* wsk[10];
                            system("clear");

                            Automat a(ile*8.6);
                            a.licz();

                            for(int i=0; i<ile;i++)
                            {
                                cout<<"Bilety nr:"<< i<<endl;
                                wsk[i]=new Czasowy("Czasowy Ulgowy Gminny", "brak",8.6);
                                wsk[i]->czasowy_24_drukuj();
                            }


                            for(int i=0; i<ile;i++)
                            {
                        	delete  wsk[i];
                            }

                            cin.ignore();
				    cin.get();
                             system("clear");
                            }
                            else
                                {
                                cout <<"Za duzo biletow."<<endl;
                                cin.ignore();
				    cin.get();
                                system("clear");
                                }
                        }
                            break;
                        case 3: ////24 h ulg ustaw
                            {
                            cout<<"Ile biletow drukowac?"<<endl;
                            cin>>ile;
                            system("clear");
                            if(ile<=10)
                            {
                            Czasowy* wsk[10];
                            system("clear");

                            Automat a(ile*8.0);
                            a.licz();

                            for(int i=0; i<ile;i++)
                            {
                                cout<<"Bilety nr:"<< i<<endl;
                                wsk[i]=new Czasowy("Czasowy Ulgowy Ustawowy 24-godzinny", "brak",8.0);
                                wsk[i]->czasowy_24_drukuj();
                            }


                            for(int i=0; i<ile;i++)
                            {
                        	delete  wsk[i];
                            }

                            cin.ignore();
				    cin.get();
                             system("clear");
                            }
                            else
                                {
                                cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                cin.ignore();
				    cin.get();
                                system("clear");
                                }
                            }
                            break;
                        }
                        break;
                    }
                break;
            case 3: //// OKRESOWE
                {
                menu_okresowe_rodzaj();
                cin>>wybor7;
                system("clear");
                switch (wybor7)
                    {
                    case 1:  //// IMIENNE
                        {
                        menu_rodzaj();
                        cin>>wybor8;
                        system("clear");
                        switch(wybor8)
                            {
                            case 1: //// Norm
                                {
                                menu_okresowe();
                                cin>>wybor9;
                                system("clear");
                                switch(wybor9)
                                    {
                                    case 1: //// 14 dni
                                      {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    system("clear");
                                    cout<<"Na jakie imie?"<<endl;
                                    cin>>imie;
                                    cout << "Na jakie nazwisko?"<<endl;
                                    cin>>nazwisko;
                                    system("clear");
                                    Automat a(ile*50);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Imienny Normalny 14 Dniowy", "brak",50.0, imie, nazwisko);
                                        wsk[i]->imienny_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                                    {
                        		delete  wsk[i];
                                    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 2: //// miesiac
                                      {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    cout<<"Na jakie imie?"<<endl;
                                    cin>>imie;
                                    cout << "Na jakie nazwisko?"<<endl;
                                    cin>>nazwisko;
                                    system("clear");

                                    Automat a(ile*60.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Imienny Normalny Miesieczny", "brak",60.0, imie,nazwisko);
                                        wsk[i]->imienny_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                                    {
                        		delete  wsk[i];
                                    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 3: //// powrot
                                        break;
                                    }
                                }
                                break;
                            case 2: //// Ulg Gmin
                                menu_okresowe();
                                cin>>wybor9;
                                system("clear");
                                 {
                                switch(wybor9)
                                    {
                                    case 1: //// 14 dni
                                      {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    cout<<"Na jakie imie?"<<endl;
                                    cin>>imie;
                                    cout << "Na jakie nazwisko?"<<endl;
                                    cin>>nazwisko;
                                    system("clear");

                                    Automat a(ile*45.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Imienny Ulgowy Gminny 14 dniowy", "brak",45.0, imie,nazwisko);
                                        wsk[i]->imienny_drukuj();
                                    }


                                    for(int i=0; i<ile;i++)
                                    {
                        		delete  wsk[i];
                              	    }

                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 2: //// miesiac
                                      {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    cout<<"Na jakie imie?"<<endl;
                                    cin>>imie;
                                    cout << "Na jakie nazwisko?"<<endl;
                                    cin>>nazwisko;
                                    system("clear");

                                    Automat a(ile*55.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Imienny Ulgowy Gminny Miesieczny", "brak",55.0, imie,nazwisko);
                                        wsk[i]->imienny_drukuj();
                                    }


                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }

                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                       cin.ignore();
				    	cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 3:
                                        break;
                                    }
                                }
                                break;
                            case 3: //// Ulg Ustaw
                                menu_okresowe();
                                cin>>wybor9;
				system("clear");
                                 {
                                switch(wybor9)
                                    {
                                    case 1: //// 14 dni
                                      {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    cout<<"Na jakie imie?"<<endl;
                                    cin>>imie;
                                    cout << "Na jakie nazwisko?"<<endl;
                                    cin>>nazwisko;
                                    system("clear");
                                    Automat a(ile*40.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Imienny Ulgowy Ustawowy 14 dniowy", "brak",40.0, imie,nazwisko);
                                        wsk[i]->imienny_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 2: ///// miesiac
                                      {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    cout<<"Na jakie imie?"<<endl;
                                    cin>>imie;
                                    cout << "Na jakie nazwisko?"<<endl;
                                    cin>>nazwisko;;
                                    system("clear");
                                    Automat a(ile*60.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Imienny Ulgowy Ustawowy Miesieczny", "brak",60.0, imie,nazwisko);
                                        wsk[i]->imienny_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    	cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 3:
                                        break;
                                    }
                                }
                                break;
                            case 4: //// Wroc
                                break;
                            }
                        }
                        break;
                    case 2: //// NA OKAZICIELA
                        {
                        menu_rodzaj();
                        cin>>wybor8;
                        system("clear");
                        switch(wybor8)
                            {
                            case 1: //// Norm
                                {
                                menu_okresowe();
                                cin>>wybor10;
				system("clear");
                                switch(wybor10)
                                    {
                                    case 1: //// 14
                                    {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];

                                    Automat a(ile*80.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Na Okaziciela Normalny 14 dniowy", "brak",80.0);
                                        wsk[i]->okaziciel_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                    cin.ignore();
				    cin.get();
                                    system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 2: //// miech
                                        {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    system("clear");
                                    Automat a(ile*90.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Na Okaziciela Normalny Miesieczny", "brak",90.0);
                                        wsk[i]->okaziciel_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                       cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }

                                        break;
                                    case 3:
                                        break;
                                    }
                                }
                                break;
                            case 2: //// Ulg Gmin
                                 {
				menu_okresowe();
                                cin>>wybor9;
				system("clear");
                                switch(wybor9)
                                    {
                                    case 1: //// 14
                                        {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    system("clear");
                                    Automat a(ile*74.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Na Okaziciela Ulgowy Gminny 14 dniowy", "brak",74.0);
                                        wsk[i]->okaziciel_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 2: //// miech
                                        {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    system("clear");
                                    Automat a(ile*80.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Na Okaziciela Ulgowy Gminny Miesieczny", "brak",80.0);
                                        wsk[i]->okaziciel_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 3:
                                        break;
                                    }
                                }
                                break;
                            case 3:   //// Ulg Ustaw
                                 {
				 menu_okresowe();
                               	 cin>>wybor9;
				 system("clear");
                                 switch(wybor9)
                                    {
                                    case 1: //// 14
                                        {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    system("clear");
                                    Automat a(ile*64.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Na Okaziciela Ulgowy Ustawowy 14 dniowy", "brak",64.0);
                                        wsk[i]->okaziciel_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                    cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 2: //// miech
                                        {
                                    cout<<"Ile biletow drukowac?"<<endl;
                                    cin>>ile;
                                    system("clear");
                                    if(ile<=10)
                                    {
                                    Okresowy* wsk[10];
                                    system("clear");
                                    Automat a(ile*55.0);
                                    a.licz();

                                    for(int i=0; i<ile;i++)
                                    {
                                        cout<<"Bilety nr:"<< i<<endl;
                                        wsk[i]=new Okresowy("Okresowy Na Okaziciela Ulgowy Ustawowy Miesieczny", "brak",55.0);
                                        wsk[i]->okaziciel_drukuj();
                                    }
                                    for(int i=0; i<ile;i++)
                            	    {
                        		delete  wsk[i];
                           	    }
                                   cin.ignore();
				    cin.get();
                                     system("clear");
                                    }
                                    else
                                        {
                                        cout <<"Za duzo biletow. Niemozliwe do wydrukowania"<<endl;
                                        cin.ignore();
				    cin.get();
                                        system("clear");
                                        }
                                    }
                                        break;
                                    case 3:
                                        break;
                                    }
                                }
                                break;
                            case 4: //// Wroc
                                break;
                            }
                        }
                        break;
                    case 3: //// WROC
                        break;
                    }
                } //// koniec okresowe
                break;
            case 4:
                break;
            }
            break;
        case 2:
            do
            {
                info();
                cin>>wybor11;
                system("clear");
                switch(wybor11)
                {
                case 1:
                    cout <<"Bilet jednorazowy uprawnia do jednorazowego przejazdu jednym srodkiem transportu - autobusem. "
                    <<"Bilet jednorazowy uprawnia do korzystania z linii: normalnych oraz podmiejskich albo pospiesznych oraz nocnych. Stanowi on dowod uiszczenia oplaty za przejazd przez jego posiadacza z chwila skasowania go kasownikiem znajdujacym sie w danym pojezdzie i zachowuje waznosc do chwili opuszczenia tego pojazdu"<<endl
                    <<"Nacisnij dowolny klawisz..."<<endl;

		    cin.ignore();
				    cin.get();
		    system("clear");
                    break;
                case 2:
                    cout<<"Bilet czasowy przeznaczony jest do jednorazowego kasowania i zachowuje swoja waznosc od momentu skasowania go przez okres:  120 minut, 24 godzin. W okresie waznosci biletu czasowego mozliwa jest nieograniczona liczba przesiadek. Czas przeznaczony na przesiadanie wlicza siê do czasu podrozy. "<<endl
                    <<"Nacisnij dowolny klawisz..."<<endl;
                    cin.ignore();
		cin.get();
		    system("clear");
                    break;
                case 3:
                    cout<<"Bilety imienne kodowane sa na spersonalizowanych. Bilet imienny upowaznia wskazana osobe do podrozowania komunikacja miejska, w okresie trwania jego waznosci, na okreslonych typach linii."<<endl
                    <<"Nacisnij dowolny klawisz..."<<endl;
                    cin.ignore();
		    cin.get();
		    system("clear");
                    break;
                case 4:
                    cout<<"Bilety imienne kodowane sa na niespersonalizowanych. Bilet na okaziciela upowaania jego posiadacza do podrozowania komunikacja miejska, w okresie trwania jego waznosci, wszystkimi typami linii komunikacji miejskiej."<<endl
                    <<"Nacisnij dowolny klawisz..."<<endl;
                    cin.ignore();
		    cin.get();
		    system("clear");
                    break;
                }
            }while(wybor11=!5);
        }
     }while(wybor);
}

