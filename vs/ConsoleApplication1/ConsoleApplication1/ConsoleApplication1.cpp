#include <iostream>
#include <cmath>

using namespace std;
void zad21()
{
    int gwiazdki;
    cout << "podaj liczbe gwiazdek" << endl;
    cin >> gwiazdki;

    int index = 1; // zmienna potrzebna do ustalenia ilosci gwiazdek w danym wierszu
    int linie = 0;

    while (index <= gwiazdki)
    {
        index = index + linie;
        linie++;
    }

    int ilosc = 0;

    //trojkacik

    for (int i = 1; i < linie; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
            ilosc++;
            if (ilosc == gwiazdki)
            {
                break;
            }
        }
        cout << endl;
    }

    cout << endl;

    //odwrocony trojkacik

    for (int i = linie - 1; i > 0; i--)
    {
        if (i == linie - 1)
        {
            for (int k = 0; k < gwiazdki % (index - linie); k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
                ilosc++;
            }
            cout << endl;
        }

    }

    cout << endl;

    //trojkat 3


    int ilespacji = 0;
    for (int i = linie - 1; i > 0; i--)
    {
        int dlaWhile = 0;
        if (i != linie - 1)
        {
            for (int l = 0; l < ilespacji; l++)
            {
                cout << " ";
            }
        }

        if (i == linie - 1)
        {
            for (int k = 0; k < gwiazdki % (index - linie); k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
                ilosc++;
            }
            cout << endl;
        }
        ilespacji += 1;

    }
    cout << endl;

    //trojkat 4

    int pomoc = linie - 1;
    int ilosc1 = 0;
    for (int i = 1; i < linie; i++)
    {
        pomoc--;
        if (i != linie - 1)
        {
            for (int j = 0; j < pomoc; j++)
            {
                cout << " ";

            }
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
            ilosc1++;
            if (ilosc1 == gwiazdki)
            {
                break;
            }
        }
        cout << endl;
    }

    cout << endl;

    //trojkat 5

    int index2 = 1; // zmienna potrzebna do ustalenia ilosci gwiazdek w danym wierszu
    int linie2 = 0;
    bool skonczone = false;
    ilosc = 0;

    while (index2 <= gwiazdki)
    {
        if (linie2 == 0)
        {
            index2 = index2 + linie2;
        }
        else
        {
            index2 = index2 + linie2 * 2 + 1;
        }


        linie2++;
    }


    int pomoc2 = linie2 - 1;
    for (int i = 1; i < linie2 * 2; i += 2)
    {
        if (skonczone == false)
        {
            for (int k = pomoc2; k > 0; k--)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
                ilosc++;
                if (ilosc == gwiazdki)
                {
                    skonczone = true;
                    break;
                }
            }
            cout << endl;
            pomoc2--;
        }
        else
        {
            break;
        }
    }

    cout << endl;

    //trojkacik6

    ilosc = 0;
    ilespacji = 0;
    for (int i = linie2 * 2 - 1; i > 0; i = i - 2)
    {
        for (int l = 0; l < ilespacji; l++)
        {
            cout << " ";
        }
        if (i == linie2 * 2 - 1)
        {
            for (int k = 0; k < gwiazdki % (index2 - linie2 * 2 + 1); k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        ilespacji++;
    }

    cout << endl;

}

int main()
{

    zad21();

   
    return 0;
}
