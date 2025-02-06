#include <iostream>
#include <string>
using namespace std;

char sprawdzPlec(string PESELp)
{
    if (PESELp[9] == '0' | PESELp[9] == '2' || PESELp[9] == '4' || PESELp[9] == '6' || PESELp[9] == '8')
    {
        return 'k';
    }
    else
    {
        return 'm';
    }
}

bool sumaKontrolna(string PESELp)
{
    int S = 0;
    S = (PESELp[0] * 1) + (PESELp[1] * 3) + (PESELp[2] * 7) + (PESELp[3] * 9) + (PESELp[4] * 1) + (PESELp[5] * 3) + (PESELp[6] * 7) + (PESELp[7] * 9) + (PESELp[8] * 1) + (PESELp[9] * 3);
    int M = S % 10;
    int R = 0;

    if (M == 0)
    {
        R = 0;
    }
    else
    {
        R = 10 - M;
    }

    char intotchar = R;
    int kontrolnaInt = int(PESELp[10]);

    cout << kontrolnaInt << " " << R << " " << PESELp[10] <<" "<<intotchar <<endl;

    if (R == PESELp[10])
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string PESEL = "55030101193";
    cout << "Podaj numer PESEL: \n";
    cin >> PESEL;

    cout << "Plec: ";
    if (sprawdzPlec(PESEL) == 'k')
        cout << "Kobieta\n";
    else if (sprawdzPlec(PESEL) == 'm')
        cout << "Mezczyzna\n";

    if (sumaKontrolna(PESEL) == true)
    {
        cout << "Pesel sie zgadza";
    }

    else
    {
        cout << "pesel sie nie zgadza ";
    }

    return 0;
}