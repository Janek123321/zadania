#include <iostream>
#include <vector>
using namespace std;

void sprawdzenieFor(string slowo, char szukanyZnak)
{ 
    int ileRazy = 0;
    for (int i = 0; i < slowo.length(); i++)
    {
        if (slowo[i] == szukanyZnak)
        {
            ileRazy = ileRazy + 1;
        }
    }
    cout << "znak " << szukanyZnak << " znaleziono " << ileRazy << " razy" << endl;
}

void sprawdzanieForeach(string slowo, char szukanyZnak)
{
    int ileRazy = 0;
    for (char iterator : slowo)
    {
        if (iterator == szukanyZnak)
        {
            ileRazy++;
        }   
    }
    cout << "znak " << szukanyZnak << " znaleziono " << ileRazy << " razy";
}