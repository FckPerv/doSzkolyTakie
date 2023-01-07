
#include <iostream>

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


int main()
{
    char a[4] = { 'a','b','c','d' };
    char b[4] = {};
   // cout << wlacz_bit(8, 3)<<endl;
    //cout << wlaczony_bit(8, 2)<<endl;
    rozpakuj(zapakuj(a), b);

}

