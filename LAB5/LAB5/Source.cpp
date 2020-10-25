#include <iostream>
#include <iomanip>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, x;
	double F;

	cout << "����� a: ";
	cin >> a;
	cout << "����� b: ";
	cin >> b;
	cout << "����� c: ";
	cin >> c;
	cout << "����� x: ";
	cin >> x;

	if (a < 0 && c != 0) {
		F = a * pow(x, 2) + b * x + c;
	}
	if (a > 0 && c == 0) {
		F = -a / (x - c);
	}
	else {
		F = a * (x + c);
	}
	cout << setw(8) << setprecision(3) << "F= " << F << endl;
}
