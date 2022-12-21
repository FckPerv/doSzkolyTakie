
#include <iostream>
#include<fstream>
#include <string>
using namespace std;

struct pisarz
{
    int rok_urodzenia;
    char nazwisko[20];
};

struct ksiazka {
    char tytul[20];
    int rok_wydania;
    char rodzaj[20];
    pisarz* autor;
};

void getPisarz(pisarz p)
{
    cout << p.nazwisko << ", urodzony/a w " << p.rok_urodzenia << " roku" << endl;

}

void getKsiazka(ksiazka k)
{
    cout << "tytul: " << k.tytul << " - rok wydania " << k.rok_wydania << " autor: ";
    getPisarz(*k.autor);
    cout<< endl;
}

void wyswietl(ksiazka k[10])
{
    for (int i = 0; i < 10; i++)
    {
        getKsiazka(k[i]);
    }
}

void zapisz(ksiazka k[10])
{
    ofstream MyFile("alfabetycznie.txt");
    for (int i = 0; i < 10; i++)
    {
            MyFile << "tytul: " << k[i].tytul << " - rok wydania " << k[i].rok_wydania << "nazwisko autora: "<< k[i].autor->nazwisko<< " dara urodzenia autora: "<< k[i].autor->rok_urodzenia << endl;
    }
    MyFile.close();
}

void znajdzKsiazki(char nazwisko[20], ksiazka k[])
{
    string s = nazwisko;
    ofstream MyFile("ksiazki" + s + ".txt");
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(k[i].autor->nazwisko,nazwisko )==0)
        {
            
            MyFile << "tytul: " << k[i].tytul << " - rok wydania " << k[i].rok_wydania<<endl;
            getKsiazka(k[i]);
            
        }
    }
    MyFile.close();
}

void znajdzGatunek(char gatunek[20], ksiazka k[])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(k[i].rodzaj, gatunek) == 0)
        {
            getKsiazka(k[i]);
        }
    }
}

void sortuj(ksiazka k[10])
{
    int min = 0;
    ksiazka buf;
    for (int i = 0; i < 10; i++)
    {
        min = i;
        for (int j = i; j < 10; j++)
        {
            if ((int)k[j].autor->nazwisko[0] < (int)k[min].autor->nazwisko[0])
            {
                min = j;
            }
        }
        buf = k[i];
        k[i] = k[min];
        k[min] = buf;
    }
    wyswietl(k);
}

void uzupelnijTablice(ksiazka ksiazki[10], pisarz pisarze[10])
{
    int ktora = 1;
    int index = 0;
    char pomoc[20];
    string nazwa = "ksiazki.txt";
    ifstream pliczek(nazwa);
    while (pliczek.getline(pomoc, 20)) {
        if (index < 10)
        {
            if (ktora % 5 == 1)
            {
                strcpy_s(ksiazki[index].tytul, pomoc);
            }
            if (ktora % 5 == 2)
            {
                int pomoc1 = stoi(pomoc);
                ksiazki[index].rok_wydania = pomoc1;
            }
            if (ktora % 5 == 3)
            {
                strcpy_s(ksiazki[index].rodzaj, pomoc);
            }
            if (ktora % 5 == 4)
            {
                strcpy_s(pisarze[index].nazwisko, pomoc);
            }
            if (ktora % 5 == 0)
            {
                int pomoc1 = stoi(pomoc);
                pisarze[index].rok_urodzenia = pomoc1;
                ksiazki[index].autor = &pisarze[index];
                index++;
            }
        }
        ktora++;
    }
    pliczek.close();
}

int main()
{
    int wybor=0;
    ksiazka ksiazki[10] = {};
    pisarz pisarze[10] = {};
    uzupelnijTablice(ksiazki, pisarze);
    while (wybor != 5)
    {
        cout << "co chcesz zrobis: " << endl << "1. wyswietl tablice" << endl << "2.Posortuj ja alfabetycznie, zapisz i wyswietl" << endl << "3. znajdz ksiazki wybranego autora i zapisz je w oddzielnym pliku" << endl << "4. wyswietl ksiazki w danym gatunku" <<endl<< "5. wyjdz" << endl;
        cin >> wybor;
        switch (wybor)
        {
        case 1:
            wyswietl(ksiazki);
            break;
        case 2:
            sortuj(ksiazki);
            zapisz(ksiazki);
            break;
        case 3:
            char szukaneNazwisko[20];
            cout << "podaj nazwisko autora ksiazek, ktorego szukasz" << endl;
            cin >> szukaneNazwisko;
            znajdzKsiazki(szukaneNazwisko, ksiazki);
            break;
        case 4:
            char szukanyGatunek[20];
            cout << "podaj gatunek, z ktorego ksiazek szukasz" << endl;
            cin >> szukanyGatunek;
            znajdzGatunek(szukanyGatunek, ksiazki);
            break;
        default:
            break;
        }
    }
    
  
    
}

