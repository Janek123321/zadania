#include <iostream>
#include <vector>
#include "maxMin.h"
using namespace std;

int main()
{

    int wielkosc = 10;
    int tablicaStatyczna[10];
    wypelnijStatyczna(tablicaStatyczna,  wielkosc);
    wypiszStatyczna(tablicaStatyczna,  wielkosc);

    int *tablicaDynamiczna;
    tablicaDynamiczna = new int[wielkosc];
    wypelnijDynamiczna(tablicaDynamiczna, wielkosc);
    wypiszDynamiczna(tablicaDynamiczna, wielkosc);

    vector<int> wektor;
    // wypelnijWektor(wektor,wielkosc);
    // wypiszWektor(wektor,wielkosc);
    cout << minWektor(wektor) << endl;
    cout << maxWektor(wektor) << endl;


    return 0;
}
