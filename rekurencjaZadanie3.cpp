// #include <iostream>
// using namespace std;
// double sequence(double n)
// {
//     if (n == 0.0)
//     {
//         return 1.0;
//     }
//     else if (n == 1.0)
//     {
//         return 2.0;
//     }
//     else
//     {
//         return (sequence(n - 1.0) + 2.0 * (sequence(n - 2.0))) / 2.0;
//     }
// }
// int main()
// {
//     double wyrazCiagu;
//     cout<<"podaj wyraz ciagu: \n";
//     cin>>wyrazCiagu;
//     cout << sequence(wyrazCiagu);
//     return 0;
// }
#include <iostream>
using namespace std;
int sequence(int n, int x)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {
        return sequence(n - 1, x) * sequence(1, x);
    }
}
int main()
{
    int x;
    int n;
    cout << "podaj liczbe: \n";
    cin >> x;

    cout << "podaj potege: \n";
    cin >> n;

    cout << sequence(n, x);
    return 0;
}