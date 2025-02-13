// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;

// void wypelnijTablice(bool tablica[100], int size)
// {
//     tablica[size];
//     for (int i = 2; i > size; i++)
//     {
//        tablica[i]=true;
//     }

//     for (int i = 2; i > size; i++)
//     {
//        if(tablica[i]){
//         for (int j = i*i; i <= size; i++)
//         {
//             tablica[j] = false;
//         }

//        }
//     }
// }

// int main()
// {
//     int n=100;
//     bool tablcia[100];

//     wypelnijTablice(tablcia, n);

//     for (int i = 2; i < n; i++)
//     {
//         if (tablcia[i]==true)
//         cout<<i<<endl;
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

void wypelnij(bool *tab, int n)
{
    for (int i = 0; i <= n; i++)
    {
        tab[i] = true;
    }
}

void erastotenes(bool *tab, int n)
{
    tab[0] = false;
    tab[1] = false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (tab[i] == true)
        {
            for (int j = i + i; j <= n; j += i)
            {
                tab[j] = false;
            }
        }
    }
}

void wypisz(bool *tab, int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (tab[i] == true)
        {

            cout << "Liczba pierwsza:" << i << endl;
        }
    }
}

int main()
{
    int n = 0;

    cout << "Podaj liczbe wieksza niz 2:" << endl;
    cin >> n;

    if (n < 3)
    {
        cout << "Liczba musi byc wieksza od 2:" << endl;
    }
    bool *tablica = new bool[n];
    wypelnij(tablica, n);
    erastotenes(tablica, n);
    wypisz(tablica, n);

    return 0;
}