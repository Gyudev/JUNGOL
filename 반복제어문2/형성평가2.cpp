#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a <= 100 && b <= 100) {
		if (a > b) {
			for (int i = b; i <= a; i++) {
				cout << i << " ";
			}
		}
		else {
			for (int i = a; i <= b; i++) {
				cout << i << " ";
			}
		}
	}
	cout << endl;
}