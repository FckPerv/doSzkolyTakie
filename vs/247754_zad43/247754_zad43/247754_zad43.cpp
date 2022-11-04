

#include <iostream>
using namespace std;


void losowanko(int &a, int &b)
{
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    cout << "wyrzuciles: " << a << " oczek oraz " << b << " oczek ich suma wynosi" << a + b << endl ;
}

void wygrana(int &pieniazki)
{
    pieniazki += 30;
    cout << "Gratujalcje wygrales! twoj stan konta wynosi: " << pieniazki << "grasz dalej? " << endl << "1. Tak  " << endl << "0. Nie" << endl;
}

void przegrana(int &pieniazki)
{
    pieniazki -= 20;
    cout << "Ojć przegrałes, twoj stan konta wynosi: " << pieniazki << "grasz dalej? " << endl << "1. Tak  " << endl << "0. Nie" << endl;
}

void kontynuj(int c)
{
    int nvm;
    cout << "aby wygrac musisz rzucic " << c << " oczek " << endl << "nasisnij wpisz 1 aby kontynuowac"<<endl;
    cin >> nvm;
    
   
}


int sprawdzanko(int a, int b, int c)
{
    if (c != 0)
    {
        if (a + b == 7)
        {
            return 0;
        }
        else if (a + b == c)
        {
            return 1;
        }
    }
    else
    {
        if (a + b == 11 || a + b == 7)
        {
            return 1;
        }
        else if (a + b == 2 || a + b == 3 || a + b == 12)
        {
            return 0;
        }
        else if (a + b > 1)
        {
            return 2;
        }
    }
    
}

void zad43gra()
{
    int pieniazki = 100;
    int wybor=1;
    int c=0;
    int kosc1;
    int kosc2;
    int suma;
    
    while (wybor == 1)
    {
        c = 0;
        cout << "twoj stan konta to: " << pieniazki << "naciśnij: "<< endl;
        cout << "1. aby kontynuować" << endl << "0. aby wyjsć" << endl;
        cin >> wybor;
        if (wybor == 0)
        {
            break;
        }
        losowanko(kosc1, kosc2);
        suma = 0;
        if (sprawdzanko(kosc1, kosc2, c) == 0)
        {
            przegrana(pieniazki);
        }
        else if (sprawdzanko(kosc1,kosc2, c) == 1)
        {
            wygrana(pieniazki);
        }
        else
        {
            int ifWin = 0;
            suma = kosc1 + kosc2;
            while (ifWin == 0)
            {
                kontynuj(suma);
                losowanko(kosc1, kosc2);
                if (sprawdzanko(kosc1, kosc2, suma) == 1)
                {
                    wygrana(pieniazki);
                    ifWin = 1;
                }
                else if (sprawdzanko(kosc1, kosc2, suma) == 0)
                {
                    przegrana(pieniazki);
                    ifWin = 0;
                }
            }
            
        }

        cin >> wybor;
        


        
    }

}

void zad43symulator()
{
    int kostka1;
    int kostka2;
    int suma;
    int pieniadze = 100;
    int waruneczek = 0;
    for (int i = 0; i < 10; i++)
    {
        waruneczek = 0;
        kostka1 = rand() % 6 + 1;
        kostka2 = rand() % 6 + 1;
        suma = kostka1 + kostka2;
        if (suma == 7 || suma == 11)
        {
            pieniadze += 30;
            cout << suma << " wygrana" << pieniadze << endl;
            continue;
        }
        else if (suma  == 2 || suma ==3 || suma ==12)
        {
            pieniadze -= 20;
            cout << suma << " " << pieniadze << "przegrana" << endl;
            continue;
        }
        else if (suma > 3)
        {
            while (waruneczek == 0)
            {
                kostka1 = rand() % 6 + 1;
                kostka2 = rand() % 6 + 1;
                if (kostka1 + kostka2 == suma)
                {
                    pieniadze += 30;
                    cout << suma <<" "<< kostka1 << " "<< kostka2 << " wygrana " << pieniadze << endl;
                    waruneczek = 1;

                }
                if (kostka1 + kostka2 == 7)
                {
                    pieniadze -= 20;
                    cout << suma<< " " << pieniadze << "  przegrana " << kostka1<< " " << kostka2 << endl;
                    waruneczek = 1;
                }
            }
        }

    }
    cout << pieniadze << "koniec";
}

int main()
{
    srand(time(NULL));
    //zad43gra();
    zad43symulator();
    
}


