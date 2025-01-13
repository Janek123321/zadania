#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    float liczba1, liczba2, czescCalkowita;
    cout << "Podaj pierwsza liczbe ";
    cin >> liczba1;
    cout << "Podaj druga liczbe ";
    cin >> liczba2;

    float liczbaDoPotegi = pow(liczba1, liczba2);
    cout << liczba1 << " podniesiona do potegi " << liczba2 << ": " << liczbaDoPotegi << endl;

    cout << "mniejsza z liczb: " << fmin(liczba1, liczba2) << endl;
    cout << "wieksza z liczb: " << fmax(liczba1, liczba2) << endl;
    cout << "czesc ulamkowa z pierwszej liczby: " << modf(liczba2, &czescCalkowita)<<" czesc calkowita: "<<czescCalkowita;

    return 0;
}