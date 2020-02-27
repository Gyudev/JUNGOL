#include <iostream>
using namespace std;
#define PI 3.141592

double Func(double r) {
	return r * r * PI;
}

int main() {
	double radius;
	cout << "radius : ";
	cin >> radius;

	cout << fixed;
	cout.precision(3);
	cout << "area = " << Func(radius) << endl;
} 