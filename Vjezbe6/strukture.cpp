#include <iostream>
using namespace std;

int main()
{
    struct
    {
        string name;
        int godine;
    } osoba;

    // Dodijeljivanje vrijednosti
    osoba.name = "Zinaid";
    osoba.godine = 26;

    cout << "Osoba je " << osoba.name << " i ima " << osoba.godine << " godina";

    return 0;
}