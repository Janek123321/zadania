// ile razy wystapi i na jakich indeksach, na jakim indeksie jest pierwsze wystapienie
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void liczbaWystapienIIndeksy(char napis[], char litera)
{
    int iloscWystapien = 0;
    vector<int> wektor;
    wektor.resize(strlen(napis));
    cout<<"litera "<<litera<<" wystepuje na indeksach: ";
    for (int i = 0; i < strlen(napis); i++)
    {
        if (napis[i] == litera)
        {
           wektor[i]=napis[i];
        }
    }
    for (int i = 0; i < wektor.size(); i++)
    {
        cout<<wektor[i]<<" ";
    }
    
}

void indeksPierwszego(char napis[], char litera)
{
    cout <<"Pierwsze wystapienie jest na indeksie: " << strlen(napis) - strlen(strchr(napis, litera))<<endl;
}

int main()
{
    
    char napis[30];
    cout<<"podaj napis\n";
    cin>>napis;
    char litera;
    cout<<"Podaj litere ktora chcesz znalezc: \n";
    cin >> litera;
    indeksPierwszego(napis, litera);
    liczbaWystapienIIndeksy(napis, litera);
    
    
    return 0;
}
