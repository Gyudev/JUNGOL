#include <iostream>
using namespace std;

int main() {
	int arr[11] = { 0, };
	int n;

	for (int i = 0; i < 100; i++) {
		cin >> n;

		for (int j = 0; j < 11; j++) {
			if (n / 10 == j && n != 0) {
				arr[j]++;
			}
		}
		if (n == 0) {
			break;
		}
	}
	for (int i = 0; i < 11; i++) {
		if (arr[10 - i] != 0) {
			cout << 100 - (i * 10) << " : " << arr[10 - i] << " person" << endl;
		}
	}
}