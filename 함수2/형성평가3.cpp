#include <iostream>
using namespace std;

int Sum(int arr[5]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] < 0) {
			arr[i] *= -1;
		}
		sum += arr[i];
	}
	return sum;
}

int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	cout << Sum(arr) << endl;
}