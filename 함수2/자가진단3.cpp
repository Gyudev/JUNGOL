#include <iostream>
using namespace std;

int Check(int a, int b) {
	int tempA = a;
	int tempB = b;
	if (a < 0 || b < 0) {
		if (a < 0) {
			a *= -1;
		}
		if (b < 0) {
			b *= -1;
		}
	}
	if (a > b) {
		return tempA;
	}
	else {
		return tempB;
	}
}

double Check(double a, double b) {
	double tempA = a;
	double tempB = b;
	if (a < 0 || b < 0) {
		if (a < 0) {
			a *= -1;
		}
		if (b < 0) {
			b *= -1;
		}
	}
	if (a > b) {
		return tempB;
	}
	else {
		return tempA;
	}
}

int main() {
	int iA, iB;
	double dA, dB;

	cin >> iA >> iB;
	cin >> dA >> dB;
	cout << Check(iA, iB) << endl;
	cout << fixed;
	cout.precision(2);
	cout << Check(dA, dB) << endl;
}