#include <iostream>
using namespace std;

int main()
{

    float a, b;
    cout << "Podaj 2 liczby a ja je dodam, odejme, pomnoze i podziele:\n";
    cin >> a >> b;

    cout << "Wynik dodawania:\n";
    cout << a << " + " << b << " = " << a + b << endl;

    cout << "Wynik odejmowania:\n";
    cout << a << " - " << b << " = " << a - b << endl;

    cout << "Wynik mnozenia:\n";
    cout << a << " * " << b << " = " << a * b << endl;

    if (b == 0)
    {
        cout << "Nie mozna dzielic przez zero";
    }

    else
    {
        cout << "Wynik dzielenia:\n";
        cout << a << " / " << b << " = " << a / b << endl;
    }
    return 0;
}
