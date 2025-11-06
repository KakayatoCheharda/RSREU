// Составить линейный алгоритм и программу, в которой
// вводятся исходные данные, вычисляются заданные 
// арифмитеские выражения и выводятся на экран дисплея результаты

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float y, z, x, a0, a1;
    cout << "Введите х: ";
    cin >> x;
    cout << "Введите а0: ";
    cin >> a0;
    cout << "Введите а1: ";
    cin >> a1;
    y = sqrt(a0 + a1 * x * x) + 2 * pow(x, 5) + (0.13725 * pow(10, -3) + a0 * a0) / (2 + pow(sin(3 * x * 0.017453), 2));
    z = a0 * pow(x, 1/3) + log(1 + a0 + a1 * pow(x, 3));
    cout << "y = " << y << "\n";
    cout << "z = " << z;
    return 0; }
