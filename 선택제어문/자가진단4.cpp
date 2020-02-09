#include <iostream>
using namespace std;

int main() {
	double weight;

	cin >> weight;
	
	if (weight <= 50.80) {
		cout << "Flyweight" << endl;
	}
	else if (weight <=61.23) {
		cout << "Lightweight" << endl;
	}
	else if (weight <= 72.57) {
		cout << "Middleweight" << endl;
	}
	else if (weight <= 88.45) {
		cout << "Cruiserweight" << endl;
	}
	else if (88.45 < weight) {
		cout << "Heavyweight" << endl;
	}
}