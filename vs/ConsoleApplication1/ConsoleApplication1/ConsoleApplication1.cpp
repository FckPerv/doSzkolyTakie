// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

using namespace std;
#include <iostream>

int pomnoz(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "podaj cyfry ktore chcesz pomnozyc :" << endl;
    cin>> a >> b  ;
    cout << "wynik mnozenia to: "<< pomnoz(a, b);
}



