//Вычислить сумма при определённом х

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, s, n;
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
    s = 0;
    for (n = 0; n <= 10; n += 1) {
        s = s + (pow(x, 4*n+1)/(4*n+1));
    }
    cout << "S = " << s;
}
