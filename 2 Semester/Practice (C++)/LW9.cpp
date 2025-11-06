// Реализовать цикл while для вычисления значений функции

#include <iostream>
#include <cmath>
using namespace std;

int func1(float a) {
    float y;
    y = - a - 3.0;
    return y;
}

int func2(float a) {
    float y;
    y = sqrt(4.0 - pow(a + 1.0, 2));
    return y;
}

int func3(float a) {
    float y;
    y = sqrt(4.0 - pow(a - 1.0, 2));
    return y;
}

int func4(float a) {
    float y;
    y = -9 / 2. + 3 * a / 2.;
    return y;
}

int main() { 
    float x0, hx, xn, y;
    cout << "Введите х0: ";
    do {
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Введите корректнoе значение\n";
        }
        cin >> x0;
    } while (!cin);
    cout << "Введите hx: ";
    do {
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Введите корректнoе значение\n";
        }
        cin >> hx;
    } while (!cin);
    cout << "Введите хn: ";
    do {
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Введите корректнoе значение\n";
        }
        cin >> xn;
    } while (!cin);
    float x = x0;
    do {
        if (x <= -3) {
            y = func1(x);
        }
        else {
            if ((x > -3) && (x <= -1)) {
                y = func2(x);
            }
            else {
                if ((x > -1) && (x <= 1)) {
                    y = 2.0;
                }
                else {
                    if ((x > 1) && (x <= 3)) {
                        y = func3(x);
                    }
                    else {
                        y = func4(x);
                    }
                }
            }
        }
        cout << "y(" << x << ") = " << y << "\n";
        x += hx;
    } while (x < (xn + hx / 4));
    return 0;
}