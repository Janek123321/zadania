// // GRUPA A
// // Napisz program, w którym zdefiniujesz szablon przy użyciu dwóch zmiennych uogólnionych.
// // Napisz szablony specjalizacyjne dla zmiennych float,int oraz double,float.
// // Uruchom napisane szablony specjalizujące w sposób jawny. Sproboj tak je napisać by dało się je uruchomić niejawnie.
#include <iostream>
#include <cmath>
using namespace std;

template <typename T1, typename T2>
T1 srednia(T2 liczba1)
{
    cout << "szablon" << endl;
    return 0;
}

template <>
float srednia(int liczba1)
{
    cout << "float int" << endl;
    return 0;
}

template <>
double srednia(float liczba1)
{
    cout << "double float" << endl;
    return 0;
}

int main()
{
    srednia<float, float>(3);

    srednia<float, int>(5);

    srednia<double, float>(7);

    return 0;
}