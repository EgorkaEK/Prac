#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int state;
    cout << "Number Task: ";
    cin >> state;
    switch (state)
    {
    case 1:
    {
        int y;
        cout << "y: ";
        cin >> y;
        double t = sqrt(abs(6 * y * 6 * y - 0.1 * y + 4));
        std::cout << "T= " << t << std::endl;
        return 0;
        break;
    }
    case 2:
    {
        int y, t;
        cout << "y: ";
        cin >> y;
        cout << "t: ";
        cin >> t;
        double resultT = 2.37 * sin(t + 1) / sqrt(4 * y * 4 * y - 0.1 * y + 5);
        std::cout << "T= " << resultT << std::endl;
        return 0;
        break;
    }
    case 3:
    {
        int a, c, x, y;
        cout << "a: ";
        cin >> a;
        cout << "c: ";
        cin >> c;
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;
        double resultP = pow(a, 5) + pow(sin(y - c), 4) / pow(sin(x + y), 3) + abs(x - y);
        std::cout << "P= " << resultP << std::endl;
        return 0;
        break;
    }
    case 4:
    {
        const double g = 9.81;
        const double PI = 3.141592653589793;
        double l;
        cout << "l: ";
        cin >> l;
        double resultt = 2 * PI * sqrt(l / g);
        std::cout << "t= " << resultt << std::endl;
        return 0;
        break;
    }
    case 5:
    {
        const double b = 2.2;
        const double c = 3.7;
        double a = sin(b);
        double x = a + pow((b + c), 3);
        double y = 7 * pow(exp(1), sqrt(abs(x))) + pow(cos(x), 4);
        std::cout << "a= " << a << std::endl;
        std::cout << "x= " << x << std::endl;
        std::cout << "y= " << y << std::endl;
        return 0;
        break;
    }
    case 6:
    {
        int x;
        cout << "x: ";
        cin >> x;
        const double PI = 3.141592653589793;
        double sum = 0;
        double res = x * sin(PI / 4);
        while (fabs(res) >= 1e-6) {
            sum += res;
            res += x * sin(PI / 4);
            std::cout << "Result= " << res << std::endl;
        }
        return 0;
        break;
    }
    default:
        std::cout << "Wrong number" << std::endl;
    }
}