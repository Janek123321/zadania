#include <iostream>
#include <vector>
using namespace std;

void wypelnijStatyczna(int tablicaStatyczna[], int wielkosc)
{
    for (int i = 0; i < wielkosc; i++)
    {
        srand((i + 2) * time(NULL));
        tablicaStatyczna[i] = rand() % 11;
    }

    for (int i = 0; i < wielkosc; i++)
    {
        cout << "tablica statyczna[" << i << "] = " << tablicaStatyczna[i] << endl;
    }
}

void wypiszStatyczna(int tablicaStatyczna[], int wielkosc)
{
    int najwieksza = 0;
    for (int i = 0; i < wielkosc; i++)
    {
        if (tablicaStatyczna[i] > najwieksza)
        {
            najwieksza = tablicaStatyczna[i];
        }
    }
    cout << "najwieksza wartosc w tablicy to: " << najwieksza << endl;

    int najmniejsza = 10;
    for (int i = 0; i < wielkosc; i++)
    {
        if (tablicaStatyczna[i] < najmniejsza)
        {
            najmniejsza = tablicaStatyczna[i];
        }
    }
    cout << "najmniejsza wartosc w tablicy to: " << najmniejsza << endl;
}

void wypelnijDynamiczna(int *tablicaDynamiczna, int wielkosc)
{

    for (int i = 0; i < wielkosc; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDynamiczna[i] = rand() % 11;
    }

    for (int i = 0; i < wielkosc; i++)
    {
        cout << "tablica dynamiczna[" << i << "] = " << tablicaDynamiczna[i] << endl;
    }
}

void wypiszDynamiczna(int *tablicaDynamiczna, int wielkosc)

{
    int najwieksza = 0;
    for (int i = 0; i < wielkosc; i++)
    {
        if (tablicaDynamiczna[i] > najwieksza)
        {
            najwieksza = tablicaDynamiczna[i];
        }
    }
    cout << "najwieksza wartosc w tablicy to: " << najwieksza << endl;

    int najmniejsza = 10;
    for (int i = 0; i < wielkosc; i++)
    {
        if (tablicaDynamiczna[i] < najmniejsza)
        {
            najmniejsza = tablicaDynamiczna[i];
        }
    }
    cout << "najmniejsza wartosc w tablicy to: " << najmniejsza << endl;
}

void wypelnijWektor(vector<int> &wektor, int wielkosc)
{
    for (int i = 0; i < wielkosc; i++)
    {
        srand((i + 9) * time(NULL));
        wektor.insert(wektor.begin(), rand() % 11);
    }

    for (int i = 0; i < wielkosc; i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }
}

// void wypiszWektor(vector<int> wektor, int wielkosc)
// {
//     int najwieksza = wektor[0];

//     for (int i = 0; i < wielkosc; i++)
//     {
//         if (wektor[i] > najwieksza)
//         {
//             najwieksza = wektor[i];
//         }
//     }
//     cout << "najwieksza wartosc w tablicy to: " << najwieksza << endl;

//     int najmniejsza = 10;
//     for (int i = 0; i < wielkosc; i++)
//     {
//         if (wektor[i] < najmniejsza)
//         {
//             najmniejsza = wektor[i];
//         }
//     }
//     cout << "najmniejsza wartosc w tablicy to: " << najmniejsza << endl;
// }

int minWektor(vector<int> &wektor)
{
    int min = wektor[0];
    for (int i = 1; i < wektor.size(); i++)
    {
        if (min > wektor[i])
        {
            min = wektor[i];
        }
    }
    return min;
}

int maxWektor(vector<int> &wektor)
{
    int max = wektor[0];
    for (int i = 1; i < wektor.size(); i++)
    {
        if (max < wektor[i])
        {
            max = wektor[i];
        }
    }
    return max;
}

