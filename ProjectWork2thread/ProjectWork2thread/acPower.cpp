#include <iostream>

using namespace std;

void acPower() {

    double P, V, I;

    cout << "V: ";
    cin >> V;

    cout << "I: ";
    cin >> I;

    P = V * I;

    cout << "Мощность: " << P << " ватт";
}