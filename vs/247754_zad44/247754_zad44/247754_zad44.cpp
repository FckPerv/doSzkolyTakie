

#include <iostream>
using namespace std;

void przelicz(int* wskG, int* wskM, bool MtoG)
{
    if (MtoG == true)
    {
        *wskG = *wskM - *wskM / 33 + 621;       
    }
    else
    {
        *wskM = *wskG - 621 + (*wskG - 621) / 32;
        
    }
}

int main()
{
    int dataM = 170;
    int dataG = 1000;
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
    cout << dataG << "A.D to :" << dataM << "A.H" << endl;

}

