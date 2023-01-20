#include <iostream>

using namespace std;

int main(){
    // Ovdje pokazujemo tab escape sekvencu
    cout<<"Ovdje je tab \t";
    cout<<", a ovdje rečenica nastavlja. \t"<<endl;

    cout<<"Ovdje je dodan backslash \\"; // Ovdje smo ispisali backslash
    cout<<", a ovdje rečenica nastavlja."<<endl;

    /*
    Ovdje smo koristili navodnike jer nekad imamo potrebu
    za ispisom navodnika.
    */
    cout<<"Nekad trebamo koristiti i \"navodnike\".";
    return 0;
}