#include <iostream>
using namespace std;

int main()
{
        //PETLA WHILE
    // double a,b;
    // cout<<"podaj 2 liczby a ja je podziele"<<endl;
    // cin>>a>>b;
    // while (b==0)
    // {
    //     cout<<"podaj druga liczbe rozna od zera\n";
    //     cin>>b;
    // }
    // cout<<"wynik dzielenia: "<<a/b;

        //PETLA DO WHILE
    // double a,b;
    // cout<<"Podaj pierwsza liczbe"<<endl;
    // cin>>a;
    // do
    // {
    //     cout<<"podaj druga liczbe rozna od zera\n";
    //     cin>>b;
    // } while (b==0);
    // cout<<"wynik dzielenia podanych lcizb: "<<a/b;


        //PETLA FOR
    double a,b;
    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe rozna od zera: ";
    cin>>b;
    for (int i; b == 0; i++)
    {
        cout<<"podaj druga liczbe rozna od zera\n";
        cin>>b;
    }
    cout<<"wynik dzielenia podanych lcizb: "<<a/b;
    

return 0;
}