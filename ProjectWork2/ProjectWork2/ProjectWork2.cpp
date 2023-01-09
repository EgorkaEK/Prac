#include <iostream>

float calcVoltage(float resistance, float current)
{
    return resistance * current;
}

int main()
{
    float resistance, current;

    setlocale(LC_ALL, "");

    std::cout << "Введите сопротивление: ";
    std::cin >> resistance;

    std::cout << "Введите ток: ";
    std::cin >> current;

    float voltage = calcVoltage(resistance, current);

    std::cout << "Напряжение: " << voltage << " V" << std::endl;

    return 0;
}
