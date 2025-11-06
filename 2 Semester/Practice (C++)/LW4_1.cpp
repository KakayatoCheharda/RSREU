// Составить алгоритм и программу вычисления функции
// при произвольном х
// До -2 и после 2 функция не определена

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Введите х в промежутке от -2 до 2: ";
    float x, F;
    do
    {
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Введите корректнoе значение\n";
        }
        cin >> x;
    } while (!cin);
    if ((x < -2) || (x > 2))
        {
        cout << "Это число не входит в промежуток\n";
        }
    else
    {
        if (-2 <= x <= -1)
        {
            F = 2 * x + 4;
        }
        else
            if (-1 < x <= 1)
            {
                F = 2 * x * x;
            }
            else
            {
                F = -2 * x + 2;
            }
        cout << "Значение функции при данном значении х: " << F;
        }
        return 0;
}