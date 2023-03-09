#include <iostream>
using namespace std;

void ispisniza(int niz[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << niz[i];
    }
}

int main()
{
    // deklaracija niza
    int niz[] = {
        6,
        1,
        2,
        3,
        4};

    // poziv funkcije i proslijeđivanje niza
    ispisniza(niz);
}