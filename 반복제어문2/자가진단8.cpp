#include <iostream>
using namespace std;

int main() {
	for (int i = 2; i <= 4; i++) {
		cout.width(0);
		for (int j = 1; j < 6; j++) {
			cout << i << " * " << j << " = ";
			cout.width(2);
			cout << i * j;
			cout.width(4);
		}
		cout << endl;
	}
}