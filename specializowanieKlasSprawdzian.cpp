// Grupa B: Stworz szablon klasy cylinder który zawiera pola height i radius  i metodę objętość.
// Zastosuj 2 parametry uogólnione. Wykonaj specjalizację dla double int, konkretyzację dla float double.
// Tak stwórz definicje aby specjalizację i konkretyzację wykonać jawnie i niejawnie.
#include <iostream>
#include <cmath>
using namespace std;
template <class T1, class T2>
class Cylinder
{
public:
    Cylinder(){
        cout<<"domyslny";
    }
    Cylinder(T1 heightP, T2 radiusP){
        radius = radiusP;
        height = heightP;
    }
    T1 height;
    T2 radius;
    T2 volume()
    {
        cout << "volume (konkretyzacja): ";
        return 3.14 * (radius * radius) * height;
    }
};
template <>
class Cylinder<double, int>
{
public:
Cylinder(){
        cout<<"domyslny";
    }
    Cylinder(double heightP, int radiusP){
        radius = radiusP;
        height = heightP;
    }
    double radius;
    double height;

    int volume()
    {
        cout << "volume (specializacja): ";
        return 3.14 * (radius * radius) * height;
    }
};
int main()
{
    Cylinder<float, double> cylinder1 = Cylinder<float, double>(); // konkretyzacja jawnie

    cylinder1.radius = 1;
    cylinder1.height = 10;
    cout << cylinder1.volume() << endl;

    Cylinder<float, double> cylinder2; // konkretyzacja jawnie

    cylinder2.radius = 2;
    cylinder2.height = 10;
    cout << cylinder2.volume() << endl;

    Cylinder<double, int> cylinder3 = Cylinder<double, int>(); // specializacja jawnie

    cylinder3.radius = 1;
    cylinder3.height = 10;
    cout << cylinder3.volume() << endl;

    Cylinder cylinder4(3.0,34); // specializacja niejawnie

    cylinder4.radius = 2;
    cylinder4.height = 10;
    cout << cylinder4.volume() << endl;

    return 0;
}
