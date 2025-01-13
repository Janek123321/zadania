// Stwórz klasę „książka” zawierającą:
// – pola prywatne: tytuł, autor, rok wydania
// – settery i gettery do prywatnych pól
// – metoda wypisująca informację o książce
// – lista użyta do inicjalizacji
// – konstruktor parametryczny i kopiujący
// – pole statyczne zliczające liczbę książek
// – delegowanie konstruktora bezparametrowego do konstruktora parametrycznego    
// – W programie użyty konstruktor parametryczny i kopiujący
// - W programie zdefiniuj funkcje która pobiera obiekt jako parametr i zwraca obiekt  w którym rok wydania jest pomniejszony o 100.
// Pobierz parametr i zwróć wartość tak by użyć jak najmniej pamieci.
#include <iostream>
using namespace std;

class Ksiazki
{
private:
    string tytul;
    string autor;
    int rokWydania;

public:
    static int liczbaKsiazek;

    void setTytul(string tytulP)
    {
        tytul = tytulP;
    }
    string getTytul()
    {
        return tytul;
    }

    void setAutor(string autorP)
    {
        autor = autorP;
    }
    string getAutor()
    {
        return autor;
    }

    void setRok(int rokP)
    {
        rokWydania = rokP;
    }
    int getRok()
    {
        return rokWydania;
    }

    void info()
    {
        cout << "tytul: " << tytul << endl
             << "autor: " << autor << endl
             << "rok wydania: " << rokWydania << endl;
    }
    Ksiazki() : tytul(""), autor(""), rokWydania(0) {liczbaKsiazek++;}

    Ksiazki(string tytulP, string autorP, int rok) : Ksiazki()
    {
        tytul = tytulP;
        autor = autorP;
        rokWydania = rok;
    }

    Ksiazki(const Ksiazki &wzor) : tytul(wzor.tytul), autor(wzor.autor), rokWydania(wzor.rokWydania)
    {
        liczbaKsiazek++;
        cout << "kop"<<endl;
    }

    friend Ksiazki &zmniejsz(Ksiazki& wzor);
};

Ksiazki& zmniejsz(Ksiazki& wzor)
{
    wzor.rokWydania = wzor.rokWydania-100;

    return wzor;
}

int Ksiazki::liczbaKsiazek = 0;

int main()
{

    Ksiazki ksiazka1("123", "Jan", 1100);

    ksiazka1.info();

    Ksiazki ksiazka2(ksiazka1);
    ksiazka2.info();

    zmniejsz(ksiazka2);

    ksiazka2.info();

    cout<<Ksiazki::liczbaKsiazek;

    return 0;
}