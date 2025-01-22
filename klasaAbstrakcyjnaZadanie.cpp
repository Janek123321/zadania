// ZA POMOCA KLASY ABSTRAKCYJNEJ
#include <iostream>
using namespace std;
class Osoba
{
public:
    string imie;
    string nazwisko;

    virtual void wyswietlDane() = 0;
};
class Lekarz : public Osoba
{
public:
    Lekarz() {};
    Lekarz(string imieP, string nazwiskoP, string specializacjaP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specializacja = specializacjaP;
    }
    string specializacja;

    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << ", specializacja: " << specializacja << endl;
    }
};
class Ordynator : public Lekarz
{
public:
    Ordynator() {};
    Ordynator(string imieP, string nazwiskoP, string specializacjaP, string oddzialP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specializacja = specializacjaP;
        oddzial = oddzialP;
    }
    string oddzial;

    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << ", specializacja: " << specializacja << ", oddzial: " << oddzial << endl;
    }
};

int main()
{
    Osoba *osoba = new Lekarz("Jan", "Kowalski", "kardiolog");
    cout << "Dane lekarza" << endl;
    osoba->wyswietlDane();

    osoba = new Ordynator("Jan", "Nowak", "neurolog", "oddzial wewnetrzny");
    cout << "Dane ordynatora" << endl;
    osoba->wyswietlDane();

    return 0;
}

// ZA POMOCA INTERFEJSOW

// #include <iostream>
// using namespace std;

// class Osoba
// {
// public:
//     virtual void wyswietlDane() = 0;
// };

// class Lekarz : public Osoba
// {
// public:
//     Lekarz() {};
//     Lekarz(string imieP, string nazwiskoP, string specializacjaP)
//     {
//         imie = imieP;
//         nazwisko = nazwiskoP;
//         specializacja = specializacjaP;
//     }
//     string specializacja;
//     string imie;
//     string nazwisko;

//     void wyswietlDane()
//     {
//         cout << imie << " " << nazwisko << ", specializacja: " << specializacja << endl;
//     }
// };

// class Ordynator : public Lekarz
// {
// public:
//     Ordynator() {};
//     Ordynator(string imieP, string nazwiskoP, string specializacjaP, string oddzialP)
//     {
//         imie = imieP;
//         nazwisko = nazwiskoP;
//         specializacja = specializacjaP;
//         oddzial = oddzialP;
//     }
//     string oddzial;

//     void wyswietlDane()
//     {
//         cout << imie << " " << nazwisko << ", specializacja: " << specializacja << ", oddzial: " << oddzial << endl;
//     }
// };

// int main()
// {
//     Osoba *osoba = new Lekarz("Jan", "Kowalski", "kardiolog");
//     cout << "Dane lekarza" << endl;
//     osoba->wyswietlDane();

//     osoba = new Ordynator("Jan", "Nowak", "neurolog", "oddzial wewnetrzny");
//     cout << "Dane ordynatora" << endl;
//     osoba->wyswietlDane();

//     return 0;
// }