#include <iostream>
using namespace std;

int main() {
	int n[100];
	int count = 0;
	for (int i = 0; i < 100; i++) {
		cin >> n[i];
		if (n[i] == -1) {
			break;
		}
		count++;
	}
	if (count < 3) {
		for (int i = 0; i < count; i++) {
			cout << n[i] << " ";
		}
	}
	else {
		for (int i = count - 3; i < count; i++) {
			cout << n[i] << " ";
		}
	}
	cout << endl;
}