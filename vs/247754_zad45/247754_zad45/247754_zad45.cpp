
#include <iostream>
#include <string>
using namespace std;

void obliczanie(int a)
{   
    int potrzebne = a / 7; 
    if (a >6)
        obliczanie(potrzebne);
    int reszta = a % 7;
    cout << reszta;   
}



int main()
{
    obliczanie(48);

}


