#include <iostream>
using namespace std;

// rekurzivna funkcija zove sama sebe
int sum(int k)
{
    // Ako proslijedimo negativno k ili 0 vratit će 0, suprotno odradit ce prvi uslov
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = sum(5);
    cout << result;
    return 0;
}