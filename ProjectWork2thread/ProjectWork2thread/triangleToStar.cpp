#include <iostream>

using namespace std;

void triangleToStar() {
    double R1, R2, R3, R_a, R_b, R_c;

    cout << "R1: ";
    cin >> R1;

    cout << "R2: ";
    cin >> R2;

    cout << "R3: ";
    cin >> R3;

    R_a = sqrt(R1 * R2 + R2 * R3 + R3 * R1);
    R_b = R1 * R2 + R2 * R3 + R3 * R1 / (R1 + R2 + R3);
    R_c = R_a;

    cout << "R_a = " << R_a << " Ohm\n";
    cout << "R_b = " << R_b << " Ohm\n";
    cout << "R_c = " << R_c << " Ohm\n";
}