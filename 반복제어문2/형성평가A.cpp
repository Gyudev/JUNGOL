#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if ((a >= 2 && b >= 2) && (9 >= a && 9 >= b)) {
		if (a > b) {
			for (int i = 0; i < 9; i++) {
				cout.width(0);
				for (int j = a; j >= b; j--) {
					cout << j << " * " << i + 1 << " = ";
					cout.width(2);
					cout << j * (i + 1);
					cout.width(4);
				}
				cout << endl;
			}
		}
		else {
			for (int i = 0; i < 9; i++) {
				cout.width(0);
				for (int j = a; j <= b; j++) {
					cout << j << " * " << i + 1 << " = ";
					cout.width(2);
					cout << j * (i + 1);
					cout.width(4);
				}
				cout << endl;
			}
		}
	}
}