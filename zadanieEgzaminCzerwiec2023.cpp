#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void wypelnijTablice(bool *tablica[100])
{
    for (int i = 0; i > 100; i++)
    {
       // tablica[i]=true;
    }
}

void znajdz(bool tablica[100]){
    for (int  i = 2; i < 100; i++)
    {
        for (int j = 2; i < 100; i++)
        {
            if(tablica[i*j]==true&&i>pow(i,2))
            tablica[i*j]=false;
        }    
    } 
}

int main()
{
    int n;
    bool *tab = new bool[100];

    //wypelnijTablice(tab);

    //znajdz(tab);

    for (int i = 2; i < 100; i++)
    {
        if (tab[i]==true) 
        cout<<i<<endl;
    }
    
    return 0;
}