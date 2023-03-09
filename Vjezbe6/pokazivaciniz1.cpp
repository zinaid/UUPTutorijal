#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 2, 13};

    // deklaracija pokazivaca
    int *ptr;

    cout << "Prikaz vrijednosti koristeci nizove: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout << "\nPrikaz vrijednosti koristeci pokazivace: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = " << *(ptr + i) << endl;
    }

    return 0;
}