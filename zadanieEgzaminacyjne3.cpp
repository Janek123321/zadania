#include <iostream>
using namespace std;

class Urzadzenie
{
public:
    void wyswietlKomunikat(string podanyKomunikat)
    {
        cout << podanyKomunikat << endl;
    }
};

class Pralka : public Urzadzenie
{
private:
    int nrProgramu = 0;

public:
    int ustawProgram(int nrProgramuP)
    {
        if (nrProgramuP >= 1 && nrProgramuP <= 12)
        {
            nrProgramu = nrProgramuP;
            wyswietlKomunikat("Program zostal ustwiony");
        }
        else
        {
            wyswietlKomunikat("Podano niepoprawny numer programu");
        }
        return nrProgramu;
    }
};

class Odkurzacz : public Urzadzenie
{
private:
    bool stanOdkurzacza = false;

public:
    void on()
    {
        if (stanOdkurzacza == false)
        {
            stanOdkurzacza = true;
            wyswietlKomunikat("Odkurzacz wlaczono");
        }
    }
    void off()
    {
        if (stanOdkurzacza == true)
        {
            stanOdkurzacza = false;
            wyswietlKomunikat("Odkurzacz wylaczono");
        }
    }
};
int main()
{
    Pralka pralka1;
    Odkurzacz odkurzacz1;

    int nrprogramuP;
    cout << "Podaj numer prania 1..12 \n";
    cin >> nrprogramuP;
    pralka1.ustawProgram(nrprogramuP);

    odkurzacz1.on();
    odkurzacz1.on();
    odkurzacz1.on();

    odkurzacz1.wyswietlKomunikat("Odkurzacz wyładował się");

    odkurzacz1.off();
    return 0;
}