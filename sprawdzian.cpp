// Zadanie 1: Zwierzęta
// Napisz program, w którym:

// Istnieje abstrakcyjna klasa Animal z czysto wirtualną metodą makeSound().
// Klasy pochodne, takie jak Dog i Cat, implementują tę metodę.

//  wywołaj metodę makeSound() dla każdego zwierzęcia.
// Przykładowy wynik:

// Skopiuj kod
// Hau!
// Miau

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     virtual void makeSound()=0;
// };

// class Dog : public Animal
// {
// public:
// void makeSound(){
//     cout<<"Hau!";
// }
// };

// class Cat : public Animal
// {
// public:
// void makeSound(){
//     cout<<"Miau!";
// }
// };

// int main()
// {
//  Animal *zwieraze = new Dog;
//  zwieraze->makeSound();

//  zwieraze = new Cat;

//  zwieraze->makeSound();
// }

// Zadanie 2: Figury geometryczne
// Napisz program, w którym:

// // Istnieje abstrakcyjna klasa Shape z czysto wirtualnymi metodami calculateArea() oraz displayInfo().
// // Klasy pochodne, takie jak Rectangle i Circle, implementują te metody:
// // Rectangle oblicza pole prostokąta.
// // Circle oblicza pole koła.
// // Utwórz dynamicznie obiekty Rectangle i Circle, a następnie wyświetl informacje o każdym z obiektów.
// // Przykładowy wynik:
// // Rectangle: Width = 5, Height = 10, Area = 50
// // Circle: Radius = 3, Area = 28.27

// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     virtual float calculateArea()=0;
//     virtual void displayInfo()=0;
// };

// class Rectangle : public Shape
// {
// public:
//     float width;
//     float height;
//     float calculateArea()
//     {
//         return width * height;
//     }
//     void displayInfo()
//     {
//         cout << "Rectangle: Width = " << width << ", Height = " << height << ", Area = " << calculateArea()<<endl;
//     }
// };

// class Circle : public Shape
// {
// public:
//     float radius;
//     float calculateArea()
//     {
//         return 3.14 * (radius * radius);
//     }
//     void displayInfo()
//     {
//         cout << "Circle: Radius = " << radius << ", Area = " << calculateArea();
//     }
// };

// int main()
// {
//     Rectangle *rectangle = new Rectangle;
//     rectangle->width=5;
//     rectangle->height=10;
//     rectangle->displayInfo();

//     Circle *circle1 = new Circle;
//     circle1->radius=3;
//     circle1->displayInfo();
// }

// Istnieje abstrakcyjna klasa Shape z czysto wirtualnymi metodami calculateArea() oraz displayInfo().
// Klasy pochodne, takie jak Rectangle i Circle, implementują te metody:
// Rectangle oblicza pole prostokąta.
// Circle oblicza pole koła.
// Utwórz dynamicznie obiekty Rectangle i Circle, a następnie wyświetl informacje o każdym z obiektów.
// Przykładowy wynik:
// Rectangle: Width = 5, Height = 10, Area = 50
// Circle: Radius = 3, Area = 28.27

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float calculateArea() = 0;
    virtual void displayInfo() = 0;
};

class Rectangle : public Shape
{
public:
    float width;
    float height;

    Rectangle() {};
    Rectangle(float widthP, float heightP)
    {
        width = widthP;
        height = heightP;
    }
    float calculateArea()
    {
        return width * height;
    }
    void displayInfo()
    {
        cout << "Rectangle: Width = " << width << ", Height = " << height << ", Area = " << calculateArea() << endl;
    }
};

class Circle : public Shape
{
public:
    float radius;
    Circle() {};
    Circle(float radiusP)
    {
        radius = radiusP;
    }
    float calculateArea()
    {
        return 3.14 * (radius * radius);
    }
    void displayInfo()
    {
        cout << "Circle: Radius = " << radius << ", Area = " << calculateArea();
    }
};

int main()
{
    Shape *shape1 = new Rectangle(10, 5);

    shape1->displayInfo();

    shape1 = new Circle(3);
    shape1->displayInfo();
}