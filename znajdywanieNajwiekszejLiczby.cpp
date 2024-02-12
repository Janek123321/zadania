#include <iostream>
using namespace std;
void najwiekszyElementTablicy(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {

        for (int j = 0; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[j] > tablicaPrzeszukiwana[j + 1])
            {
                tablicaPrzeszukiwana[j + 1] = tablicaPrzeszukiwana[j];
            }
        }
    }
}
void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 2) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 11;
    }
}
void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}
int main()
{
    int tablicaTestowa[10];
    wypelnij(tablicaTestowa, 10);
    wypisz(tablicaTestowa, 10);
    cout << endl;
    najwiekszyElementTablicy(tablicaTestowa, 10);
    cout << "najwiekszy element tablicy to: " << tablicaTestowa[10];
    return 0;
}