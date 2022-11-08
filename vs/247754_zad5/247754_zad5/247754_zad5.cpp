#include <iostream>
using namespace std;


void zad5()
{
    int rate;
    int rates[100];
    int srednia=0;
    for (int i = 0; i < 100; i++)
    {
        rate = rand() % 11;
        rates[i] = rate;
    }
   // cout << "oceny: ";


    for (int i = 0; i < 100; i++)
    {
        cout << " " << rates[i] << " ";
        srednia += rates[i];
    }

    cout << endl;
    cout << "srednia: " << srednia/100  << endl;
    cout << endl;

    int najmniejsza;
    int pomocnicza;
    for (int i = 0; i < 100; i++) {
        najmniejsza = i;
        for (int j = i ; j < 100; j++) {
            if (rates[j] < rates[najmniejsza])
            {
                najmniejsza = j;
            }
        }
        pomocnicza = rates[i];
        rates[i] = rates[najmniejsza];
        rates[najmniejsza] = pomocnicza;
    }
    cout << "mediana: " << (rates[49] + rates[50]) / 2<<endl;

    int staty[11];

    for (int i = 0; i < 11; i++)
    {
        staty[i] = 0;
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (rates[i] == j)
            {
                staty[j] = staty[j]++;
            }
        }
    }
    for (int i = 0; i < 11; i++)
    {
        cout << staty[i] << " ";
    }

}

int main()
{
    srand(time(NULL));
    zad5();
}

