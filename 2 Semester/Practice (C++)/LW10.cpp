// Разработать алгоритм и программу, определяющую сумму ряда с заданной погрешностью
// для произвольного заданного аргумента
// Определить число повторений итерационного цикла

#include <iostream>
#include <cmath>
using namespace std;

int factorial(float a) {
    float i, b;
    b = 1;
    for (i=2; i<=a; i++) {
        b *= i;
    }
    return b;
}
int main() {
    float x, eps, S, n;
    cout << "Введите х: ";
    do {
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Введите корректнoе значение\n";
        }
        cin >> x;
    } while (!cin);
    cout << "Введите погрешность: ";
    do {
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Введите корректнoе значение\n";
        }
        cin >> eps;
    } while (!cin);
    S = 0;
    n = 0;
    do {
        S += pow(x, n)*1.0/factorial(n);
        n++;
    } while (S < eps); 
        cout << "Число итераций = " << n << endl;
        cout << "Сумма ряда = " << S;
}