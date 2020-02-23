#include <iostream>
using namespace std;

void Sum(int **arr) {
	int sum = 0;
	int total = 0;
	for (int i = 0; i < 3; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << sum << endl;
	}
	for (int i = 0; i < 3; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += arr[j][i];
		}
		cout << sum << " ";
		total += sum;
	}
	cout << total <<endl;
}

int main() {
	int **arr = new int*[3];
	for (int i = 0; i < 3; i++) {
		arr[i] = new int[3];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	Sum(arr);
}