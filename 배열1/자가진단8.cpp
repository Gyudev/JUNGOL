#include <iostream>
using namespace std;

int main() {
	int n[10];
	int evenSum = 0;
	int oddSum = 0;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n[i];
		if (i % 2 == 0) {
			oddSum += n[i];
		}
		else {
			evenSum += n[i];
			count++;
		}
	}
	cout << fixed;
	cout.precision(1);
	cout << "sum : " << evenSum << endl;
	cout << "avg : " << (double)oddSum / count << endl;
}