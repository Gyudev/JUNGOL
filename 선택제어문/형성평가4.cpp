#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Number? ";
	cin >> num;
	switch (num) {
	case 1:
		cout << "dog";
		break;
	case 2:
		cout << "cat";
		break;
	case 3:
		cout << "chick";
		break;
	default:
		cout << "I don't know.";
		break;
	}

	cout << endl;
}