#include <iostream>
#include <cmath>

double volDiv(double R1, double R2, double Uin) {
    return Uin * R2 / (R1 + R2);
}

double reaImp(double X_L, double X_C) {
    return sqrt(pow(X_L, 2) - pow(X_C, 2));
}

void triangleToStar(double R1, double R2, double R3, double &R_a, double &R_b, double &R_c) {
    R_a = sqrt(R1 * R2 + R2 * R3 + R3 * R1);
    R_b = R1 * R2 + R2 * R3 + R3 * R1 / (R1 + R2 + R3);
    R_c = R_a;
}

int main()
{
    setlocale(LC_ALL, "");

    std::cout << "********* Расчет электронных компонентов *********\n\n";

    int state;
    std::cout << "[1] Расчет делителя напряжения;\n[2] Расчет реактивного сопротивления;\n[3] Преобразование сопротивлений из треугольника в звезду;\n[4] Расчет мощности переменного тока;\n\n";
    std::cout << "Введите что вы хотите рассчитать: ";
    std::cin >> state;

    switch (state)
    {
    case 1:
    {
        double R1, R2, Uin;

        std::cout << "R1: ";
        std::cin >> R1;

        std::cout << "R2: ";
        std::cin >> R2;

        std::cout << "Uin: ";

        std::cin >> Uin;

        double Uout = volDiv(R1, R2, Uin);

        std::cout << "Uout = " << Uout << " V" << std::endl;

        return 0;

        break;
    }
    case 2:
    {
        double X_L,X_C;

        std::cout << "X_L: ";
        std::cin >> X_L;

        std::cout << "X_C: ";
        std::cin >> X_C;

        double X_R = reaImp(X_L, X_C);

        std::cout << "X_R = " << X_R << " Ohm" << std::endl;

        return 0;

        break;
    }
    case 3:
    {
        double R1, R2, R3, R_a, R_b, R_c;

        std::cout << "R1: ";
        std::cin >> R1;

        std::cout << "R2: ";
        std::cin >> R2;

        std::cout << "R3: ";
        std::cin >> R3;

        triangleToStar(R1, R2, R3, R_a, R_b, R_c);

        std::cout << "R_a = " << R_a << " Ohm" << std::endl;
        std::cout << "R_b = " << R_b << " Ohm" << std::endl;
        std::cout << "R_c = " << R_c << " Ohm" << std::endl;

        return 0;

        break;
    }
    case 4:
    {
        double P, V, I;

        std::cout << "V: ";
        std::cin >> V;

        std::cout << "I: ";
        std::cin >> I;

        P = V * I;

        std::cout << "Мощность: " << P << " ватт" << std::endl;

        return 0;

        break;
    }

    default:
        std::cout << "Неверное значение";
        break;
    }
}
