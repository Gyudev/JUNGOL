#include <iostream>
using namespace std;

int main() {
	double a = 80.5, b = 22.34;

	cout << fixed;
	cout.precision(2);
	cout.width(10);
	cout << a;
	cout.width(10);
	cout << b;
	cout.width(10);
	cout << a + b << endl;
}