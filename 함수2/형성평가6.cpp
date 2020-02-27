#include <iostream>
using namespace std;
#define NUM 7

void Func(int arr[NUM]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < NUM - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int arr[NUM];
	for (int i = 0; i < NUM; i++) {
		cin >> arr[i];
	}
	Func(arr);
	for (int i = 0; i < NUM; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}