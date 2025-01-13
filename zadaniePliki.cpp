// struktura imie i wiek; funkcja dodaje do pliku dane od uzytkownika (liczba rekordow, wartosci), funkcja wyswietlajaca wszystkie rekordy, funkcja wypisuje wszystkie rekordy ktore zawieraja podane imie lub podany wiek
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct osoba
{
    string imie;
    int wiek;
};

void wpisz(vector<osoba> &wektor)
{

    fstream plik;
    plik.open("baza2.txt", ios::out | ios::app | ios::in);

    if (plik.good() == true)
    {

        for (int i = 0; i < wektor.size(); i++)
        {
            cout << "podaj imie \n";
            cin >> wektor[i].imie;
            cout << "podaj wiek\n";
            cin >> wektor[i].wiek;
            plik << wektor[i].imie << " " << wektor[i].wiek << endl;
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie";
    }
}

// void wczytaj(vector<osoba> &wektor)
// {
//     int i = 0;
//     fstream plik;
//     plik.open("baza2.txt", ios::in);

//     if (plik.good())
//     {
//         while (!plik.eof())
//         {
//             plik >> wektor[i].imie >> wektor[i].wiek;
//             i++;
//         }
//     }
//     else
//     {
//         cout << "Blad";
//     }
// }
void wypisz(vector<osoba> &wektor)
{
    for (int i = 0; i < wektor.size(); i++)
    {
        fstream plik;
        plik.open("baza2.txt", ios::in);
        plik << "Imie:" << wektor[i].imie << endl;
        plik << "Wiek:" << wektor[i].wiek << endl;
    }
}

// void wypiszPoDanych(vector<osoba> &wektor){

//   for (int i = 0; i < dlugosc; i++)
//   {
//     if (osoby[i].id == id)
//     {
//       return i;
//     }
//   }

// }

int main()
{
    char coZrobic;
    vector<osoba> wektor;
    cout << "co chcesz zrobic jesli dodac nacisnij d, jesli wyswietlic wszystkie rekordy nacisnij w, jesli przeszukac nacisnij p: \n";
    cin >> coZrobic;
    if (coZrobic == 'd')
    {
        int ileOsob;
        cout << "podaj ile osob chcesz dodac: \n";
        cin >> ileOsob;

        wektor.resize(ileOsob);
        wpisz(wektor);
    }

    else if (coZrobic == 'w')
    {
        wczytaj(wektor);
        wypisz(wektor);
    }

    return 0;
}