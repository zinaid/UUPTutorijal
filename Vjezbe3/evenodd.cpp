#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Unesite integer: ";
  cin >> n;
    
  (n % 2 == 0) ? cout << n << " je paran." :  cout << n << " je neparan.";
    
  return 0;
}