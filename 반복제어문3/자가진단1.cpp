#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 1;
	int count = 0;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		if (sum <= n) {
			if (i % 2 != 0) {
				sum += i;
				count++;
			}
		}
	}
	cout << count << " " << sum - 1 << endl;
}