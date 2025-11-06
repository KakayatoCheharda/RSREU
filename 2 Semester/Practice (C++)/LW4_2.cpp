// Составить функцию пользователя, определяющую максимальное значение из 2 аргументов
// Используя функцию, определить максимальное значение из заданных х

#include <iostream>
using namespace std;

int MaxOf2(int a, int b) {
    int m;
    if (a >= b) {
        m = a;
    }
    else {
        m = b;
    }
    return m;
}
int main()
{
    int maxx, x1, x2;
    int *mass = new int [4];
    cout << "Введите 4 аргумента:\n";
    for (int i = 0; i < 4; i++)
        do
	    {
		    if (!cin)
		    {
			    cin.clear();
			    while (cin.get() != '\n');
			    cout << "Введите корректнoе значение\n";
		    }
		    cin >> mass[i];
	    } while (!cin);
    x1 = MaxOf2(mass[1], mass[2]);
    x2 = MaxOf2(mass[3], mass[4]);
    maxx = MaxOf2(x1, x2);
    cout << "Максимальное значение из заданных: " << maxx;
    return 0;
}