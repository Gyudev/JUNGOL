#include <iostream>
using namespace std;

int main() {
	int n[10];
	int temp1 = 0;
	int temp2 = 9999;

	for (int i = 0; i < 10; i++) {
		cin >> n[i];
		if (n[i] > temp1 && n[i] < 100) {
			temp1 = n[i];
		}
		else if (temp2 > n[i] && 100 <= n[i]) {
			temp2 = n[i];
		}
	}
	if (temp1 == 0) {
		temp1 = 100;
	}
	else if (temp2 == 9999) {
		temp2 = 100;
	}

	cout << temp1 << " " << temp2 << endl;
}