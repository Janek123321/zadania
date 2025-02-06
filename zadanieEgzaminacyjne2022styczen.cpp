#include <iostream>
using namespace std;

class Sort
{
private:
int znajdzMax()
    {
        int maxValue = tablica[0];
        for (int i = 1; i < 10; i++)
        {
            if (tablica[i] > maxValue)
                maxValue = tablica[i];
        }

        max = maxValue;
        return maxValue;
    }
public:
    int tablica[10];
    int max;
    void sortuj()
    {
        int temp;
        for (int i = 0; i < 10 - 1; i++)
        {

            for (int j = 0; j < 10 - 1 - i; j++)
            {

                if (tablica[j] < tablica[j + 1])
                {
                    temp = tablica[j];
                    tablica[j] = tablica[j + 1];
                    tablica[j + 1] = temp;
                }
            }
        }
    }
    int wywolajZnajdzMax(){
        return znajdzMax();
    }
};
int main()
{
    Sort sort1;
    cout << "podaj 10 elementow tablicy: \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> sort1.tablica[i];
    }

    sort1.sortuj();

    for (int i = 0; i < 10; i++)
    {
        cout << sort1.tablica[i] << ", ";
    }

    cout << endl
         << sort1.wywolajZnajdzMax();

    return 0;
}