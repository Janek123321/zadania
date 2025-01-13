// Stwórz hierarchię klas dla różnych typów kształtów geometrycznych. W hierarchii powinny znaleźć się klasy Kształt, Koło oraz Prostokąt.
// Klasa Kształt powinna zawierać czysto wirtualną funkcję obliczPole(), która będzie obliczać pole kształtu.
// Zdefiniuj klasę Kształt jako klasę abstrakcyjną.
// Stwórz klasę Koło, która dziedziczy po klasie Kształt. Klasa ta powinna mieć pole promień i implementować funkcję obliczPole(), która zwraca
// pole koła (π * promień²).
// Stwórz klasę Prostokąt, która również dziedziczy po klasie Kształt.
// Klasa ta powinna mieć pola szerokość i wysokość, a funkcja obliczPole() powinna zwracać pole prostokąta (szerokość * wysokość).
// W funkcji main oblicz pole kola i prostokąta optymalnie zarządzając pamięcią.
#include <iostream>
using namespace std;

class Ksztalt
{
public:
    virtual float obliczPole() = 0;
};

class Kolo : public Ksztalt
{
public:
    Kolo() {};
    Kolo(float promienP)
    {
        promien = promienP;
    }
    float promien;
    float obliczPole()
    {
        return 3.14 * (promien * promien);
    }
};

class Prostokat : public Ksztalt
{
public:
    Prostokat() {};
    Prostokat(float szerokoscP, float wysokoscP)
    {
        szerokosc = szerokoscP;
        wysokosc = wysokoscP;
    }
    float szerokosc;
    float wysokosc;
    float obliczPole()
    {
        return szerokosc * wysokosc;
    }
};

int main()
{
    Ksztalt *figura = new Kolo(3);

    cout << "Pole kola = " << figura->obliczPole() << endl;

    figura = new Prostokat(5, 10);

    cout << "Pole prostokata = " << figura->obliczPole();

    return 0;
}