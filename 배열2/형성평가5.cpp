#include <iostream>
using namespace std;

int main() {
	int arr[4][3];
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		cout << i + 1 << "class? ";
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		cout << i + 1 << "class : " << sum << endl;
		sum = 0;
	}

}