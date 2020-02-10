#include <iostream>
using namespace std;

int main() {
	int n=0;

	while (n != -1) {
		cin >> n;
		if (n % 3 == 0) {
			cout << n / 3 << endl;
		}
	}
}