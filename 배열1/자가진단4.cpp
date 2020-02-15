#include <iostream>
using namespace std;

int main() {
	int num[100];
	int count = 0;
	for (int i = 0; i < 100; i++) {
		cin >> num[i];
		if (num[i] == 0) {
			break;
		}
		count++;
	}
	for (int i = count - 1; i >= 0; i--) {
		cout << num[i] << " ";
	}
	cout << endl;
}