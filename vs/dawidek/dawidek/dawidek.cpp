

#include <iostream>
#include<iomanip>

#define N 4
#define M 5
using namespace std;

void wyswietl(int tab[N][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(4) << tab[i][j] << setw(4);
        }
        cout << endl;
    }
}
void uzupelnij(int tab[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int nwm = rand() % 5+1;
            tab[i][j] = nwm;
        }
    }
}
int* zsumujWiersze(int tab[M][N])
{
    static int tab1[M] = {};
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tab1[i] += tab[i][j];
        }
    }
    for (int i = 0; i < M; i++)
        cout << tab1[i]<<" ";

    return tab1;
}
int main()
{
    int tab[M][N] = {};
    int tab2[M];
    uzupelnij(tab);
    wyswietl(tab);
    zsumujWiersze(tab);

}


