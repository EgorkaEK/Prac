#include <iostream>

using namespace std;

void reaImp() {
    double X_L, X_C, X_R;

    cout << "X_L: ";
    cin >> X_L;

    cout << "X_C: ";
    cin >> X_C;

    X_R = sqrt(pow(X_L, 2) - pow(X_C, 2));

    cout << "X_R = " << X_R << " Ohm";
}