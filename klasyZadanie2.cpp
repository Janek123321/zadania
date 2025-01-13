#include <iostream>
using namespace std;

class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;

    Osoba();
    Osoba(int podaneId, string podaneImie);
    Osoba(const Osoba &osoba);
    void setId(int podaneId);
    void setImie(string podaneImie);
    int getId();
    string getImie();
    void wypiszImie(string podaneImie);
};

int Osoba::liczbaInstancji = 0;

Osoba::Osoba(const Osoba &osoba)
{
    id = osoba.id;
    imie = osoba.imie;
    liczbaInstancji++;
}
Osoba::Osoba()
{
    id = 0;
    imie = "";
    liczbaInstancji++;
}

Osoba::Osoba(int podaneId, string podaneImie)
{
    id = podaneId;
    imie = podaneImie;
    liczbaInstancji++;
}

void Osoba::setId(int podaneId)
{
    id = podaneId;
}

void Osoba::setImie(string podaneImie)
{
    imie = podaneImie;
}

int Osoba::getId()
{
    return id;
}

string Osoba::getImie()
{
    return imie;
}

void Osoba::wypiszImie(string podaneImie)
{

    if (imie != "")
    {
        cout << "Czesc " << podaneImie << " mam na imie " << imie;
    }
    else
    {
        cout << "brak danych";
    }
}

int main()
{
    int id;
    string imie1;

    cout << "podaj id\n";
    cin >> id;

    cout << "podaj imie\n";
    cin >> imie1;

    Osoba osoba1;

    osoba1.setId(id);
    osoba1.setImie(imie1);

    osoba1.wypiszImie("Adam");
    cout << "\nliczba obiektow: " << Osoba::liczbaInstancji << endl;

    Osoba osoba2(2,"");
    osoba2.wypiszImie("Adam");
    cout << "\nliczba obiektow: " << Osoba::liczbaInstancji << endl;

    Osoba osoba3;
    Osoba osoba4(osoba1);
    cout << osoba4.getId() << " " << osoba4.getImie() << endl;
    cout << "liczba obiektow: " << osoba1.liczbaInstancji;
    
    return 0;
}