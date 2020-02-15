#include <iostream>
using namespace std;

int main() {
	int n[100];
	int sum = 0;
	int count = 0;

	for (int i = 0; i < 100; i++) {
		cin >> n[i];
		if (n[i] == 0) {
			break;
		}
		else if (n[i] % 5 == 0) {
			count++;
			sum += n[i];
		}
	}
	cout << fixed;
	cout.precision(1);
	cout << "Multiples of 5 : " << count << endl;
	cout << "sum : " << sum << endl;
	cout << "avg : " << (double)sum / count << endl;
}