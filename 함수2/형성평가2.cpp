#include <iostream>
#include <cmath>
using namespace std;

void Check() {
	double arr[2];
	double temp = 0;
	for (int i = 0; i < 2; i++) {
		cin >> arr[i];
		arr[i] = sqrt(arr[i]);
	}
	temp = arr[0];
	if (arr[0] > arr[1]) {
		arr[0] = arr[1];
		arr[1] = temp;
		temp = arr[0];
	}
	int count = 0;
	for (int i = arr[0]; i <= (int)arr[1]; i++) {
		count++;
	}
	if ((int)arr[0] < temp) {
		count--;
	}
	cout << count << endl;
}

int main() {
	Check();
}