#include <iostream>

using namespace std;

class osoba
{
private:
    string pesel;
    string plec;
    bool czyPoprawne(string podanyPesel)
    {
        int s;
        s += ((int)podanyPesel[0] - 48) * 1;
        s += ((int)podanyPesel[1] - 48) * 3;
        s += ((int)podanyPesel[2] - 48) * 7;
        s += ((int)podanyPesel[3] - 48) * 9;
        s += ((int)podanyPesel[4] - 48) * 1;
        s += ((int)podanyPesel[5] - 48) * 3;
        s += ((int)podanyPesel[6] - 48) * 7;
        s += ((int)podanyPesel[7] - 48) * 9;
        s += ((int)podanyPesel[8] - 48) * 1;
        s += ((int)podanyPesel[9] - 48) * 3;
        int m = s % 10;
        int r = m == 0 ? 0 : 10 - m;

        if ((int)podanyPesel[10] - 48 == r)
        {
            return true;
        }
        return false;
    }

public:
    short int iq;

    void setPesel(string podanyPesel)
    {
        if (czyPoprawne(podanyPesel))
        {
            pesel = podanyPesel;
        }
        else
        {
            cout << "Niepoprawny pesel";

            do
            {
                char wybor;
                cout << "naciśnij 1 jezeli chcesz zakonczyć albo cokolwiek innego by podać nowy pesel";
                cin >> wybor;
                if (wybor == '1')
                {
                    exit(-5);
                }
                else
                {
                    cin >> podanyPesel;
                }

            } while (!czyPoprawne(podanyPesel));
            pesel = podanyPesel;
        }
    }

    void getPesel(string &nowyPesel)
    {
        nowyPesel = pesel;
    }

    void plecPesel()
    {
        if (pesel[9] % 2 == 0)
        {
            cout << "kobieta";
        }
        else
        {
            cout << "mezczyzna";
        }
    }

    void wypiszRokUrodzenia()
    {

        struct dataUrodzenia
        {
            int rokUrodzenia;
            int miesiac;
            int dzien;
        };

        dataUrodzenia data1;

        data1.rokUrodzenia = ((int)pesel[0] - 48) * 10 + ((int)pesel[1] - 48);

        data1.miesiac = ((int)pesel[2] - 48) * 10 + ((int)pesel[3] - 48);

        if (data1.miesiac > 20)
        {
            data1.rokUrodzenia += 2000;
        }
        else
        {
            data1.rokUrodzenia += 1900;
        }

        if (data1.rokUrodzenia > 1999)
        {
            data1.miesiac -= 20;
        }

        data1.dzien = ((int)pesel[4] - 48) * 10 + ((int)pesel[5] - 48);
        cout << "Urodziłeś się: ";

        if (data1.dzien < 10)
        {
            cout << "0" << data1.dzien;
        }
        else
        {
            cout << data1.dzien;
        }
        cout << ".";

        if (data1.miesiac < 10)
        {
            cout << "0" << data1.miesiac;
        }
        else
        {
            cout << data1.miesiac;
        }

        cout << ".";
        cout << data1.rokUrodzenia << endl;
    }
};

int main()
{
    string podanyPesel, nowyPesel;
    short int iq;
    osoba osoba1;

    cout << "podaj iq: \n";
    cin >> iq;

    cout << "podaj numer pesel: \n";
    cin >> podanyPesel;

    osoba1.iq = iq;
    osoba1.setPesel(podanyPesel);

    osoba1.getPesel(nowyPesel);

    cout << "iq: " << osoba1.iq << endl;
    cout << "PESEL: " << nowyPesel << endl;
    cout << "plec na podstawie nr PESEL: ";
    osoba1.plecPesel();
    cout << endl
         << "rok urodzenia: ";
    osoba1.wypiszRokUrodzenia();

    return 0;
}