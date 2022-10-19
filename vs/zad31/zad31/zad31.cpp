// zad31.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#define M_PI 3.14159265358979323846

using namespace std;

double poleProstokatu(double a, double b)
{
    return a * b;
}

double poleTrojkatu(double a, double h)
{
    return a * h / 2;
}

double poleKola(double r)
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
                double dluzszy, krotszy;
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


double obliczankoSin(double kat, char rodzaj)
{
    double stopnie = 0;
    double odp = 0;
    stopnie = kat;
    switch (rodzaj)
    {
        case 's':
        case 'S':
            stopnie = kat * M_PI / 180;
        defaul:
            odp = sin(stopnie);
            break;
    }
    return odp;
}
    

void zad32()
{
    double x = 0;
    char y;
    cout << "podaj wartosc kata" << endl;
    cin >> x;
    cout << "podaj sposob podawania kontow" << endl << "s.Stopnie" << endl << "r.radiany" << endl;
    cin >> y;
    cout<< "wartosc sinusa wynosi " << obliczankoSin(x, y);
}

void zad33()
{
    double stopnie;
    cout << setw(5) << "kat" << setw(5) << "|"<< setw(5)  <<"sin" << setw(5) << "|"<< setw(5) <<"cos"  << setw(5) << "|"<< setw(5) << " tg" <<setw(5) << "|" <<setw(5) << "ctg"<< setw(5)<<"|" << endl;
    for (int i = 0; i <= 90.0; i += 15)
    {
        
        if (i != 90)
        {
            stopnie = (i * M_PI) / 180;
            cout <<setw(5)<< i << setw(5) << "|" << setw(5) << setprecision(3) << sin(stopnie) << setw(5) << "|" << setw(5) << cos(stopnie) << setw(5) << "|"<< setw(5) << tan(stopnie) << setw(5) << "|"<<setw(5) << 1 / tan(stopnie) << setw(5)<<"|" << endl;
        }
        else
        {
            stopnie = 1/2;
            cout << setw(5) << i << setw(5) << "|" << setw(5) << setprecision(3) << sin(stopnie) << setw(5) << "|" << setw(5) << cos(stopnie) << setw(5) << "|" << setw(5) << tan(stopnie) << setw(5) << "|" << setw(5) << 1 / tan(stopnie) << setw(5) << "|" << endl;
        }
        
    }
}
void zad34()
{

}

int sprawdz(int a, int b, int c)
{
    if (a* a + b * b == c * c || a * a + c * c = b * b || c * c + b * b = a * a)
    {
        return 1
    }
    else {
    return 0
    }
}

void zad34() {
    int a, b, c;
    cout << "podaj a, b i c"<<endl;
    cin >> a > b >> c;
    sprawdz(a,b,c)
}

int znajdzDzielnik(int liczba, liczba1)
{
    int dzielnik = 0;
    int mniejsza = 0;
    if (liczba1 > liczba)
    {
        mniejsza = liczba
    }
    else
    {
        mniejsza = liczba1
    }
    for (int i = 2; i < mniejsza; i++)
    {
        if (liczba % i == 0 && liczba1 %i ==0)
        {
            dzielnik = i;
        }
    }
    return dzielnik
}

void zad35()
{
    int a;
    cout << "Podaj liczbe dla której dzielnika bedziemy szukac: " << endl;
    cin >> a;
    znajdzDzielnik(a);
}

int main()
{
    //zad31();

   // zad32();
    //zad33();
    zad34();

    
}
