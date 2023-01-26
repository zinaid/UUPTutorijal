/*
SETUP VS CODE FOR TERMINAL INPUT
File > Preferences > Settings
Check: code-runner: Run in terminal
*/

#include <iostream>

using namespace std;

int main(){
    int x, y;
    int sum;
    cout << "Unesi broj: ";
    cin >> x;
    cout << "Unesi drugi broj: ";
    cin >> y;
    sum = x + y;
    cout << "Suma je: " << sum;
    return 0;
}