// #include <iostream>
// #include <string>

// using namespace std;

// // void sprawdzPlec(string pesel)
// // {
// //     int cyfraDziesiata = pesel[9];
// //     if (cyfraDziesiata == 0 || cyfraDziesiata == 2 || cyfraDziesiata == 4 || cyfraDziesiata == 6 || cyfraDziesiata == 8)
// //     {
// //         cout << "K";
// //     }

// //     else if (pesel[9] == 1 || pesel[9] == 3 || pesel[9] == 5 || pesel[9] == 7 || pesel[9] == 9)
// //     {
// //         cout << "M";
// //     }
// // }

// char plec(string PESEL)
// {
//     if (PESEL[9] % 2 == 0)
//     {
//         return 'K';
//     }
//     else
//     {
//         return 'M';
//     }
// }

// int main()
// {

//     string pesel = "12345678900";
    

//     while (pesel.length() != 11)
//     {
//         cout << "Pesel musi miec 11 cyfr: ";
//         cin >> pesel;
//     }

//     plec(pesel);

//     return 0;
// }
#include <iostream>
using namespace std;

/*
nazwa funkcji: plec
opis funkcji: sprawdzana jest dziesiąta cyfra PESElu, dla wartości parzystych oznacza płeć żeńską, dla nieparzystych męską
parametry: napis-PESEL
zwracany typ i opis: char 'K' - kobieta lub 'M'-mężczyzna
autor: <numer zdającego >numery to były w ałszwic

*/
char plec(string PESEL)
{
    if (PESEL[9] % 2 == 0)
    {
        return 'K';
    }
    else
    {
        return 'M';
    }
}

bool sumaKontrolna(string PESEL)
{
    unsigned int S = 0, M, R;
    S = PESEL[0] + PESEL[1] * 2 + PESEL[2] * 7 + PESEL[3] * 9 + PESEL[4] + PESEL[5] * 3 + PESEL[6] * 7 + PESEL[7] * 9 + PESEL[8] + PESEL[9] * 3;
    cout << "S " << S << " modulo |" << S % 10 << endl;
    M = S % 10;
    if (M == 0)
    {
        R = 0;
    }
    else
    {
        R = 10 - M;
    }
    if (R == PESEL[10])
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
    //cout << "Podaj swoj PESEL\n";
    /*  cin >> PESEL; */
    if (plec(PESEL) == 'K')
    {
        cout << "Jestes kobieta" << endl;
    }
    else if (plec(PESEL) == 'M')
    {
        cout << "Jestes mezczyzna" << endl;
    }
    if (sumaKontrolna(PESEL))
    {
        cout << "PESEL zgodnny z suma kontrolna" << endl;
    }
    else
    {
        cout << "PESEL niezgodny z suma kontrolna" << endl;
    }
    return 0;
}