#include <iostream>
using namespace std;

int main() {
	int n[100];
	int count = 0;

	for (int i = 0; i < 100; i++) {
		cin >> n[i];
		if (n[i] == 0) {
			break;
		}
		
		count++;
	}
	cout << count << endl;
	for (int i = 0; i < count; i++) {
		if (n[i] % 2 == 0) {
		cout << n[i] / 2 << " ";
		}
		else {
		cout << n[i] * 2 << " ";
		}
	}
}