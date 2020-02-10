#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	int count = 0;

	while (true) {
		cin >> n;
		sum += n;
		count++;
		if (n >= 100) {
			break;
		}
	}
	cout << fixed;
	cout.precision(1);
	cout << sum << endl;
	cout << (double)sum / count << endl;
}