#include <iostream>
using namespace std;

int main() {
	double yd = 2.1;
	double in = 10.5;
	cout << fixed;
	cout.precision(1);
	cout.width(4);
	cout << yd << "yd = ";
	cout.width(5);
	cout << yd * 91.44 << "cm" << endl;
	cout.width(4);
	cout << in << "in = ";
	cout.width(5);
	cout<< in * 2.54 << "cm" << endl;
}