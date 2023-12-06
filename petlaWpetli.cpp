#include <iostream>
using namespace std;

int main()
{
    char a;
    int i = 0;
    cout << "Podaj znak a ja wypisze go 15 razy: " << endl;
    cin >> a;
    for (i = 0; i < 15; i++)
    {
        cout << a << " ";
    }
    cout << endl;

    i = 0;
    while (i < 15)
    {
        cout << a << " ";
        i++;
    }
    cout << endl;

    i = 0;
    do
    {
        cout << a << " ";
        i++;
    } while (i < 15);
        
    return 0;
}
