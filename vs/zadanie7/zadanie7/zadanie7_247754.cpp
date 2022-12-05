#include <iostream>
#include <iomanip>
#define N 10
using namespace std;

void przekatna(int tab[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++)
        {
            tab[i][j] = rand() % 20 +1;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++)
        {
            tab[j][i] = tab[i][j];
        }
    }
    
}
void wyswietl(int tab[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(4) << tab[i][j] << setw(4);
        }
        cout << endl;
    }
}
void zwrocNajw(int tab[N][N])
{
    int suma=0;
    int max = 0;
    int wynik[N][N] = {};
    int c = 0;
    int index;
    for (int i = 0; i < N; i++)
    {
        suma = 0;
        for (int j = 0; j < N; j++)
        {
            suma += tab[i][j];
        }
        if (suma > max)
        {
            max = suma;
        }
    }
    for (int i = 0; i < N; i++)
    {
        suma = 0;
        for (int j = 0; j < N; j++)
        {
            suma += tab[i][j];
        }
        if (suma == max)
        {
            for (int j = 0; j < N; j++)
            {
                wynik[c][j] = tab[i][j];
            }
            c++;
        }
    }
    wyswietl(wynik);
}

void posortujKolumny(int tab[N][N]) {

    int sposob;
    int buf;
    cout << "w jaki sposob to sortowac" << endl << "1. rosnaco" << endl << "2.malejaco" << endl;
    cin >> sposob;
    
    for (int z = 0; z < N; z++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 1; j < N; j++)
            {
                if (sposob == 1)
                {
                    if (tab[j - 1][z] > tab[j][z])
                    {
                        buf = tab[j - 1][z];
                        tab[j - 1][z] = tab[j][z];
                        tab[j][z] = buf;
                    }
                }
                else
                {
                    if (tab[j-1][z] < tab[j][z])
                    {
                        buf = tab[j - 1][z];
                        tab[j - 1][z] = tab[j][z];
                        tab[j][z] = buf;
                    }
                }
            }
        }
    }
        
        wyswietl(tab);
    
}

void transarowanko(int tab[N][N])
{
    int wynik[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            wynik[i][j] = tab[j][i];
        }
    }
    wyswietl(wynik);

}

bool sprawdz(int tab[N][N])
{
    int z = 0;
    for(int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (tab[i][j] != tab[j][i])
            {
                z++;
            }
        }
    }
    if (z == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    srand(time(NULL));
    int tab[N][N] = { 0 };
    przekatna(tab); 
    wyswietl(tab);
    cout << endl;
    cout << sprawdz(tab)<<endl;
    cout << endl<<endl;
    zwrocNajw(tab);
    cout << endl << endl;
    wyswietl(tab);
    cout << endl;
    posortujKolumny(tab);
    cout << endl;
    transarowanko(tab);
    cout << endl;
    cout << sprawdz(tab);
}
