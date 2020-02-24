#include <iostream>
using namespace std;

void Check(int arr[10]) {
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

		for (int j = 0; j < 10; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	Check(arr);
}