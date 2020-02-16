#include <iostream>
using namespace std;

int main() {
	int arr1[2][4];
	int arr2[2][4];
	int result[2][4];

	cout << "first array" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr1[i][j];
		}
	}

	cout << "second array" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			result[i][j] = arr1[i][j] * arr2[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}