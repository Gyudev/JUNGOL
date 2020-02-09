#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	if (num == 0) {
		cout << "zero" << endl;
	}
	else if (num > 0) {
		cout << "plus" << endl;
	}
	else {
		cout << "minus" << endl;
	}
}