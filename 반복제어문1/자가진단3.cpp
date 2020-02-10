#include <iostream>
using namespace std;

int main() {
	int n;

	while (true) {
		cout << "number? ";
		cin >> n;

		if (n == 0) {
			break;
		}
		else if (n > 0) {
			cout << "positive integer" << endl;
		}
		else {
			cout << "negative number" << endl;
		}
	}
}