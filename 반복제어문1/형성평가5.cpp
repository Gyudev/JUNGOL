#include <iostream>
using namespace std;

int main() {
	int base;
	int height;
	char talk = 'y';

	while (talk == 'y'||talk == 'Y') {
		cout << "Base = ";
		cin >> base;
		cout << "Height = ";
		cin >> height;

		cout << fixed;
		cout.precision(1);
		cout << "Triangle width = " << (double)(base*height) / 2 << endl;
		cout << "Continue? ";
		cin >> talk;
	}
}