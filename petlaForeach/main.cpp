#include <iostream>
#include <vector>
#include "petlaForeach.h"
using namespace std;

int main()
{
    char znak;
    string slowo;
    cout<<"podaj slowo:\n";
    cin>>slowo;
    cout<<"Podaj znak ktory chcesz sprawdzic: \n";
    cin>>znak;

    sprawdzenieFor(slowo, znak);
    sprawdzanieForeach(slowo, znak);

    return 0;
}
