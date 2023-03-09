#include <iostream>
using namespace std;

int main()
{
    string hrana = "Burek";
    string &obrok = hrana;

    cout << "Vrijednost varijable je: " << endl;
    cout << hrana << endl;
    cout << "Vrijednost memorijske adrese varijable je: " << endl;
    cout << &hrana << endl;

    cout << "Vrijednost druge varijable je: " << endl;
    cout << obrok << endl;
    cout << "Vrijednost memorijske adrese druge varijable je: " << endl;
    cout << &obrok << endl;
    return 0;
}