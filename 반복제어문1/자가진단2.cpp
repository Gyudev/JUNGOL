#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int n = 0;
	int count = 0;

	while (true) {
		if (n <= 0 || n >100) {
			cin >> n;
		}
		else if (count <= n) {
			sum += count++;
		}
		else {
			break;
		}
	}
	cout << sum << endl;
}