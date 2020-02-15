#include <iostream>
using namespace std;

int main() {
	int n[100];
	int max = 0;
	int min = 1000;
	for (int i = 0; i < 100; i++) {
		cin >> n[i];
		if (n[i] == 999) {
			break;
		}
		else if (max < n[i]) {
			max = n[i];
		}
		if (min > n[i]) {
			min = n[i];
		}
	}
	cout << "max : " << max << endl;
	cout << "min : " << min << endl;

}