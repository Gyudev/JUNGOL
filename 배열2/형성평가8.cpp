#include <iostream>
using namespace std;

int main() {
	int arr[4][2];
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		sum = 0;
		for (int j = 0; j < 2; j++) {
			sum += arr[i][j];
		}
		cout << sum / 2 << " ";
	}
	cout << endl;
	for (int i = 0; i < 2; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += arr[j][i];
		}
		cout << sum / 4 << " ";
	}
	cout << endl;
	sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			sum += arr[i][j];
		}
	}
	cout << sum / 8 << " ";
	cout << endl;
}