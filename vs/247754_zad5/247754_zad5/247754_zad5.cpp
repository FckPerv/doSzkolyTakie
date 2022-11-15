#include <iostream>
using namespace std;

int maxy(int tab[])
{
    int max = 0;
    for (int i = 0; i < 11; i++)
    {
        if (tab[i] > tab[max])
        {
            max = i;
        }
    }
    return max;
}
void diagram(int tab[], int max)
{
    for (int i = tab[max]; i > 0; i--)
    {
        if(i>=10)
            cout << i << " ";
        else
            cout << i << "  ";

        for (int j = 0; j < 11; j++)
        {
            if (tab[j] >= i)
            {
                cout << "|"<<" ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int* ileOsob(int tab[], int staty[], int l)
{
    for (int i = 0; i < 11; i++)
    {
        staty[i] = 0;
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (tab[i] == j)
            {
                staty[j] = staty[j]++;
            }
        }
    }
    for (int k = 0; k < 11; k++)
    {
        cout << "ocene: " << k << "przyznalo: " << staty[k] << "osob"<<endl;
    }
    cout << endl;
    return staty;
}

void wylosujTablice(int tab[], int l)
{
    int rate;
    for (int i = 0; i < l; i++) {
        rate = rand() % 11;
        tab[i] = rate;
    }

}

float obliczSrednia(int tab[], int l)
{
    float srednia = 0;
    for (int i = 0; i < l; i++)
    {
        srednia += tab[i];
    }
    srednia = srednia / l;
    
    return srednia;
}

void posortuj(int tab[], int l)
{
    int najmniejsza;
    int pomocnicza;
    for (int i = 0; i < l; i++) {
        najmniejsza = i;
        for (int j = i; j < l; j++) {
            if (tab[j] < tab[najmniejsza])
            {
                najmniejsza = j;
            }
        }
        pomocnicza = tab[i];
        tab[i] = tab[najmniejsza];
        tab[najmniejsza] = pomocnicza;
    }
}

float obliczMediane(int tab[],int l)
{
    return (tab[((l+1)/2)-1] + tab[(l + 1) / 2]) / 2;
}

void wyswietlTablice(int tab[], int l)
{
    for (int i = 0; i < l; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void zad5()
{
    static const int l = 100;
    static const int l1 = 11;
    int rate;
    int rates[l];
    int staty[l1];
    int srednia=0;
    wylosujTablice(rates, l);
    posortuj(rates, l);
    wyswietlTablice(rates, l);
    cout << "srednia ocen to: " << obliczSrednia(rates, l) << endl;
    cout << "mediana: " << obliczMediane(rates,l) << endl;
    cout << endl;
    diagram(ileOsob(rates, staty, l), maxy(staty));
    cout << "najwiecej osob przyznalo ocene: " << maxy(staty) << endl << endl;
    cout << "   0 1 2 3 4 5 6 7 8 9 10";

}

int main()
{
    srand(time(NULL));
    zad5();
}

