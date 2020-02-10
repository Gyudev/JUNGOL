#include <iostream>
using namespace std;

int main() {
	int n;
	int three = 0;
	int five = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		if (n % 3 == 0) {
			three++;
		}
		if (n % 5 == 0) {
			five++;
		}
	}
	cout << "Multiples of 3 : " << three << endl;
	cout << "Multiples of 5 : " << five << endl;
}