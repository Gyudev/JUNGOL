#include <iostream>
using namespace std;

int main() {
	char alpha[10];

	for (int i = 0; i < 10; i++) {
		cin >> alpha[i];
	}
	for (int i = 0; i < 10; i++) {
		switch (i) {
		case 0:
			cout << alpha[i] << " ";
				break;
		case 3:
			cout << alpha[i] << " ";
			break;
		case 6:
			cout << alpha[i] << " ";
			break;
		}
	}
	cout << endl;
}