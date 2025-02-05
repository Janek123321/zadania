#include <iostream>
using namespace std;

class Tablice
{
private:
    int liczbaElementowTab;
    int *tablica = new int[liczbaElementowTab];

public:
    Tablice(int liczbaElementowTabP)
    {
        liczbaElementowTab = liczbaElementowTabP;
        srand(time(NULL));
        for (int i = 0; i < liczbaElementowTab; i++)
        {
            tablica[i] = rand() % 1000 + 1;
        }
    }

    void wyswietlElementyTab()
    {
        for (int i = 0; i < liczbaElementowTab; i++)
        {
            cout << i << ": " << tablica[i] << endl;
        }
    }

    int znajdzArgument(int argumentP)
    {
        for (int i = 0; i < liczbaElementowTab; i++)
        {
            if (tablica[i] == argumentP)
            {
                cout << "index argumentu " << argumentP << ": "<<i;
                return i;
            }
        }
        return -1;
    }

    int nieParzyste()
    {
        int liczbaNieParzystych = 0;
        cout << "liczby nieparzyste: " << endl;
        for (int i = 0; i < liczbaElementowTab; i++)
        {
            if (tablica[i] % 2 != 0)
            {
                cout << tablica[i] << endl;
                liczbaNieParzystych++;
            }
        }
        cout << "Razem nieparzystych: ";
        return liczbaNieParzystych;
    }

    int sredniaArytmetyczna()
    {
        int sumaElementow = 0;
        cout << "srednia wszystkich elementow: ";
        for (int i = 0; i < liczbaElementowTab; i++)
        {
            sumaElementow += tablica[i];
        }
        return sumaElementow / liczbaElementowTab;
    }
};
int main()
{
    int rozmiarP, liczbaSzukana;
    cout << "Podaj rozmiar tablicy. Wartosc musi byc wieksza od 20: \n";
    cin >> rozmiarP;
    cout << "Podaj liczbe ktora chcesz znalezc: \n";
    cin >> liczbaSzukana;

    Tablice tablica1(rozmiarP);

    tablica1.wyswietlElementyTab();
    cout << tablica1.nieParzyste() << endl;
    cout << tablica1.sredniaArytmetyczna() << endl;
    tablica1.znajdzArgument(liczbaSzukana);

    return 0;
}
