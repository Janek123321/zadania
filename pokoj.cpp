#include <iostream>
using namespace std;

class Pokoj
{
public:
   float sciana1;
   float sciana2;

    Pokoj(float bok1, float bok2){
        sciana1 = bok1;
        sciana2 = bok2;
    }

    Pokoj(const Pokoj &pokoj){
        sciana1 = pokoj.sciana1;
        sciana2 = pokoj.sciana2;
    }

    float pole(){
        return sciana1*sciana2;
    }   

    float obwod(){
        return 2*sciana1+2*sciana2;
    } 
};

int main()
{
    float bok1, bok2;
    cout<<"podaj pierwszy bok: \n";
    cin>>bok1;
    cout<<"podaj drugi bok: \n";
    cin>>bok2;
    Pokoj pokoj1(bok1, bok2);
    cout<<"Pole pokoju 1: "<<pokoj1.pole()<<endl<<"Obwod pokoju 1: "<<pokoj1.obwod()<<endl;

    Pokoj pokoj2(pokoj1);
    cout<<"Pole pokoju 2: "<<pokoj2.pole()<<endl<<"Obwod pokoju 2: "<<pokoj2.obwod()<<endl;

    Pokoj pokoj3(pokoj1);
    cout<<"Pole pokoju 3: "<<pokoj3.pole()<<endl<<"Obwod pokoju 3: "<<pokoj3.obwod()<<endl;

    Pokoj pokoj4(pokoj1);
    cout<<"Pole pokoju 4: "<<pokoj4.pole()<<endl<<"Obwod pokoju 4: "<<pokoj4.obwod()<<endl;

    return 0;
}