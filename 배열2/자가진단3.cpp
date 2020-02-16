#include <iostream>
using namespace std;

int main() {
	int n[100];
	int b, count = 2;
	cin >> b;

	n[0] = 100;
	n[1] = b;
	for (int i = 2; i < 100; i++) {
		n[i] = n[i - 2] - n[i - 1];
		count++;
		if (n[i] < 0) {
			break;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << n[i] << " ";
	}
	cout << endl;
}