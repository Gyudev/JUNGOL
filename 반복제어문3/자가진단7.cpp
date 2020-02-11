#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int numCount = 1, alphaCount = 0;

	for (int i = 0; i < n; i++) {
		for (int j = n - i; j >0; j--) {
			cout << numCount << " ";
			numCount++;
		}
		for (int k = 0; k <= i; k++) {
			cout << (char)(alphaCount + 65) << " ";
			alphaCount++;
		}
		cout << endl;
	}
}