#include <iostream>
using namespace std;

int main() {
	int n[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		if (i % 2 == 0) {
			sum += n[i];
		}
	}
	cout << sum << endl;
}