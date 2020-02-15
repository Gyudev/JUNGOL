#include <iostream>
using namespace std;

int main() {
	char n[6] = { 'J','U','N','G','O','L' };
	char find;
	int count = 0;
	cin >> find;
	for (int i = 0; i < 6; i++) {
		if (find == n[i]) {
			cout << i << endl;
			count++;
		}
	}
	if (count == 0) {
		cout << "none" << endl;
	}
}