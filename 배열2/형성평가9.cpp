#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int **arr = new int*[n] {0,};

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		arr[i][0] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = n - 2; j >= 0; j--) {
			arr[j][i] = arr[j + 1][i] + arr[j + 1][i - 1];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}