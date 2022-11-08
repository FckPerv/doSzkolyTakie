

#include <iostream>
using namespace std;

void przelicz(int* wskG, int* wskM, bool MtoG)
{
    if (MtoG == true)
    {
        *wskG = *wskM - *wskM / 33 + 621;       
        cout << *wskM << "A.H to :" << *wskG<<"A.D"<< endl;
    }
    else
    {
        *wskM = *wskG - 621 + (*wskG - 621) / 32;
        cout << *wskG << "A.D to :" << *wskM <<"A.H" << endl;
    }
}

int main()
{
    int dataM = 170;
    int dataG = 1258;
    int ktory;
    bool MtoG;
    cout << "Chcesz przeliczyc z muzulmanskiego na gregorianski czy na odwrot: " << endl << "1. na gregorianski" << endl << "2. na odwrot" << endl;
    cin >> ktory;
    if (ktory == 1)
    {
        MtoG = true;
    }
    else if (ktory == 2)
    {
        MtoG = false;
    }
    przelicz(&dataG, &dataM, MtoG);
    

}

