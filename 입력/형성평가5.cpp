#include <iostream>
using namespace std;

int main() {
	double yd;
	cout << "yard? ";
	cin >> yd;

	cout << fixed;
	cout.precision(1);
	cout << yd << "yard = ";
	cout << yd * 91.44 << "cm" << endl;
}