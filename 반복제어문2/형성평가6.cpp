#include <iostream>
using namespace std;

int main() {
	int a, b;
	int sum = 0;
	int count = 0;
	cin >> a >> b;
	if (a < b) {
		for (int i = a; i <= b; i++) {
			if (i % 3 == 0 || i % 5 == 0) {
				sum += i;
				count++;
			}
		}
	}
	else {
		for (int i = b; i <= a; i++) {
			if (i % 3 == 0 || i % 5 == 0) {
				sum += i;
				count++;
			}
		}
	}
	cout << "sum : " << sum << endl;
	cout << fixed;
	cout.precision(1);
	cout << "avg : " << (double)sum / count << endl;
}