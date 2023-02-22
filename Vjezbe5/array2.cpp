#include <iostream>
using namespace std;

int main() {
    
  // unos niza
  double niz[] = {1,4,4,6,3};

  double suma = 0;
  double brojac = 0;
  double prosjek;

  cout << "Niz je: ";

  //  ispis sa for each
  for (int i : niz) {
    cout << i << "  ";

    //  racunanje sume
    suma += i;

    // uvecavanje brojaca
    ++brojac;
  }

  cout << "Suma je = " << suma << endl;

  // prosjek
  prosjek = suma / brojac;
  cout << "Prosjek = " << prosjek << endl;

  return 0;
}