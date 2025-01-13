#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1, s2, s3, s4;
    cout << "Podaj dwuczlonowy wyraz: \n";
    getline(cin, s1);

    s2 = s1.substr(s1.find(" ") + 1, s1.length());
    s2 = s2 + " ";
    s3 = s1.substr(0, s1.find(" "));
    s4 = s2 + s3;

    s4[0] = toupper(s4[0]);
    s4[s4.length() - 1] = toupper(s4[s4.length() - 1]);

    for (int i = 0; i < s4.length(); i++)
    {
        if (s4[i] == 'A' || s4[i] == 'a')
        {
            s4.insert(i, 1, '%');
            i++;
        }
    }

    cout << s4;

    return 0;
}