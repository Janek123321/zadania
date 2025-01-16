#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T srednia(T liczba) {
    cout<<"Podana liczba to int"<<endl;
return 0 ;
}
template <>
double srednia(double liczba) {
  cout<<"Podana liczba to double"<<endl;
return 0;

}
template <>
float srednia(float liczba) {
  cout<<"Podana liczba to flaot"<<endl;
return 0;
}

int main() {

srednia(1);

srednia(4.0);

srednia<float>(4);

return 0;
}