#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 0, };
	int n;

	for (int i = 0; i < 99; i++) {
		cin >> n;
		if (n == 0) {
			break;
		}
		for (int j = 0; j < 10; j++) {
			if (n / 10 == j) {
				arr[j]++;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] != 0) {
			cout << i << " : " << arr[i] << endl;
		}
	}
}