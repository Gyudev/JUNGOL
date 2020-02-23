#include <iostream>
using namespace std;

void Print() {
	cout << "@@@@@@@@@@" << endl;
}
int main() {
	for (int i = 0; i < 3; i++) {
		switch (i) {
		case 0:
			cout << "first" << endl;
			break;
		case 1:
			cout << "second" << endl;
			break;
		case 2:
			cout << "third" << endl;
			break;
		}
		Print();
	}
}