

#include <iostream>
using namespace std;

void zerowanier(int n, int &m) {
    cout << " wartosci a i b przed zerowaniem z referecja: " << n << " " << m << endl;
    n = 0;
    m = 0;
    cout << " wartosci a i b po zerowaniem z referecja, wewnatrz funkcji: " << n << " " << m << endl;
}

void zerowanien(int n, int m)
{
    cout << " wartosci a i b przed zerowaniem: " << n << " " << m << endl;
    n = 0;
    m = 0;
    cout << " wartosci a i b po zerowaniem bez referencji, wewnatrz funkcji: " << n << " " << m << endl;
}

int main()
{
    int m, n;
    cout << "podaj cyfry ktore chcesz wyzerowac " << endl;
    cin >> m >> n;
    zerowanien(m, n);
    cout << "po zerowaniu bez referencji zewnatrz funkcji: " << endl << " cyfra 1: " << m << endl << " cyfra2:" << n << endl;
    zerowanier(m, n);
    cout << "po zerowaniu z referencja zewnatrz funkcji: " << endl << " cyfra 1: " << m << endl << " cyfra2:" << n << endl;
}


