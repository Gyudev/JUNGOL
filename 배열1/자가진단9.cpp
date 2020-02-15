#include <iostream>
using namespace std;

int main() {
	int n[10];
	
	for (int i = 0; i < 10; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (n[j] < n[j + 1]) {
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << n[i] << " ";
	}
	cout << endl;
}