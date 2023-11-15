#include <iostream>
using namespace std;
int sequence(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else if (n == 2)
    {
        return 1;
    }

    else
    {
        return sequence(n - 1) * sequence(n - 1) - sequence(n - 2) * sequence(n - 2);
    }
}
int main()
{
    cout << sequence(3);
    return 0;
}