#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, diskriminanta, realniDio, imaginarniDio;
    cout << "Unesite koeficijente a, b i c:"<<endl;
    cin >> a >> b >> c;
    diskriminanta = b*b - 4*a*c;
    
    if (diskriminanta > 0) {
        x1 = (-b + sqrt(diskriminanta)) / (2*a);
        x2 = (-b - sqrt(diskriminanta)) / (2*a);
        cout << "Korijeni su realni i razliciti." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (diskriminanta == 0) {
        cout << "Korijeni su realni i isti." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realniDio = -b/(2*a);
        imaginarniDio =sqrt(-diskriminanta)/(2*a);
        cout << "Korijeni su kompleksni i razliciti."  << endl;
        cout << "x1 = " << realniDio << "+" << imaginarniDio << "i" << endl;
        cout << "x2 = " << realniDio << "-" << imaginarniDio << "i" << endl;
    }

    return 0;
}