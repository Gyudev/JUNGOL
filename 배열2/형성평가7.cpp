#include <iostream>
using namespace std;

int main() {
	int arr1[2][3];
	int arr2[2][3];
	int temp[2][3];
	cout << "first array" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr1[i][j];
		}
	}
	cout << "second array" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			temp[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << temp[i][j] << " ";
		}
		cout << endl;
	}
}