#include <iostream>
using namespace std;

int Squared(int n) {
	int sum = 1;
	for (int i = 0; i < n; i++) {
		sum *= 2;
	}
	return sum;
}

int main() {
	int n;
	while (1) {
		cin >> n;
		if (1 <= n && n <= 20) {
			break;
		}
	}
	cout << Squared(n) << endl;
}