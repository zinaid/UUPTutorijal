#include <iostream>
using namespace std;

int main()
{
    struct
    {
        string ime;
        string prezime;
        int godine;
    } osoba1, osoba2;

    cout << "Unesite ime i godine prve osobe" << endl;
    cin >> osoba1.ime;
    cin >> osoba1.godine;

    cout << "Unesite ime i godine druge osobe" << endl;
    cin >> osoba2.ime;
    cin >> osoba2.godine;

    if (osoba2.godine > osoba1.godine)
    {
        cout << "Osoba " << osoba2.ime << " je starija od osobe " << osoba1.ime << endl;
    }
    else
    {
        cout << "Osoba " << osoba1.ime << " je starija od osobe " << osoba2.ime << endl;
    }
}