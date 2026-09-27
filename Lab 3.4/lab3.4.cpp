// Lab_03_4.cpp
// < Телих Олександра >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    double R1, R2;

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // перевірка попадання точки в зафарбовану область
    if (pow(R2, 2) <= pow(x, 2) + pow(y, 2) &&
        pow(x, 2) + pow(y, 2) <= pow(R1, 2) &&
        x * y > 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}