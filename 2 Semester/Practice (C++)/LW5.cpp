// Разработать программу, которая вычисляет один из корней в х
// Сделать вид простейшого меню

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, n;
    float y;
    cout << "Введите х: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение: ";
		}
		cin >> x;
	} while (!cin);
    cout << "Введите код корня:\n1 - y = x\n2 - y = SQRT(x)\n3 - y = EXP(1/3*ln(x))\n4 - y = SQRT(SQRT(x))\n";
    cin >> n;
    switch (n) {
        case 1: y = x;
            cout << "y = " << y;
            break;
        case 2: y = sqrt(x);
            cout << "y = " << y;
            break;
        case 3: y = exp(1/3*log(x));
            cout << "y = " << y;
            break;
        case 4: y = sqrt(sqrt(x));
            cout << "y = " << y;
            break;
        default: 
            cout << "Введите корректный код корня\n";
            break;
    }
}