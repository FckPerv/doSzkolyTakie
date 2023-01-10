
#include <iostream>
#include <fstream>

using namespace std;

int wlacz_bit(unsigned int i, int miejsce)
{
    int mask = 1;
    mask = mask << miejsce-1;
    return i | mask;

}

int wylacz_bit(unsigned int i, int miejsce)
{
    int mask = 0;
    mask = mask << miejsce - 1;
    return i & ~mask;

}

int zmien_bit(unsigned int i, int miejsce)
{
    int mask = 1;
    mask = mask << miejsce - 1;
    return i ^ mask;

}

int wlaczony_bit(unsigned int i, int miejsce)
{
    int mask = 1;
    if (i & (mask << miejsce - 1))
    {
        return 1;
    }
}

int zapakuj(char tak[4])
{
    int a = tak[0];
    for (int i = 1; i < 4; i++)
    {
        a = a << 8;
        a += tak[i];
    }

    return a;
}

void rozpakuj(int b ,char a[4])
{
    int c = b;
    for (int i = 0; i < 4; i++)
    {
        c = b;      
        c = c >> 8*(3-i);
        a[i] = c & 255;
        cout << a[i] << endl;
    }
    
}

void szyfrowanko(string nazwa, char klucz[5])
{
    ifstream pliczek(nazwa, ios::in) ;
    ofstream odp1("zaszyfrowane.txt", ios::out);
    char znaczek;
    int index = 0;
    if (pliczek.is_open())
    {
        while (pliczek.good())
        {
            pliczek.get(znaczek);
            char zaszyfrowane = znaczek ^ klucz[index % 5];
            odp1 << zaszyfrowane;          
        }
    }

}

void odszyfrowywanko(string nazwa, char klucz[5])
{
    ifstream pliczek(nazwa, ios::in);
    ofstream odp1("odszyfrowane.txt", ios::out);
    char znaczek;
    int index = 0;
    if (pliczek.is_open())
    {
        while (pliczek.good())
        {
            pliczek.get(znaczek);
            char zaszyfrowane = znaczek ^ klucz[index % 5];
            odp1 << zaszyfrowane;
        }
    }

}


int main()
{
    char a[4] = { 'a','b','c','d' };
    char b[4] = {};
    char c[5]= {};
   // cout << wlacz_bit(8, 3)<<endl;
    //cout << wlaczony_bit(8, 2)<<endl;
    rozpakuj(zapakuj(a), b);
    cout << "podaj klucz"<< endl;
    cin >> c;
    szyfrowanko("nowy.txt", c);
    odszyfrowywanko("zaszyfrowane.txt", c);

}

