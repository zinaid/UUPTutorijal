#include <iostream>
using namespace std;

int main()
{
    struct Osoba
    {
        string ime;
        string prezime;
        int godine;
    };

    Osoba osoba;
    cout << "Unesite ime osobe" << endl;
    cin >> osoba.ime;
    cout << "Unesite prezime osobe" << endl;
    cin >> osoba.prezime;
    cout << "Unesite godine osobe" << endl;
    cin >> osoba.godine;
    string puno_ime = osoba.ime + " " + osoba.prezime;
    cout << "Radi se o: " << puno_ime << endl;
    return 0;
}