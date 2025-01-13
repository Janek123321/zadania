#include <iostream>
#include <fstream>
using namespace std;
struct punkty
{
    double punktA;
    double punktB;
};

void wypelnij(punkty *tablica, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "Podaj wspolzedna x: ";
        cin >> tablica[i].punktA;

        cout << "Podaj wspolzedna y: ";
        cin >> tablica[i].punktB;
    }
}

void odleglosOdZera(punkty *tablica, int rozmiar)
{
    double najwiekszy = (tablica[0].punktA*tablica[0].punktA) + (tablica[0].punktB*tablica[0].punktB);
    double sprawdzany=0;
    for (int i = 0; i < rozmiar; i++)
    {
        sprawdzany=(tablica[i].punktA*tablica[i].punktA) + (tablica[i].punktB*tablica[i].punktB);
        if (sprawdzany>najwiekszy)
        {
            najwiekszy=sprawdzany;
        }
        
    }
    cout<<"punkty najdalej od 0: \n";
    for (int i = 0; i < rozmiar; i++)
    {
        double sprawdzanyTeraz=(tablica[i].punktA*tablica[i].punktA) + (tablica[i].punktB*tablica[i].punktB);
        if (sprawdzanyTeraz==najwiekszy)
        {
            cout<<"x: "<<tablica[i].punktA<<"  y: "<<tablica[i].punktB<<endl;
        }
        
    }
    
}

int main()
{   
    int wielkosc;
    cout<<"Podaj ilosc punktow: ";
    cin>>wielkosc;
    punkty *tab = new punkty[wielkosc];

    wypelnij(tab, wielkosc);
    odleglosOdZera(tab, wielkosc);

    return 0;
}