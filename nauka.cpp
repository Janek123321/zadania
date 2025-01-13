#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string przeksztalcNapis(const string& wejscie) {

    size_t pozycjaSpacji = wejscie.find(' ');
    if (pozycjaSpacji == string::npos) {

        return wejscie;
    }


    string pierwszyCzlon = wejscie.substr(0, pozycjaSpacji);
    string drugiCzlon = wejscie.substr(pozycjaSpacji + 1);

    string wynik = drugiCzlon + " " + pierwszyCzlon;

    wynik[0] = toupper(wynik[0]);
    wynik[wynik.size() - 1] = toupper(wynik[wynik.size() - 1]);


    for (size_t i = 0; i < wynik.size(); ++i) {
        if (wynik[i] == 'A' || wynik[i] == 'a') {
            wynik.insert(i, 1, '%');
            ++i; // 
        }
    }

    return wynik;
}

int main() {
    string wejscie;
    cout << "Podaj napis dwuczłonowy: ";
    getline(cin, wejscie);

    string przeksztalconyNapis = przeksztalcNapis(wejscie);
    cout << "Przekształcony napis: " << przeksztalconyNapis << endl;

    return 0;
}