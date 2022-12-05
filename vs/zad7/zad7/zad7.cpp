

#include <iostream>
#define N 10
using namespace std;

void przekatna(int tab[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++)
        {

            int random = rand() % 10;
            tab[i][j] = random;
        }
    }
}

void wyswietl(int array[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; i++)
        {
            cout << " "<< array[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int tab[N][N] = {0};
    przekatna(tab);
    wyswietl(tab);
}


