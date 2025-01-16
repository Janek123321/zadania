#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T srednia(T liczba1, T liczba2)
{
    cout << "Liczba " << liczba1 << " ^ " << liczba2 << " = " << pow(liczba1, liczba2) << endl;
    return 0;
}
template <>
double srednia(double liczba1, double liczba2)
{
    cout << "Liczba " << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2 << endl;
    return 0;
}
template <>
float srednia(float liczba1, float liczba2)
{
    cout << "Liczba " << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << endl;
    return 0;
}

int main()
{
    srednia(3,3);

    srednia(3.0, 3.0);

    srednia<float>(3, 3);

    return 0;
}