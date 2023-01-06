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
    cout << "�����������" << std::endl;

    cout << "��������� a + a1: " << sum(3,4) << '\n';
    cout << "��������� b - c: " << sub(10, 5.5) << '\n';
    cout << "��������� d * d1: " << mul(12.5, 20.5) << '\n';
    cout << "��������� b1 / b2: " << divi(1.1,2) << '\n';
    cout << "��������� round: " << math1(94.54,2.4) << '\n';
    cout << "��������� floor: " << math2(45.91,2.1) << '\n';
    cout << "��������� i*i: " << cnum(1i,1i) << '\n';
    cout << ifelse(5, 5) << '\n';
    cout << forloop(0) << '\n';
    cout << c << '\n';

    /*array<long double, 7> resArr{sum(3,4),sub(10,5.5),mul(12.5,20.5),divi(1.1,2), math1(94.54,2.4), math2(45.91,2.1), c};

    sort(resArr.begin(), resArr.end());
    for (long double elm: resArr)
        cout << elm << ' ';
    cout << '\n';
    
    cout << "�������� ��������, ������� ������ �����: ";
    long double search{};
    cin >> search;
    auto found{ find(resArr.begin(),resArr.end(),search) };
    if (found == resArr.end())
    {
        cout << "�������� �� ������� " << '\n';
    }
    else
    {
        cout << "�������� �������: " << search << '\n';
    }

    cout << " " << endl;

    cout << "�������� ��������, ������� ������ ������� � ��������: ";
    long double search2{};
    long double replace2{};
    cin >> search2 >> replace2;
    auto remElm{ remove(resArr.begin(),resArr.end(),search2) };
    if (remElm == resArr.end())
    {
        cout << "�������� �� ������� " << '\n';
    }
    else
    {
        *found = replace2;
        cout << "�������� ������� � ��������" << '\n';
    }
    for (long double i : resArr)
        cout << i << ' ';
    cout << '\n';
    
    cout << " " << '\n';

    vector<long double> values = {sum(3,4), sub(10, 5.5), mul(12.5, 20.5) , divi(1.1,2), math1(94.54,2.4), math2(45.91,2.1), c};
    cout << "������ ��������: " << '\n';
    unsigned int v_size = values.size();
    for (int i = 0; i < v_size; i++) {
        cout << values[i] << ' ';
    }
    cout << " " << '\n';

    int ch;
    cout << "��������� ��������: \n" << "1. ����� � �������� �������� \n" 
              << "2. ������� ��������� �������� \n" << "3. ������� � �������� �������� \n" 
              << "4. ������� ������ ������� \n" << "5. ����������� ������ ������ \n"
              << "�������� ��������: " << ' ';
    cin >> ch;
    switch (ch) {
    case 1:
    {
        cout << "�������� ��������, ������� ������ ����� � ��������: ";
        long double search{};
        long double replace{};
        cin >> search >> replace;
        auto found{ find(values.begin(),values.end(),search) };
        if (found == values.end())
        {
            cout << "�������� �� ������� " << '\n';
        }
        else
        {
            *found = replace;
            cout << "�������� ������� � ��������: " << replace << '\n';
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
        cout << "�������� ��������, ������� ������ ������� � ��������: ";
        long double search2{};
        long double replace2{};
        cin >> search2 >> replace2;
        auto remElm{ remove(values.begin(),values.end(),search2) };
        if (remElm == values.end())
        {
            cout << "�������� �� ������� " << '\n';
        }
        else
        {
            *remElm = replace2;
            cout << "�������� ������� � ��������" << '\n';
        }
        for (long double i : values)
            cout << i << ' ';
        cout << '\n';
        break;
    }
    case 4:
        cout << "������ �������: " << values.size() << '\n';
        break;
    case 5:
        cout << "������ ������ �������: " << values.front() << "\n";
        break;
    }
    */
    multiset <long double> cht = { sum(3,4), sub(10, 5.5), mul(12.5, 20.5) , divi(1.1,2), math1(94.54,2.4), math2(45.91,2.1), c };
    multiset <long double> ::iterator it1 = cht.begin();
    cout << "��������������� ���������: " << '\n';
    for (int i = 1; it1 != cht.end();i++, it1++) {
        cout << *it1 << " ";
    }
    cout << '\n';
    cout << "��������� ��������: " << '\n';
    for (int i = 0; i < 10; i++) {
        long double random = rand() % 10 + 1;
        cht.insert(random);
        cout << i + 1 << ") " << random << endl;
    }
    multiset <long double> ::iterator it2 = cht.begin();
    cout << "�������� � ��������������� �������: " << '\n';
    for (int i = 1; it2 != cht.end();i++, it2++) {
        cout << *it2 << " ";
    }
    system("pause");
    return 0;
}
