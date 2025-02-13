// Stworz szablon klasy komórka który zawiera pola cena maksymalna i minimalne i metodę średnia cena.
// Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla float double,
// konkretyzację dla int float.
// Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.
#include <iostream>
using namespace std;

template <class T1, class T2>
class Komorka
{
public:
    T1 cenaMax;
    T2 cenaMin;

    Komorka(T1 cenaMaxP, T2 cenaMinP)
    {
        cenaMax = cenaMaxP;
        cenaMin = cenaMinP;
    }

    T2 sredniaCena()
    {
        cout << "konkretyzacja: ";
        return (cenaMax + cenaMin) / 2;
    }
};

template <>
class Komorka<float, double>
{
public:
    float cenaMax;
    double cenaMin;

    Komorka(float cenaMaxP, double cenaMinP)
    {
        cenaMax = cenaMaxP;
        cenaMin = cenaMinP;
    }

    double sredniaCena()
    {
        cout << "specializacja: ";
        return (cenaMax + cenaMin) / 2;
    }
};

int main()
{
    Komorka<int, float> komorka1(3, 4); // konkretyzacja jawnie
    cout << komorka1.sredniaCena() << endl;

    Komorka komorka2(2, 5.4f); // konkretyzacja niejawnie
    cout << komorka2.sredniaCena() << endl;

    Komorka<float, double> komorka3(1, 3); // specializacja jawnie
    cout << komorka3.sredniaCena() << endl;

    Komorka komorka4(3.0f, 34.2); // specializacja niejawnie
    cout << komorka4.sredniaCena() << endl;

    return 0;
}