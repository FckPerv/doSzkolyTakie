

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;


struct osoba
{
    char imie[10];
    char nazwisko[20];
    int wiek;
    
};

struct pies
{
    char imie[10];
    int wiek;
    double masa;
};

struct pisarz
{
    int rok_urodzenia;
    char imie[12];
    char nazwisko[20];

};

struct ksiazka
{
    char tytul[20];
    int rok_wydania;
    pisarz* autor;
};


pies set1()
{
    pies s;
    cout << "podaj imie, wiek, oraz wage psa" << endl;
    cin >> s.imie >> s.wiek>> s.masa;
    return s;
}

pies set2(char nazwa[10], int wiek, double masa)
{
    pies nowy;
    strcpy_s(nowy.imie, nazwa);
    nowy.wiek = wiek;
    nowy.masa = masa;
    return nowy;
}

void get1(pies p)
{
    cout << "imie psa to: " << p.imie << " wiek: " << p.wiek << " masa: " << p.masa << endl;
}
int main()
{
    osoba ewa;
        /*
    cout << "podaj dane osobowe owoby w kolejnosci: " << endl << "imie"<<endl;
    cin >> ewa.imie;
    cout << "nazwisko: " << endl;
    cin >> ewa.nazwisko;
    cout << "wiek: " << endl;
    cin >> ewa.wiek;
    cout << "imie: " << ewa.imie<<" nazwisko: "<< ewa.nazwisko << " wiek: "<<ewa.wiek;
    franek = set1();
    */
    char imie[10];
    int wiek;
    double masa;



    pies pieski[3];
    pieski[0] = set1();
    cout << "podaj imie, wiek oraz mase psa1" << endl;
    cin >> imie >> wiek >> masa;
    pieski[1] = set2(imie, wiek, masa);
    cout << "podaj imie, wiek oraz mase psa2" << endl;
    cin >> imie >> wiek >> masa;
    pieski[2] = set2(imie, wiek, masa);
    get1(pieski[0]);
    get1(pieski[1]);
    get1(pieski[2]);
    ofstream HighScoreFile;
    HighScoreFile.open("highscores.txt");
    for (int i = 0; i < 3; i++)
    {
        HighScoreFile << pieski[i].imie << "\n";
    }
    HighScoreFile.close();

    pisarz autorzy[3];
    strcpy_s(autorzy[0].imie, "franek");
    strcpy_s(autorzy[0].nazwisko, "adfdsfa");
    autorzy[0].rok_urodzenia = 1922;
    strcpy_s(autorzy[1].imie, "krzysiek");
    strcpy_s(autorzy[1].nazwisko, "fgdgdfg");
    autorzy[0].rok_urodzenia = 1933;
    strcpy_s(autorzy[2].imie, "cyprian");
    strcpy_s(autorzy[2].nazwisko, "bvcxdf");
    autorzy[0].rok_urodzenia = 1944;

    ksiazka ksiazki[4];
    strcpy_s(ksiazki[0].tytul, "tak");
    strcpy_s(ksiazki[1].tytul, "nie");
    strcpy_s(ksiazki[1].tytul, "moze");
    strcpy_s(ksiazki[1].tytul, "pewnie");
    ksiazki[0].rok_wydania = 1922;
    ksiazki[1].rok_wydania = 1933;
    ksiazki[2].rok_wydania = 1944;
    ksiazki[3].rok_wydania = 1955;
    ksiazki[0].autor = &autorzy[0];
    ksiazki[1].autor = &autorzy[1];
    ksiazki[2].autor = &autorzy[2];
    ksiazki[3].autor = &autorzy[2];




}


