#include <iostream>
#include <cmath>
#include <thread>

#include "volDiv.h"
#include "triangleToStar.h"

using namespace std;

void volDiv();
void reaImp();
void triangleToStar();
void acPower();

int main()
{
    setlocale(LC_ALL, "");

    cout << "********* Расчет электронных компонентов *********\n\n";

    int state;
    cout << "[1] Расчет делителя напряжения;\n[2] Расчет реактивного сопротивления;\n[3] Преобразование сопротивлений из треугольника в звезду;\n[4] Расчет мощности переменного тока;\n\n";
    cout << "Введите что вы хотите рассчитать: ";
    cin >> state;

    switch (state)
    {
    case 1:
    {
        thread tvolDiv(volDiv);
        tvolDiv.join();

        return 0;
        break;
    }
    case 2:
    {
        thread treaImp(reaImp);
        treaImp.join();

        return 0;
        break;
    }
    case 3:
    {
        thread ttriangleToStar(triangleToStar);
        ttriangleToStar.join();

        return 0;
        break;
    }
    case 4:
    {
        thread tacPower(acPower);
        tacPower.join();

        return 0;
        break;
    }

    default:
        cout << "Неверное значение";
        break;
    }
}
