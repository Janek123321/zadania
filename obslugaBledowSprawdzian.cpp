// Gupa A Pobierz liczbę parzystą nieujemną od użytkownika:
// jeżeli jest parzysta to jest dobrze i się wypisuje komunikat "JD".
// Jeżeli liczba jest ujemna błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej.
// Jeżeli liczba jest nieparzysta błąd jest wyrzucany przy pomocy klasy exception.
// Jeżeli liczba jest niecałkowita błąd wyrzucany jest przy pomocy klasy runtime_error.
#include <iostream>
#include <exception>
using namespace std;

class MyRuntimeError : public runtime_error
{
public:
    MyRuntimeError(const string &msg) : runtime_error(msg) {} // tu nadpisałem metodę what()
};

class MyException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "podana liczba jest nieparzysta";
    }
};

int main()
{
    try
    {
        int bladInt;
        double liczbaOdUzytkownika;
        cout << "podaj liczbe parzysta dodatnia\n";
        cin >> liczbaOdUzytkownika;

        int czyCalkowita = (int)liczbaOdUzytkownika;
        double reszta = liczbaOdUzytkownika - czyCalkowita;
        if (liczbaOdUzytkownika < 0)
        {
            throw bladInt;
        }
        else if (reszta == 0 && czyCalkowita % 2 != 0)
        {
            throw MyException();
        }
        else if (reszta != 0)
        {
            throw MyRuntimeError("podana liczba nie jest calkowita");
        }
        else if (reszta == 0 && czyCalkowita % 2 == 0)
        {
            cout << "JD";
        }
    }
    catch (int)
    {
        cout << "podana liczba jest ujemna";
    }
    catch (const MyException &e)
    {
        cout << e.what();
    }
    catch (const MyRuntimeError &e)
    {
        cout << e.what();
    }

    return 0;
}