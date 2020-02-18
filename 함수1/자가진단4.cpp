#include <iostream>
using namespace std;

int Max(int a, int b, int c) {
	int max = -100;
	if (a > b && a > c) {
		max = a;
	}
	else if (b > a&&b > c) {
		max = b;
	}
	else if (c > a&&c > b) {
		max = c;
	}
	return max;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << Max(a, b, c) << endl;
}