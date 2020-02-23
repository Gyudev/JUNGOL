#include <iostream>
using namespace std;

int Print(int a, int b) {
	int max = 0;
	int min = 0;

	if (a > b) {
		max = a * a;
		min = b * b;
	}
	else {
		max = b * b;
		min = a * a;
	}

	return max - min;
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << Print(a, b) << endl;
}