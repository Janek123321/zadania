// #include <iostream>
// #include <vector>
// using namespace std;

// void wypelnijWektor(vector<int> &wektor)
// {
//     for (int &element : wektor)
//     {
//         cout << "Podaj element wektora\n";
//         cin >> element;
//     }
// }

// void sumaWektora(vector<int> &wektor)
// {
//     int suma = 0;
//     for (int &element : wektor)
//     {
//         suma += element;
//     }
//     cout << "suma wszystkich liczb w wektorze = " << suma<<endl;
// }

// void sredniaWektora(vector<int> &wektor)
// {
//     double sumaElementow = 0;
//     for (int &element : wektor)
//     {
//         sumaElementow += element;
//     }
//     double suma = sumaElementow/wektor.size();

//     cout << "srednia arytmetyczna wszystkich liczb w wektorze = " << suma;
// }

// int main()
// {
//     int liczbaElementow;
//     vector<int> wektor;
//     cout << "podaj wielkosc wektora \n";
//     cin >> liczbaElementow;
//     wektor.resize(liczbaElementow);

//     wypelnijWektor(wektor);
//     sumaWektora(wektor);
//     sredniaWektora(wektor);

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
void wypelnij(vector<int> &liczby)//wektor można przekazać przez wartość ireferencje
{
    for (int &itertor : liczby)
    {
        cout << "podaj kolejny element\n";
        cin >> itertor;
    }
}
int sumaElementow(vector<int> liczby)
{
    int suma = 0;
    for (int &itertor : liczby)

    {
        suma += itertor;
    }
    return suma;
}
double srednia(vector<int> liczby)
{
    return (double)sumaElementow(liczby)/(double)liczby.size();
}

int main()
{
    int sizeWektor;
    cout <<"podaj rozmiar wektora\n";
    cin>>sizeWektor;
    vector<int> liczby;
    liczby.resize(sizeWektor);
    wypelnij(liczby);
    cout<<sumaElementow(liczby)<<endl;              
    cout<<srednia(liczby)<<endl;
    return 0;
}
