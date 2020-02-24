#include <iostream>
#include <math.h>
using namespace std;

void Check(double a, double b, double c) {
	double arr[3] = { a,b,c };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[0] < arr[j]) {
				double temp = arr[0];
				arr[0] = arr[j];
				arr[j] = temp;
			}
		}
		for (int j = 1; j < 3; j++) {
			if (arr[1] > arr[j]) {
				double temp = arr[1];
				arr[1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	arr[0] = ceil(arr[0]);
	arr[1] = floor(arr[1]);
	arr[2] = round(arr[2]);
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;

	Check(a, b, c);
}