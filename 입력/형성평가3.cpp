#include <iostream>
using namespace std;

int main() {
	int a = 50;
	double b = 100.12;
	cout << fixed;
	cout.precision(2);
	cout << b << " * " << a << " = ";
	cout.precision(0);
	cout << b * a << endl;
}