// zad31.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

using namespace std;

int poleProstokatu(int a, int b)
{
    return a * b;
}

int poleTrojkatu(int a, int h)
{
    return a * h / 2;
}

int poleKola(int r)
{   
    return pow(r, 2) * M_PI;
}

void zad31()
{
    int warunek = 0;
    char figura;
    while (warunek == 0)
    {
        cout << "Pole, której z figur chcesz obliczyc: " << endl << "p. pole trojkata" << endl << "t. trojkata" << endl
            << "K. kola" << endl;
        cin >> figura;
        switch (figura)
        {
            case 'p':
            case 'P':
                cout << "podaj dlugosci bokow prostokątu" << endl;
                int dluzszy, krotszy;
                cin >> dluzszy >> krotszy;
                cout << "pole prostakata to: " << poleProstokatu(krotszy, dluzszy) << endl;
                break;
            case 't':
            case 'T':
                cout << "podaj dlugosc podstawy i wysokosci trojkata, ktorego pole chcesz obliczyc" << endl;
                cin >> dluzszy >> krotszy;
                cout << "pola trojkata to: "<< poleTrojkatu(dluzszy, krotszy) <<endl;
                break;
            case 'k':
            case 'K':
                cout << "podaj dlugosc promienia kola, ktorego pole chcesz obliczyc" << endl;
                cin >> krotszy;
                cout << "kole kola to: " << poleKola(krotszy) << endl;
      
        }
        cout << "czy chcesz kontynuowac: " << endl << "0. Tak" << endl << "1.Nie" << endl;
    }
}
    

int main()
{
    zad31();
    
}
