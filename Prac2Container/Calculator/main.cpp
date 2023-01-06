#include <iostream>
#include <algorithm>
#include <cmath>
#include <complex>
#include "comnum.h"
#include "forloop.h"
#include "ifelse.h"
#include "math_add.h"
#include "Source.h"
#include <array>
#include <vector>
#include <set>
#include <ctime>

long double sum(long double a, long double a1);
long float sub(long float b, long float c);
long double mul(long double d, long double d1);
long double divi(double b1, double b2);

long double math1(long double a, long double b);
long double math2(long double c, long double d);

std::complex<long double> cnum(std::complex<long double> z1, std::complex<long double> z2);

long int ifelse(long int a, long int b);
long int forloop(long int count);

constexpr int test(int t1, int t2) {
    return t1 + t2;
}

using namespace std::complex_literals;
using namespace std;
int main() {
    setlocale(LC_ALL, "ru-ru");
    srand(time(NULL));
    constexpr int c = test(5, 2);
    cout << "Калькулятор" << std::endl;

    cout << "Результат a + a1: " << sum(3,4) << '\n';
    cout << "Результат b - c: " << sub(10, 5.5) << '\n';
    cout << "Результат d * d1: " << mul(12.5, 20.5) << '\n';
    cout << "Результат b1 / b2: " << divi(1.1,2) << '\n';
    cout << "Результат round: " << math1(94.54,2.4) << '\n';
    cout << "Результат floor: " << math2(45.91,2.1) << '\n';
    cout << "Результат i*i: " << cnum(1i,1i) << '\n';
    cout << ifelse(5, 5) << '\n';
    cout << forloop(0) << '\n';
    cout << c << '\n';

    /*array<long double, 7> resArr{sum(3,4),sub(10,5.5),mul(12.5,20.5),divi(1.1,2), math1(94.54,2.4), math2(45.91,2.1), c};

    sort(resArr.begin(), resArr.end());
    for (long double elm: resArr)
        cout << elm << ' ';
    cout << '\n';
    
    cout << "Напишите значение, которое хотите найти: ";
    long double search{};
    cin >> search;
    auto found{ find(resArr.begin(),resArr.end(),search) };
    if (found == resArr.end())
    {
        cout << "Значение не найдено " << '\n';
    }
    else
    {
        cout << "Значение найдено: " << search << '\n';
    }

    cout << " " << endl;

    cout << "Напишите значение, которое хотите удалить и заменить: ";
    long double search2{};
    long double replace2{};
    cin >> search2 >> replace2;
    auto remElm{ remove(resArr.begin(),resArr.end(),search2) };
    if (remElm == resArr.end())
    {
        cout << "Значение не найдено " << '\n';
    }
    else
    {
        *found = replace2;
        cout << "Значение удалено и заменено" << '\n';
    }
    for (long double i : resArr)
        cout << i << ' ';
    cout << '\n';
    
    cout << " " << '\n';

    vector<long double> values = {sum(3,4), sub(10, 5.5), mul(12.5, 20.5) , divi(1.1,2), math1(94.54,2.4), math2(45.91,2.1), c};
    cout << "Вектор значений: " << '\n';
    unsigned int v_size = values.size();
    for (int i = 0; i < v_size; i++) {
        cout << values[i] << ' ';
    }
    cout << " " << '\n';

    int ch;
    cout << "Доступные операции: \n" << "1. Найти и заменить значение \n" 
              << "2. Удалить последнее значение \n" << "3. Удалить и заменить значение \n" 
              << "4. Вывести размер вектора \n" << "5. Просмотреть первую ячейку \n"
              << "Выберите операцию: " << ' ';
    cin >> ch;
    switch (ch) {
    case 1:
    {
        cout << "Напишите значение, которое хотите найти и заменить: ";
        long double search{};
        long double replace{};
        cin >> search >> replace;
        auto found{ find(values.begin(),values.end(),search) };
        if (found == values.end())
        {
            cout << "Значение не найдено " << '\n';
        }
        else
        {
            *found = replace;
            cout << "Значение найдено и заменено: " << replace << '\n';
        }
        for (long double i : values)
            cout << i << ' ';
        cout << '\n';
    }
        break;
    case 2:
        values.pop_back();
        for (long double elm : values) {
            cout << elm << ' ';
        }
        break;
    case 3:
    {
        cout << "Напишите значение, которое хотите удалить и заменить: ";
        long double search2{};
        long double replace2{};
        cin >> search2 >> replace2;
        auto remElm{ remove(values.begin(),values.end(),search2) };
        if (remElm == values.end())
        {
            cout << "Значение не найдено " << '\n';
        }
        else
        {
            *remElm = replace2;
            cout << "Значение удалено и заменено" << '\n';
        }
        for (long double i : values)
            cout << i << ' ';
        cout << '\n';
        break;
    }
    case 4:
        cout << "Размер вектора: " << values.size() << '\n';
        break;
    case 5:
        cout << "Первая ячейка вектора: " << values.front() << "\n";
        break;
    }
    */
    multiset <long double> cht = { sum(3,4), sub(10, 5.5), mul(12.5, 20.5) , divi(1.1,2), math1(94.54,2.4), math2(45.91,2.1), c };
    multiset <long double> ::iterator it1 = cht.begin();
    cout << "Отсортированный контейнер: " << '\n';
    for (int i = 1; it1 != cht.end();i++, it1++) {
        cout << *it1 << " ";
    }
    cout << '\n';
    cout << "Случайные значения: " << '\n';
    for (int i = 0; i < 10; i++) {
        long double random = rand() % 10 + 1;
        cht.insert(random);
        cout << i + 1 << ") " << random << endl;
    }
    multiset <long double> ::iterator it2 = cht.begin();
    cout << "Итоговый и отсортированный вариант: " << '\n';
    for (int i = 1; it2 != cht.end();i++, it2++) {
        cout << *it2 << " ";
    }
    system("pause");
    return 0;
}
