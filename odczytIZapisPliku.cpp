#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
        int nrButa;
    };

    osoba persona;

    cout << "Podaj imie \n";
    cin >> persona.imie;
    cout << "Podaj nazwisko \n";
    cin >> persona.nazwisko;
    cout << "Podaj wiek \n";
    cin >> persona.wiek;
    cout << "Podaj numer buta \n";
    cin >> persona.nrButa;

    osoba baza[100];
    for (int i = 0; i < 10; i++)
    {
        baza[i].imie = persona.imie;
        baza[i].nazwisko = persona.nazwisko;
        baza[i].wiek = persona.wiek;
        baza[i].nrButa = persona.nrButa;
    }

    cout << baza[0].imie << " " << baza[0].nazwisko << " " << baza[0].wiek << " " << baza[0].nrButa;

    return 0;
}