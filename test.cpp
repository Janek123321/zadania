
#include <iostream>
using namespace std;

class Pracownik
{
private:
    string imie{};
    string nazwisko{};

public:
    void setImie(string pImie)
    {
        imie = pImie;
    }
    void setNazwisko(string pNazwisko)
    {
        nazwisko = pNazwisko;
    }

    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }

    string display()
    {
        return imie + " " + nazwisko;
    }
};

class Nauczyciel : private Pracownik
{
private:
    string przedmiot{""};

public:
    void setPrzedmiot(string pPrzedmiot)
    {
        przedmiot = pPrzedmiot;
    }

    string getPrzedmiot()
    {
        return przedmiot;
    }

    string display()
    {
        return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
    }
    void setImie(string pImie)
    {
        setImie(pImie);
    }
    void setNazwisko(string pNazwisko)
    {
        setNazwisko(pNazwisko);
    }

    string getImie()
    {
        return getImie();
    }
    string getNazwisko()
    {
        return getNazwisko();
    }
};
int main()
{

    Nauczyciel nauczyciel;

    nauczyciel.setImie("Jan");
    nauczyciel.setNazwisko("Kowalski");
    nauczyciel.setPrzedmiot("elektronika");

    cout << "Dane nauczyciela: " << nauczyciel.display() << endl;
    return 0;
}