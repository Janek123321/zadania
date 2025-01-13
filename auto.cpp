#include <iostream>
#include <string>
using namespace std;
class Auto
{
private:
    int cena;

public:
    int rokProdukcji;
    string marka;
    string model;
    string nrRej;

    void setCena(int cenaP)
    {
        cena = cenaP;
    }

    int getCena()
    {
        return cena;
    }
};

void ktoryLepszy(Auto auto1, Auto *auto2)
{
    if (auto1.getCena() > auto2->getCena())
    {
        cout << "marka: " << auto1.marka << endl;
        cout << "model: " << auto1.model << endl;
        cout << "numer rejestracyjny: " << auto1.nrRej << endl;
        cout << "rok produkcji : " << auto1.rokProdukcji << endl;
        cout << auto1.getCena();
    }
    else
    {
        cout << "marka: " << auto2->marka << endl;
        cout << "model: " << auto2->model << endl;
        cout << "numer rejestracyjny: " << auto2->nrRej << endl;
        cout << "rok produkcji: " << auto2->rokProdukcji << endl;
        cout << "cena: " << auto2->getCena() << " zl" << endl;
    }
}

int main()
{

    Auto auto1;

    auto1.setCena(30000);
    auto1.marka = "Audi";
    auto1.model = "A3";
    auto1.nrRej = "SCI 12382";
    auto1.rokProdukcji = 2015;

    Auto *w_auto;

    w_auto = new Auto();

    w_auto->setCena(20000);
    w_auto->marka = "BMW";
    w_auto->model = "X5";
    w_auto->nrRej = "SC 239J2";
    w_auto->rokProdukcji = 2010;

    ktoryLepszy(auto1, w_auto);

    return 0;
}

// #include <iostream>
// using namespace std;

// // Definicja klasy Samochod:
// class Samochod
// {
//     float cena;

// public:
//     string marka;
//     string model;
//     string numerRejestracyjny;
//     int rokProdukcji;
//     void setCena()
//     {
//         cin >> cena;
//     }
//     void setMarka()
//     {
//         cin >> marka;
//     }
//     void setModel()
//     {
//         cin >> model;
//     }
//     void setNrRejestracyjny()
//     {
//         cin >> numerRejestracyjny;
//     }
//     void setRokProdukcji()
//     {
//         cin >> rokProdukcji;
//     }
//     float getCena()
//     {
//         return cena;
//     }
//     void wyswietlDane()
//     {
//         cout << "marka: " << marka << endl;
//         cout << "model: " << model << endl;
//         cout << "numer rejestracyjny : " << numerRejestracyjny << endl;
//         cout << "rok produkcji : " << rokProdukcji << endl;
//         cout << "cena : " << cena << endl;
//     }
//     void pobierzDane()
//     {
//         cout << "marka = ";
//         cin >> marka;
//         cout << "model = ";
//         cin >> model;
//         cout << "numer rejestracyjny = ";
//         cin >> numerRejestracyjny;
//         cout << "rok produckji = ";
//         cin >> rokProdukcji;
//         cout << "cena = ";
//         cin >> cena;
//     }
// };

// void drozszySamochod(Samochod *pierwszySamochod, Samochod drugiSamochod)
// {
//     if (pierwszySamochod->getCena() > drugiSamochod.getCena())
//     {
//         pierwszySamochod->wyswietlDane();
//     }
//     else if (drugiSamochod.getCena() > pierwszySamochod->getCena())
//     {
//         drugiSamochod.wyswietlDane();
//     }
//     else
//     {
//         cout << "Remis \n";
//     }
// }

// // PROGRAM GŁÓWNY
// int main()
// {
//     cout << "Aha\n";
//     // Utworzenie obiektu wskazywanego przez wskaźnik w_Samochod jako instancji klasy Samochod:
//     Samochod *w_Samochod = new Samochod();
//     Samochod samochod2;
//     // Pobranie danych Samochoda z klawiatury:
//     w_Samochod->pobierzDane();
//     samochod2.pobierzDane();
//     drozszySamochod(w_Samochod, samochod2);

//     // Usunięcie obiektu wskazywanego przez wskaźnik w_Samochod:
//     delete w_Samochod;
//     return 0;
// }
// // Definicje funkcji zewnętrznych: