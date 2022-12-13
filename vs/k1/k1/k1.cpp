

#include <iostream>
#include <iomanip>
using namespace std;
#define n 20

double pierwiastek4(float a)
{
    return sqrt(sqrt(a));
}

void uzupelnij(double tab[n])
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = pierwiastek4(i+1);
    }
}

void wyswietl(double tab[n])
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << i + 1 << setw(10) << tab[i] << setw(10) << endl;
    }
}

void suma1(double& suma, double tab[n])
{
    for (int i = 0; i < n; i++)
    {
        suma += tab[i];
    }
}


int main()
{
    double tab[n] = {};
    uzupelnij(tab);
    wyswietl(tab);
    double *wskaznik;
    wskaznik = &tab[n - 1];
    cout << *wskaznik;
    double suma=0;
    suma1(suma, tab);
    cout << endl<<suma<<endl;

}


