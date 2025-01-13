// pobieramy od uzytkownika imei i nazwisko do jednego cstringa do drugiego pobieramy drugie imie przy pomocy funkcji z
// biblioteki cstring oraz tablic znakow utworz string ktory bedzie mial format pierwsze imie drugie imie nazwisko
#include <iostream>

using namespace std;

int main()
{
    char imieNazwisko[30];
    char drugieImie[30];
    char napis[30];
    cout << "Podaj imie i nazwisko: \n";
    cin.getline(imieNazwisko, 30);
    cout << "Podaj drugie imie: \n";
    cin.getline(drugieImie, 30);
    for (int i = 0; imieNazwisko[i] != ' '; i++)
    {
        napis[i] = imieNazwisko[i];
    }
    strcat(napis, " ");
    strcat(napis, drugieImie);

    char *napis3 = strchr(imieNazwisko, ' ');
    strcat(napis, napis3);
    cout << napis << endl;
    return 0;
}
