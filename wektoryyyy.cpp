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

// #include <iostream>
// using namespace std;
// int main() {
// const int n {5}; // rozmiar tablicy
// // Deklaracja zmiennej tablicowej o nazwie tablica:
// double tablica[n];
// // Wprowadzenie z klawiatury wartości wszystkich elementów tablicy:
// cout << "Podaj wartości poszczególnych elementów tablicy: " << endl;
// for (double &element : tablica) {
// cout << "element = ";
// cin >> element;
// }
// /* UWAGA
// * W pętli for powyżej zmienna element stanowi referencję do elementu składowego tablicy.
// * Tym samym wartości elementów tablicy można zmieniać (nadawać wartość, modyfikować).
// */

// // Obliczenie sumy wszystkich elementów zapisanych w tablicy:
// double suma {0};
// for (double element : tablica) {
// suma += element;
// }
// /* UWAGA
// * W pętli for powyżej zmienna element oznacza kopię elementu tablicy. Oznacza to, że operacje są wykonywane
// * na kopiach elementów, a nie na oryginałach. Tym samym zmiana wartości elementów tablicy jest niemożliwa.
// */
// // Wyświetlenie wyniku — sumy elementów tablicy:
// cout << "Suma elementów tablicy wynosi: " << suma << endl;
// return 0;
// }



// #include <iostream>
// #include <vector>


// using namespace std;

// void sortujRosnaco(vector<int>& tablica) {
//     int n = tablica.size();
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (tablica[j] > tablica[j + 1]) {
//                 swap(tablica[j], tablica[j + 1]);
//             }
//         }
//     }
// }

// void sortujMalejaco(vector<int>& tablica) {
//     int n = tablica.size();
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (tablica[j] < tablica[j + 1]) {
//                 swap(tablica[j], tablica[j + 1]);
//             }
//         }
//     }
// }

// void wypiszTablice(const vector<int>& tablica) {
//     for (const auto& liczba : tablica) {
//         cout << liczba << " ";
//     }
//     cout << endl;
// }

// int main() {
//     srand(time(nullptr)); // Inicjalizacja generatora liczb pseudolosowych

//     vector<int> tablica;

//     // Pytamy użytkownika o wielkość tablicy
//     cout << "Podaj wielkosc tablicy: ";
//     int wielkosc;
//     cin >> wielkosc;

//     // Wypełniamy tablicę losowymi liczbami
//     for (int i = 0; i < wielkosc; ++i) {
//         tablica.push_back(rand() % 100); // Losujemy liczby z zakresu 0-99
//     }

//     // Pytamy użytkownika o preferencję sortowania
//     cout << "Chcesz wyswietlic od najmniejszej (1) czy od najwiekszej (2) liczby? ";
//     int wybor;
//     cin >> wybor;

//     // Sortujemy tablicę
//     if (wybor == 1) {
//         sortujRosnaco(tablica);
//     } else if (wybor == 2) {
//         sortujMalejaco(tablica);
//     } else {
//         cout << "Nieprawidlowy wybor." << endl;
//         return 1;
//     }

//     // Wypisujemy posortowaną tablicę za pomocą pętli forEach
//     cout << "Posortowana tablica: ";
//     for (const auto& liczba : tablica) {
//         cout << liczba << " ";
//     }
//     cout << endl;

//     return 0;
// }