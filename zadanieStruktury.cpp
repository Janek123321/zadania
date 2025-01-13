#include <iostream>
using namespace std;

struct pojemnosc
{
    int litr;
    int galon;
    int wanna;
    int cysterna;
};

void zmianaJednostek(int litry, pojemnosc miara)
{
    miara.cysterna = litry / 1000;
    litry = litry % 1000;
    miara.wanna = litry / 200;
    litry = litry % 200;
    miara.galon = litry / 5;
    litry = litry % 5;

    cout << "Cystern: " << miara.cysterna << endl;
    cout << "Wanien: " << miara.wanna << endl;
    cout << "galonów: " << miara.galon << endl;
    cout << "litrów: " << litry << endl;
}

int main()
{
    int litry;
    pojemnosc pojemnik;
    cout << "Podaj liczbe litrow a zamienie ja na cysterny wanny i galony: \n";
    cin >> litry;
    zmianaJednostek(litry,pojemnik);
    return 0;
}
