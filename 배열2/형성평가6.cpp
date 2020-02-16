#include <iostream>
using namespace std;

int main() {
	int arr[5][5] = { 0, };

	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			arr[0][i] = 1;
		}
	}

	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j - 1 < 0) {
				arr[i][j] = 0 + arr[i - 1][j + 1];
			}
			else if (j + 1 > 4) {
				arr[i][j] = arr[i - 1][j - 1] + 0;
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}