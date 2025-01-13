// funkcja 1: Wypelnia wektor danymi losowymi w rozmiarze podanym przez uzytkownika
// funkcja 2: znajduje wartosci ekstremalne i zwraca je w wektorze
#include <iostream>
#include <vector>

using namespace std;

void wypelnijWektor(vector<int> &wektor, int rozmiar)
{
    wektor.resize(rozmiar);
    for (int i = 0; i < rozmiar; i++)
    {
        srand((i + 1) * time(NULL));
        wektor[i] = rand() % 11;
    }
}

void wypiszWektor(vector<int> &wektor){
   for (int &element : wektor)
    {
        cout<<element<<" ";
        
    }
    
}

int najwiekszaNajmniejsza(vector<int> &wektor)
{

    int najwiekszy=wektor[0];
    int najmniejszy=wektor[0];
    for (int &element : wektor)
    {
        if (element>najwiekszy)
        {
            najwiekszy=element;
        }
    
    }
    for (int &element : wektor)
    {
        if (element<najmniejszy)
        {
            najmniejszy=element;
        }
      
    }
    // cout<<"najwiekszy element: "<<najwiekszy<<endl;
    // cout<<"najmniejszy element: "<<najmniejszy<<endl;
    return (najwiekszy, najmniejszy);
}



int main()
{

    int wielkoscWektora;
    vector<int> wektor;
    cout << "Podaj wielkosc wektora: \n";
    cin >> wielkoscWektora;

    wektor.resize(wielkoscWektora);

    wypelnijWektor(wektor, wielkoscWektora);
    wypiszWektor(wektor);
    najwiekszaNajmniejsza(wektor);
    
    return 0;
}