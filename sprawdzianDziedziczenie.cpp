// klasy bazowe mają własności które się nie dziedziczą.
// Klasa pochodna ma metodę display.
// Ma być możliwość edycji wszystkich własności klasy pochodnej .
#include <iostream>
using namespace std;

class Pracownik
{
private:
    string imie;
    string nazwisko;

public:
    void setImie(string imieP)
    {
        imie = imieP;
    }

    void setNazwisko(string nazwiskoP)
    {
        nazwisko = nazwiskoP;
    }

    string getImie()
    {
        return imie;
    }

    string getNazwisko()
    {
        return nazwisko;
    }

    void display()
    {
        cout << "imie: " << imie << endl;
        cout << "nazwisko: " << nazwisko << endl;
    }
};

class Nauczyciel : private Pracownik
{
public:
    string przedmiot;

    void setImie(string imieP)
    {
        Pracownik::setImie(imieP);
    }

    void setNazwisko(string nazwiskoP)
    {
        Pracownik::setNazwisko(nazwiskoP);
    }

    string getImie()
    {
        return Pracownik::getImie();
    }

    string getNazwisko()
    {
        return Pracownik::getNazwisko();
    }

    void display()
    {
        cout << "imie: " << getImie() << endl;
        cout << "nazwisko: " << getNazwisko() << endl;
        cout << "przedmiot: " << przedmiot << endl;
    }
};


int main()
{
    Nauczyciel nauczyciel1;
    nauczyciel1.setImie("Jan");
    nauczyciel1.setNazwisko("Kowalski");
    nauczyciel1.przedmiot = "wf";
    nauczyciel1.display();
    return 0;
}

//prostopadloscian 