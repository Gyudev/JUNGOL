#include <iostream>
using namespace std;

int main() {
	double n[6];
	double sum = 0;
	for (int i = 0; i < 6; i++) {
		cin >> n[i];
		sum += n[i];
	}
	cout << fixed;
	cout.precision(1);
	cout << sum / 6 << endl;
}