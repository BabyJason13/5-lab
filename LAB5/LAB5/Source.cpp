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

	cout << "Ведіть a: ";
	cin >> a;
	cout << "Ведіть b: ";
	cin >> b;
	cout << "Ведіть c: ";
	cin >> c;
	cout << "Ведіть x: ";
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
