// Составить алгоритм и программу, которая определяет,
// принадлежит ли точка с некоторыми координатами (х, у)
// области между 2 окружностями с одним центром

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float r, R, x0, y0, x1, y1, r1, r2;
    cout << "Введите радиус 1 окружности: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> r1;
	} while (!cin);
    cout << "Введите радиус 2 окружности: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> r2;
	} while (!cin);
    cout << "Введите абсциссу центра окружностей: ";
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
    cout << "Введите ординату центра окружностей: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> y0;
	} while (!cin);
    cout << "Введите абсциссу точки для проверки: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> x1;
	} while (!cin);
	cout << "Введите ординату точки для проверки: ";
    do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректнoе значение\n";
		}
		cin >> y1;
	} while (!cin);
	if (r1 > r2) {
	    r = r2;
	    R = r1;
	}
	else {
	    R = r2;
	    r = r1;
    }
	if ((pow(x1-x0, 2) + pow(y1-y0, 2) <= pow(R, 2)) && (pow(x1-x0, 2) + pow(y1-y0, 2) >= pow(r, 2))) {
	    cout << "Точка лежит в данной области";
	}
	else {
	    cout << "Точка не лежит в данной области";
	}
}