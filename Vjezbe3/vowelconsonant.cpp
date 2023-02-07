#include <iostream>
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Unesite slovo: ";
    cin >> c;

    // uzima vrijednost true tj. 1 ako se radi o malom samoglasniku
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // uzima vrijednost true tj. 1 ako se radi o velikom samoglasniku
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // error ako nije slovo
    if (!isalpha(c))
      printf("Error! Ne radi se o slovu.");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " je samoglasnik.";
    else
        cout << c << " je suglasnik.";

    return 0;
}