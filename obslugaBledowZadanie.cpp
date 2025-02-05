#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class my_exception : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Podales liczbe jednocyfrowa   //exception";
    }
};

class MyRuntimeError : public runtime_error
{
public:
    MyRuntimeError(const string &msg) : runtime_error(msg) {}
};

class MyLogicError : public logic_error
{
public:
    MyLogicError(const string &msg) : logic_error(msg) {}
};

int main()
{
    try
    {
        int liczba, reszta1;
        double reszta2;
        float domyslny;
        cout << "podaj liczbe dwucyfrowa: \n";
        cin >> liczba;
        if (liczba < 10)
            throw my_exception();
        if (liczba > 99 && liczba < 1000)
            throw MyRuntimeError("Podales liczbe trzycyfrowa   //runtime_error");
        if (liczba > 999 && liczba < 10000)
            throw MyLogicError("Podales liczbe czterocyfrowa   //logic_error");
        if (liczba > 9999)
            throw domyslny;
        reszta1 = liczba % 10;
        reszta2 = (liczba - reszta1) / 10;
        cout << "podana liczba rozlozona: \n";
        cout << reszta2 << endl;
        cout << reszta1 << endl;
    }
    
    catch (const my_exception &e)
    {
        cout << e.what();
    }
    catch (const runtime_error &e)
    {
        cout << e.what();
    }
    catch (const logic_error &e)
    {
        cout << e.what();
    }
    catch (...)
    {
        cout << "wiecej niz czterocyfrowa  //domyslny";
    }
    return 0;
}