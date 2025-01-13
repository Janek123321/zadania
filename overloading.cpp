#include <iostream>
using namespace std;

int powieksz(int parametr1){
    return parametr1++;
}
int powieksz(int parametr1, int parametr2){
    return (parametr1+parametr2);
}
int powieksz(int parametr1, int parametr3){
    return (parametr1+parametr3);
}


int main()
{
    
  int parametr1 = 10;
  int parametr2 = 2;
  int parametr3;
  cin>>parametr3;
  cout<<powieksz(parametr1);
  cout<<powieksz(parametr1);
  cout<<powieksz(parametr1, parametr2);
    
    return 0;
}
