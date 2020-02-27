#include <iostream>
#include <cmath>
using namespace std;

void Func(double arr[3]) {
	double temp[2] = {0,};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				temp[i] += arr[j];
			}
			else if (i == 1) {
				temp[i] += round(arr[j]);
			}
		}
	}
	cout << round(temp[0] / 3) << endl;
	cout << round(temp[1] / 3) << endl;
}

int main() {
	double arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	Func(arr);
}