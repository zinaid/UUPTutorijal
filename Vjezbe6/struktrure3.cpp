#include <iostream>
using namespace std;

int main()
{
    struct Student
    {
        char ime[50];
        char prezime[50];
        double prosjek;
    };

    int n;
    cout << "Koji je broj studenata: " << endl;
    cin >> n;
    Student studenti[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Unesite ime studenta";
        cin >> studenti[i].ime;
        cout << "Unesite prezime studenta";
        cin >> studenti[i].prezime;
        cout << "Unesite prosjek studenta";
        cin >> studenti[i].prosjek;
    }
    double max = 0;
    int maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (studenti[i].prosjek > max)
        {
            max = studenti[i].prosjek;
            maxIndex = i;
        }
    }

    cout << "Student sa najvećim prosjekom je " << studenti[maxIndex].ime << " " << studenti[maxIndex].prezime << " i taj prosjek je: " << studenti[maxIndex].prosjek << endl;
}