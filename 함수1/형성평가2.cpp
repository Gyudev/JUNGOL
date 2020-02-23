#include <iostream>
using namespace std;

int Print(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int num;
	cin >> num;

	cout << Print(num) << endl;
}