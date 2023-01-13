#include <iostream>

using namespace std;

void volDiv() {
    double R1, R2, Uin, Uout;
    cout << "R1: ";
    cin >> R1;

    cout << "R2: ";
    cin >> R2;

    cout << "Uin: ";

    cin >> Uin;

    Uout = Uin * R2 / (R1 + R2);

    cout << "Uout = " << Uout << " V";
}