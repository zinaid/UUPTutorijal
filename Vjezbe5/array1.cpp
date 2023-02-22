#include <iostream>
using namespace std;

int main() {

  int brojevi[5];

  cout << "Unesite pet brojeva: " << endl;

  //  sprema unos u niz
  for (int i = 0; i < 5; ++i) {
    cin >> brojevi[i];
  }

  cout << "Brojevi su: ";

  //  ispis niza
  for (int n = 0; n < 5; ++n) {
    cout << brojevi[n] << "\t";
  }

  return 0;
}