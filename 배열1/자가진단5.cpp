#include <iostream>
using namespace std;

int main() {
	int a, b;
	double avg[] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };

	cin >> a >> b;
	cout << fixed;
	cout.precision(1);
	cout << avg[a - 1] + avg[b - 1] << endl;
}