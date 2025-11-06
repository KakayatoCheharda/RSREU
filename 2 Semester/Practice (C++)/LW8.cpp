// Значение функции f(x) определены при различных значениях аргумента x=x0(hx)xn
// Определить координаты точки (x,f(x)), которая ближе всего расположена
// к началу координат (0,0)

#include <iostream>
#include <cmath>
using namespace std;

int function(float x) {
    float f;
    f = 2*sin(3*x/4);
    return f;
}
int main() {
    float x0, hx, xn, F, x, min, r, minx, minF;
	cout << "Введите х0: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> x0;
	} while (!cin);
	cout << "Введите hx: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> hx;
	} while (!cin);
	cout << "Введите хn: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> xn;
	} while (!cin);
	x = x0;
	min = 0;
	while (x <= (xn + hx/4)) {
	    F = function(x);
	    r = sqrt(x*x + F*F);
	    if (r <= min) {
	        min = r;
	        minx = x;
	        minF = F;
	    }
	    x += hx;
	}
	cout << "Координаты самой близкой к нулям точки: (" << minx << ";" << minF << ")";
}