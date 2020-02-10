#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cin >> n;
	if (n <= 100) {
		for (int i = n; i <= 100; i++) {
			sum += i;
		}
	}
	cout << sum << endl;
}