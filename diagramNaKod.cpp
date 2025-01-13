#include <iostream>
using namespace std;

class motor
{
private:
    bool czyDwusuw;
    bool czyCross;
    float pojemnosc = 350;
    int pojBaku;

public:
    string kolor;
    bool czyLyse;
    float ilePaliwa;

    motor()
    {
        czyDwusuw = true;
        czyCross = false;
        pojemnosc = 350;
        pojBaku = 100;
        kolor = "czerwony";
        czyLyse = false;
        ilePaliwa = 20;
    }

    void tankuj(float ileDolac)
    {
        float paliwoPoDolaniu = ilePaliwa + ileDolac;

        if (paliwoPoDolaniu >= pojemnosc)
        {
            ilePaliwa = pojemnosc;
        }
        else
        {
            ilePaliwa = paliwoPoDolaniu;
        }
    }

    void setCzyDwusuw(bool dwusuw)
    {
        czyDwusuw = dwusuw;
    }

    void setCzyCross(bool cross)
    {
        czyCross = cross;
    }

    void setPojBaku(int podanaPojBaku)
    {
        pojBaku = podanaPojBaku;
    }
    int getPojBaku()
    {
        return pojBaku;
    }

    void getCzyDwusuw(bool &dwusuw)
    {
        dwusuw = czyDwusuw;
    }

    bool getCzyCross()
    {
        return czyCross;
    }

    void getPojemnosc(int &poj)
    {
        poj = pojemnosc;
    }

    bool czyTymPojade()
    {
        if (kolor == "czerwony" && czyDwusuw == true && czyLyse == false)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool czyNadajeSie()
    {
        if (ilePaliwa > 10)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void ktoryLepszy(motor motor1, motor motor2)
{
    if (motor1.kolor == "czerwony" && motor2.kolor != "czerwony")
    {
        cout << "pierwszy motor jest lepszy";
    }

    else if (motor1.kolor != "czerwony" && motor2.kolor == "czerwony")
    {
        cout << "drugi motor jest lepszy";
    }
    else if (motor1.kolor == "czerwony" && motor2.kolor == "czerwony")
    {
        cout << "sa tak samo dobre";
    }
    else
    {
        cout << "zaden nie jest dobry";
    }
}

int main()
{
    motor motor1, motor2;
    bool czyDwusuw, czyCross, czyLyse;
    float pojemnosc, ilePaliwa, ileDolac, poj;
    string kolor;
    int pojBaku;

    cout << "Podaj pierwszy motor \n czy dwusuw? wpisz 0 jesli nie lub 1 jesli tak: \n";
    cin >> czyDwusuw;

    cout << "czy cross? wpisz 0 jesli nie lub 1 jesli tak: \n";
    cin >> czyCross;

    cout << "czy opony sa lyse? wpisz 0 jesli nie lub 1 jesli tak: \n";
    cin >> czyLyse;

    cout << "podaj pojemnosc baku: \n";
    cin >> pojBaku;

    cout << "ile masz paliwa jak wsiadasz? \n";
    cin >> ilePaliwa;

    cout << "jaki kolor? \n";
    cin >> kolor;

    motor1.setCzyDwusuw(czyDwusuw);
    motor1.setCzyCross(czyCross);
    motor1.kolor = kolor;
    motor1.setPojBaku(pojBaku);
    motor1.czyLyse = czyLyse;
    motor1.ilePaliwa = ilePaliwa;

    if (motor1.czyTymPojade())
    {
        cout << "Pojadziesz" << endl;
    }
    else
    {
        cout << "nie pojadziesz" << endl;
    }

    if (motor1.czyNadajeSie())
    {
        cout << "masz dosc paliwa" << endl;
    }
    else
    {
        cout << "braknie ci paliwa" << endl;
    }

    cout << "ile paliwa dolac?\n";
    cin >> ileDolac;
    cout << "ilosc paliwa przed tankowaniem: ";
    cout << motor1.ilePaliwa;
    motor1.tankuj(ileDolac);
    cout << " ilosc paliwa po dolaniu: \n";
    cout << motor1.ilePaliwa;

    cout << "Podaj drugi motor\n";
    cout << "czy dwusuw? wpisz 0 jesli nie lub 1 jesli tak: \n";
    cin >> czyDwusuw;

    cout << "czy cross? wpisz 0 jesli nie lub 1 jesli tak: \n";
    cin >> czyCross;

    cout << "czy opony sa lyse? wpisz 0 jesli nie lub 1 jesli tak: \n";
    cin >> czyLyse;

    cout << "podaj pojemnosc baku: \n";
    cin >> pojBaku;

    cout << "ile masz paliwa jak wsiadasz? \n";
    cin >> ilePaliwa;

    cout << "jaki kolor? \n";
    cin >> kolor;

    motor2.setCzyDwusuw(czyDwusuw);
    motor2.setCzyCross(czyCross);
    motor2.kolor = kolor;
    motor2.setPojBaku(pojBaku);
    motor2.czyLyse = czyLyse;
    motor2.ilePaliwa = ilePaliwa;

    if (motor2.czyTymPojade())
    {
        cout << "Pojadziesz" << endl;
    }
    else
    {
        cout << "nie pojadziesz" << endl;
    }

    if (motor2.czyNadajeSie())
    {
        cout << "masz dosc paliwa" << endl;
    }

    else
    {
        cout << "braknie ci paliwa" << endl;
    }

    cout << "ile paliwa dolac?\n";
    cin >> ileDolac;
    cout << "ilosc paliwa przed tankowaniem: ";
    cout << motor2.ilePaliwa;
    motor2.tankuj(ileDolac);
    cout << " ilosc paliwa po dolaniu: \n";
    cout << motor2.ilePaliwa;

    ktoryLepszy(motor1, motor2);

    return 0;
}