#include <iostream>
using namespace std;

int main() {
	int n = 0;

	while (true) {
		cout << "1. Korea" << endl;
		cout << "2. USA" << endl;
		cout << "3. Japan" << endl;
		cout << "4. China" << endl;
		cout << "number? ";
		cin >> n;
		if (n == 1) {
			cout << endl << "Seoul" << endl;
		}
		else if (n == 2) {
			cout << endl << "Washington" << endl;
		}
		else if (n == 3) {
			cout << endl << "Tokyo" << endl;
		}
		else if (n == 4) {
			cout << endl << "Beijing" << endl;
		}
		else {
			cout << endl << "none" << endl;
			break;
		}
		cout << endl;
	}
}