#include <iostream>
using namespace std;

class Kostka
{
public:
    int liczbaRzutow;
    int *wynikiRzutow = new int[liczbaRzutow];

    void ileRzutow(int liczbaRzotowP)
    {
        liczbaRzutow = liczbaRzotowP;
    }

    void rzut()
    {
        srand(time(NULL));
        for (int i = 0; i < liczbaRzutow; i++)
        {
            wynikiRzutow[i] = rand() % 6 + 1;
        }
    }

    int sumaPunktow()
    {
        int suma = 0;
        int ileJedynek = 0, ileDwojek = 0, ileTrojek = 0, ileCzworek = 0, ilePiatek = 0, ileSzostek = 0;
        for (int i = 0; i < liczbaRzutow; i++)
        {
            if (wynikiRzutow[i] == 1)
            {
                ileJedynek++;
            }
            else if (wynikiRzutow[i] == 2)
            {
                ileDwojek++;
            }
            else if (wynikiRzutow[i] == 3)
            {
                ileTrojek++;
            }
            else if (wynikiRzutow[i] == 4)
            {
                ileCzworek++;
            }
            else if (wynikiRzutow[i] == 5)
            {
                ilePiatek++;
            }
            else if (wynikiRzutow[i] == 6)
            {
                ileSzostek++;
            }
        }

        if (ileJedynek > 1)
        {
            suma = suma + (ileJedynek * 1);
        }
        if (ileDwojek > 1)
        {
            suma = suma + (ileDwojek * 2);
        }
        if (ileTrojek > 1)
        {
            suma = suma + (ileTrojek * 3);
        }
        if (ileCzworek > 1)
        {
            suma = suma + (ileCzworek * 4);
        }
        if (ilePiatek > 1)
        {
            suma = suma + (ilePiatek * 5);
        }
        if (ileSzostek > 1)
        {
            suma = suma + (ileSzostek * 6);
        }

        return suma;
    }
};

int main()
{
    char czyGrac;
    int ileRzutowP;
    do
    {
        do
        {
            cout << "Ile kostek chcesz rzucic?(3-10)\n";
            cin >> ileRzutowP;
        } while (ileRzutowP < 3 || ileRzutowP > 10);

        Kostka kostka1;
        kostka1.liczbaRzutow = ileRzutowP;

        kostka1.rzut();

        for (int i = 0; i < ileRzutowP; i++)
        {
            cout << "Kostka " << i + 1 << ": " << kostka1.wynikiRzutow[i] << endl;
        }

        cout << "Liczba wszytskich uzyskaznych punktow: " << kostka1.sumaPunktow() << endl;

        cout << "jeszcze raz? (t/n)\n";
        cin >> czyGrac;

    } while (czyGrac == 't');
    return 0;
}