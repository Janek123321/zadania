#include <iostream>
using namespace std;

int wszystkieDzialania(int &liczba)
{
    int jednosci, dziesiatki, setki, tysiace, odwroconaLiczba;
    // ROZBICIE LICZBY POCZATKOWEJ NA CYFRY
    jednosci = liczba % 10;
    dziesiatki = ((liczba - jednosci) % 100) / 10;
    setki = ((liczba - ((dziesiatki) + jednosci)) / 100) % 10;
    tysiace = (((liczba - ((dziesiatki) + jednosci)) / 100) - setki) / 10;

    // SORTOWANIE
    int tablica[4]{jednosci, dziesiatki, setki, tysiace};
    int temp;
    for (int i = 0; i < 4 - 1; i++)
    {

        for (int j = 0; j < 4 - 1 - i; j++)
        {

            if (tablica[j] < tablica[j + 1])
            {
                temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }

    // WSTAWIENIE POSORTOWANYCH LICZB NA ODPOWIEDNIE MIEJSCE
    tysiace = tablica[0];
    setki = tablica[1];
    dziesiatki = tablica[2];
    jednosci = tablica[3];

    liczba = tysiace * 1000 + setki * 100 + dziesiatki * 10 + jednosci;

    // TWORZENIE ODWROCONEJ LICZBY
    odwroconaLiczba = jednosci * 1000 + dziesiatki * 100 + setki * 10 + tysiace;

    // ODEJMOWANIE LICZB
    liczba -= odwroconaLiczba;

    return liczba;
}

int main()
{
    // GENEROWANIE CZTEROCYFROWEJ LICZBY PSEUDOLOSOWEJ
    srand(time(NULL));
    int liczbaLosowa = rand() % 10000;
    int liczbaIteracji = 0;
    cout << "liczba poczatkowa: " << liczbaLosowa << endl;
    int kontrola;

    // PETLA WYKONUJACA FUNKCJE DO MOMEMNTU KIEDY LICZBA BEDZIE ROWNA 6174
    do
    {
        kontrola = wszystkieDzialania(liczbaLosowa);
        cout << kontrola << endl;
        liczbaIteracji++;
    } while (kontrola != 6174);

    cout << "liczba iteracji: " << liczbaIteracji << endl;

    return 0;
}