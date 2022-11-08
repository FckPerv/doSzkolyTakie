

#include <iostream>
using namespace std;

int silniarek(int n)
{
    if (n > 0)
    {
        return n * silniarek(n - 1);
    }
    
    
}

int siliniaite(int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        n = n * i;
    }
    return n;
}

int newton(int n, int k)
{
    return (silniarek(n) / (silniarek(k) * silniarek(n - k)));
}

void pascal(int k)
{
    for (int i = 0; i < k; i++) {
        for (int j = 0; j <= i; j++)
        {
            cout <<" " << newton(i, j)<<" ";
        }
        cout << endl;
    }
}

int main()
{
    pascal(7);
}


