#include <iostream>
using namespace std;

const float pi = 3.141592653589793;

class Blok
{
public:
    virtual void obj() {}
};

class Prostopadloscian : public Blok
{
public:
    float wys;
    float dlu;
    float sze;

    void obj()
    {
        cout << dlu * sze * wys << endl;
    }
};

class Cylinder : public Blok
{
public:
    float pro;
    float wys;

    void obj()
    {
        cout << pi * (pro * pro) * wys << endl;
    }
};

class Stozek : public Cylinder
{
public:
    void obj()
    {
        cout << pi * (pro * pro) * wys / 3.0 << endl;
    }
};

int main()
{
    Blok *pointer;
    Prostopadloscian prost1;
    pointer = &prost1;

    prost1.dlu = 3;
    prost1.sze = 2;
    prost1.wys = 10;
    pointer->obj();

    Cylinder cyli1;
    pointer = &cyli1;

    cyli1.pro = 3;
    cyli1.wys = 4;
    pointer->obj();

    Stozek stoz1;
    pointer = &stoz1;

    stoz1.pro = 3;
    stoz1.wys = 4;
    pointer->obj();
    return 0;
}