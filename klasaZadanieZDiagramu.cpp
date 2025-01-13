#include <iostream>
#include <string>
using namespace std;

class Jajo
{
private:
    string kod;
    int typChowu;
    string krajPochodzenia;
    string reszta;
    static int liczbaJaj;

public:
    void setKod(string kodP)
    {
        kod = kodP;

        typChowu = kod[0];

        for (int i = 1; i < 3; i++)
        {
            krajPochodzenia = krajPochodzenia + kod[i];
        }

        for (int i = 3; i < kod.length(); i++)
        {
            reszta = reszta + kod[i];
        }
    }

    string getTypChowuSlownie()
    {

        string typChowuSlownie;

        if (typChowu == 48)
        {
            typChowuSlownie = "ekologiczny";
        }
        else if (typChowu == 49)
        {
            typChowuSlownie = "na wolnym wybiegu";
        }
        else if (typChowu == 50)
        {
            typChowuSlownie = "sciulkowy";
        }
        else if (typChowu == 51)
        {
            typChowuSlownie = "klatkowy";
        }
        else{
            typChowuSlownie = "podano zly kod jajka";
        }

        return typChowuSlownie;
    }

    Jajo(string kodP)
    {
        kod = kodP;
        liczbaJaj++;
    }

    void print()
    {
        cout << "typ chowu: " << getTypChowuSlownie() << endl;
        cout << "kraj pochodzenia: " << krajPochodzenia << endl;
        cout << "reszta: " << reszta << endl;
        cout << "liczba jaj: " << liczbaJaj;
    }
};

int Jajo::liczbaJaj = 0;
int main()
{
    string kodP;
    cout << "Podaj kod jaja: \n";
    cin >> kodP;

    Jajo jajo1(kodP);
    Jajo jajo2("0US891822");
    Jajo jajo3("1PL283912");
    Jajo jajo4("2GB123921");
    
    jajo1.setKod(kodP);

    jajo1.print();

    return 0;
}
