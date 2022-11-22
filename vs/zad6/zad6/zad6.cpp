
#include <iostream>
using namespace std;

#define N 40

void losowanieTablicy(int tab[], int min, int max)
{
    
    for (int i = 0; i < N ; i++)
    {
        int a = rand() % (max - min+1) + min;
        tab[i] = a;
    }
}

void wypisz(int tab[])
{
    cout << " elementy tablicy: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << " " << tab[i] << " ";
    }
    cout << endl;
}

void sumaKwadratow(int tab[])
{
    int suma = 0;
    for (int i = 0; i < N; i++)
    {
        if (tab[i] % 2 == 1)
        {
            suma += tab[i] * tab[i];
        }
    }
    cout << "suma kwadratow elementow nie parzystych tej tablicy wynosi: " << suma << endl;
}

void znajdzMax(int tab[], int* ind, int& war)
{

    for (int i = 0; i < N; i++)
    {
        if (tab[i] >= war)
        {
            war = tab[i];
            *ind = i;
        }
    }
}

void odchSrd(int tab[])
{
    float srednia = 0;
    for (int i = 0; i < N; i++)
    {
        srednia += tab[i];
    }
    srednia /= N;

    float odchylenie = 0;
    for (int i = 0; i < N; i++)
    {
        odchylenie += sqrt((srednia - tab[i])*(srednia - tab[i]));
    }

    cout << "srednie odchylenie tej tablicy wynosi: " << odchylenie << endl;
}






int main()
{
    int Y[N];
    int X[N];
    int war = 0;
    int ind = 0;
    losowanieTablicy(X,8,20);
    losowanieTablicy(Y,8,20);
    cout << "tablica X" << endl;
    wypisz(X);
    cout << "tablica Y" << endl;
    wypisz(Y);
    sumaKwadratow(X);
    znajdzMax(Y,&ind, war);
    cout <<"index: " << ind << "wartosc: " << war;


}

