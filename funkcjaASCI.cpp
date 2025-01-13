#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string wyraz;
    cout << "podaj wyraz: ";
    getline(cin, wyraz);

    int kodAsci, wystapienia;
    char litera;

    for (int i = 0; i < wyraz.length(); i++)
    {
        litera = wyraz[i];
        kodAsci = int(litera);
 
        if (kodAsci >= 0 && kodAsci <= 31 || kodAsci == 127)
        {
            wystapienia++;
        }
    }

    cout<<"W wyrazie sa: "<<wystapienia<<" znakow kontrolnych";
}