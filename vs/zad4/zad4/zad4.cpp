

#include <iostream>
using namespace std;

int silniaIteracyjna(int n)
{
    int odp=1;
    for (int i = 1; i <= n; i++)
    {
        odp *= i;
    }
    return odp;
}

int silniaRekurenkcyjna(int n)
{
    int odp = n;
    if (n > 1)
    {
        odp *= silniaRekurenkcyjna(n - 1);
    }
    return odp;
    
    
    
}
int main()
{
    cout << silniaIteracyjna(1)<< endl;
    cout << silniaRekurenkcyjna(5) << endl;
}

