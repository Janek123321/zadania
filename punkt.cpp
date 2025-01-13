#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct wspolzedne
{
    float x;
    float y;
};

class Punkt
{
    wspolzedne wsp;

public:
    void setX(float xP)
    {
        wsp.x = xP;
    }

    void setY(float yP)
    {
        wsp.y = yP;
    }

    float getX()
    {
        return wsp.x;
    }

    float getY()
    {
        return wsp.y;
    }

    void odbijX()
    {
        wsp.x = wsp.x * -1.0;
    }

    void odbijY()
    {
        wsp.y = wsp.y * -1.0;
    }

    void przesun(int ileX, int ileY)
    {
        wsp.x = wsp.x + ileX;
        wsp.y = wsp.y + ileY;
    }

    void symetriaPkt(float xs, float ys)
    {
        cout << "symetralna x: " << (2.0 * xs) - wsp.x << endl;
        cout << "symetralna y: " << (2.0 * ys) - wsp.y << endl;
    }

    void odlegloscOdProstej(float a, float b, float c)
    {
        float odl = ((a * wsp.x) + (b * wsp.y) + c) / (sqrt((a * a) + (b * b)));

        cout << "odleglosc punktu od prostej: " << odl << endl;
    }

    void getWsp()
    {
        cout << "x: " << wsp.x << endl;
        cout << "y: " << wsp.y << endl;
    }
};

void odlegloscDwuchPunktow(Punkt *pktA, Punkt *pktB)
{
    float odl = sqrt(pow(pktA->getX() - pktB->getX(), 2.0) + pow(pktA->getY() - pktB->getY(), 2.0));

    cout << "odleglosc punktow: " << odl << endl;
}

int main()
{
    float aX, aY, bX, bY;
    cout << "Podaj x punktu a: " << endl;
    cin >> aX;
    cout << "Podaj y punktu a: " << endl;
    cin >> aY;

    Punkt *pktA = new Punkt;
    pktA->setX(aX);
    pktA->setY(aY);

    cout << "Podaj x punktu b: " << endl;
    cin >> bX;
    cout << "Podaj y punktu b: " << endl;
    cin >> bY;

    Punkt *pktB = new Punkt;
    pktB->setX(bX);
    pktB->setY(bY);

    odlegloscDwuchPunktow(pktA, pktB);

    delete pktB;

    pktA->symetriaPkt(-1, -1);

    pktA->odlegloscOdProstej(-2, 1, 5);

    pktA->przesun(-2, 1);

    pktA->getWsp();

    pktA->odbijX();
    pktA->odbijY();

    pktA->getWsp();

    delete pktA;

    return 0;
}