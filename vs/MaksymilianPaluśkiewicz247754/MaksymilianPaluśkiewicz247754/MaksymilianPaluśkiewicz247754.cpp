
//Maksymilian Paluśkiewicz 247754
#include <iostream>
#include <iomanip>
#define n 30
using namespace std;

double sinus(double x)
{
    return 20*sin(x / 3) + 22;
}

void wyswietl(double tab[n])
{
    cout << "zawartosc tablicy: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] >= 10)
        {
            cout << setprecision(4) << tab[i] << setw(7);
        }
        else
        {
            cout << setprecision(3) << tab[i] << setw(7);
        }
        
    }
    cout << endl;
}

void srednia(double tab[n], double* wynik)
{
    double srednia = 0;
    for (int i = 0; i < n; i++)
    {
        srednia += tab[i];
    }
    srednia = srednia / n;
    *wynik = srednia;
}

void rysuj(double tab[n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < floor(tab[i]); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    double tab[n];
    double odp5 = 0;
    for (int i = 0; i < n; i++)
    {
        tab[i] = sinus(i);
    }
    wyswietl(tab);
    srednia(tab, &odp5);
    cout << "srednia tablicy: " << odp5 << endl;
    rysuj(tab);

}


