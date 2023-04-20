#include <iostream>
using namespace std;

int main()
{

    char gender;
    cout<<"Wpisz litere K lub M a napisze ci jakiej jestes plci: "<<endl;
    cin>>gender;

    if(gender=='k' || gender=='K') {
        cout<<"Jestes kobieta";
    }

    else if(gender=='m' || gender=='M') {
        cout<<"Jestes mezczyzna";
    }

    else {
        cout<<"no gender";
    }

return 0;
}