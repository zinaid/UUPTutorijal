#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Unesite operator (+, -, *, /): ";
    cin >> oper;
    cout << "Unesite dva broja: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! Operator nije tacan.";
            break;
    }

    return 0;
}