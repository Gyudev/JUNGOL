#include <iostream>
using namespace std;

int main() {
	char alpha;
	cin >> alpha;

	switch (alpha) {
	case 'A':
		cout << "Excellent";
		break;
	case 'B':
		cout << "Good";
		break;
	case 'C':
		cout << "Usually";
		break;
	case 'D':
		cout << "Effort";
		break;
	case 'F':
		cout << "Failure";
		break;
	default:
		cout << "error";
		break;
	}
	cout << endl;
}