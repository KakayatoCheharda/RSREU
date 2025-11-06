// Необходимо реализовать определение углов по сторонам треугольника
// с помощью тригонометрических функций

#include <iostream>
#include <cmath>
using namespace std;

float CalcCosAngle(float a, float b, float c) {
    float x;
    x = (a * a + b * b - c * c) / (2 * a * b);
    return x;
}
float CalcAngle(float x) {
    float angle;
    if (x == 0)
        angle = acos(x);
    else
        angle = atan(sqrt(1 - x * x) / x);
    return angle * 57.296;
}

int main() {
    float x1, x2, x3, anA, anB, anC, AB, BC, CA;
    cout << "Input the sides of the triangle\n";
    cout << "AB: ";
    cin >> AB;
    cout << "BC: ";
    cin >> BC;
    cout << "CA: ";
    cin >> CA;
    x1 = CalcCosAngle(CA, BC, AB);
    anC = CalcAngle(x1);
    x2 = CalcCosAngle(AB, BC, CA);
    anB = CalcAngle(x2);
    x3 = CalcCosAngle(AB, CA, BC);
    anA = CalcAngle(x3);
    cout << "Angle ABC = " << anB << endl;
    cout << "Angle BCA = " << anC << endl;
    cout << "Angle CAB = " << anA << endl;
    return 0;
}
