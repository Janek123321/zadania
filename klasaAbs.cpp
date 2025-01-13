#include <iostream>
using namespace std;

class Czlowiek
{
public:
    virtual void obliczWiek() = 0;
};

class Pracownik
{
public:
    virtual void obliczWyplate() = 0;
};
class Szef : public Czlowiek, public Pracownik
{
public:
    int wiek;
    int wyplata;

    virtual void obliczWiek()
    {
        wiek++;
        cout << wiek << endl;
    }

    virtual void obliczWyplate()
    {
        wyplata++;
        cout << wyplata << endl;
    }
};

int main()
{
    Szef szef1;
    szef1.wiek = 39;
    szef1.wyplata = 9999;

    szef1.obliczWiek();
    szef1.obliczWyplate();
    return 0;
}