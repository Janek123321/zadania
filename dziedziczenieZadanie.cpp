#include <iostream>
using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;
    int wiek;
    int rokZatrudnienia;

    Pracownik()
    {
        cout << "konstruktor bezparametrowy klasy pracownik\n";
    }

    Pracownik(string imieP, string nazwiskoP, int wiekP, int rokZatrudnieniaP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        wiek = wiekP;
        rokZatrudnienia = rokZatrudnieniaP;
        cout << "wywolano parametrowy pracownik\n";
    }
};

class Dyrektor : public Pracownik
{
public:
    int ileLatDyrektorem;
};

class Nauczyciel : public Pracownik
{
public:
    string czegoUczy;

    Nauczyciel(string imieP, string nazwiskoP, int wiekP, int rokZatrudnieniaP, string czegoUczyP) : Pracownik(imieP, nazwiskoP, wiekP, rokZatrudnieniaP)
    {
        czegoUczy = czegoUczyP;
        cout << "wywolano parametrowy nauczyciela\n";
    }
};

class Wychowawca : public Nauczyciel
{
public:
    string jakiejKlasyWychowawca;

    Wychowawca(string imieP, string nazwiskoP, int wiekP, int rokZatrudnieniaP, string czegoUczyP, string jakiejKlasyWychowawcaP) : Nauczyciel(imieP, nazwiskoP, wiekP, rokZatrudnieniaP, czegoUczyP)
    {
        jakiejKlasyWychowawca = jakiejKlasyWychowawcaP;
        cout << "wywolano parametrowy wychowawcy\n";
    }

    void display()
    {
        cout << imie << endl;
        cout << nazwisko << endl;
        cout << wiek << endl;
        cout << rokZatrudnienia << endl;
        cout << czegoUczy << endl;
        cout << jakiejKlasyWychowawca << endl;
    }
};

class Sekretarka : public Pracownik
{
public:
    int wydrukowaneStrony;
};

int main()
{
    Wychowawca wychowawca1("Jan", "Kowalski", 30, 2020, "matematyka", "3");
    wychowawca1.display();
    Sekretarka sekretarka;
    return 0;
}