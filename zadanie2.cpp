#include <iostream>
using namespace std;

struct dane
{
    int wiek;
    int nrButa;
};
void wypelnienieTab(dane tablicaDoWypelnienia[], int liczbaOsob)
{
    for (int i = 0; i < liczbaOsob; i++)
    {
        srand((i + 2) * time(NULL));
        tablicaDoWypelnienia[i].wiek = rand() % 11;
        tablicaDoWypelnienia[i].nrButa = rand() % 11;
    }
}

void wypiszOsoby(dane tablicaWypelniona[], int liczbaOsob)
{
    for (int i = 0; i < liczbaOsob; i++)
    {
        cout << tablicaWypelniona[i].wiek << " " << tablicaWypelniona[i].nrButa << endl;
    }
}

void wypiszWieksze(dane tablicaDoSprawdzenia[], int liczbaOsob)
{
    int j = 0;
    for (int i = 0; i < liczbaOsob; i++)
    {
        if (tablicaDoSprawdzenia[i].nrButa > 6)
        {
            cout << tablicaDoSprawdzenia[i].wiek << " " << tablicaDoSprawdzenia[i].nrButa << endl;
            j++;
        }
    }
    if (j == 0)
    {
        cout << "nie ma osoby z numerem buta powyzej 6";
    }
}

int main()
{

    int iloscOsob = 0;
    cout << "Podaj ilosc osob do wygenerowania: \n";
    cin >> iloscOsob;

    dane *tab = new dane[iloscOsob];
    //wypelnienieTab(tab[iloscOsob], iloscOsob);
    // for (int i = 0; i < iloscOsob; i++)
    // {
    //     srand((i + 2) * time(NULL));
    //     tab[i].wiek = rand() % 11;
    //     tab[i].nrButa = rand() % 11;
    // }

    cout << "Wygenerowane osoby: \n";
    // for (int i = 0; i < iloscOsob; i++)
    // {
    //     cout << tab[i].wiek << " " << tab[i].nrButa << endl;
    // }

    cout << "osoby z nr buta > 6: \n";
    // int j = 0;
    // for (int i = 0; i < iloscOsob; i++)
    // {
    //     if (tab[i].nrButa > 6)
    //     {
    //         cout << tab[i].wiek << " " << tab[i].nrButa << endl;
    //         j++;
    //     }
    // }
    // if (j == 0)
    // {
    //     cout << "nie ma osoby z numerem buta powyzej 6";
    // }

    return 0;
}