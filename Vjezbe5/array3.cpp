#include <iostream>
using namespace std;

int main() {
    
  // unos niza
  double niz[] = {11,4,4,6,3};
  double najveci=niz[0];

  cout << "Niz je: ";

  //  ispis sa for each
  for (int i : niz) {
    cout << i << "  ";
    if(i>=najveci){
        najveci = i;
    }
  }

  cout << "Najveci element je " << najveci << endl;

  return 0;
}