#include <iostream>
using namespace std;

int main() {
	char sex;
	int age;
	cin >> sex >> age;

	if (sex == 'M') {
		if (age >= 18) {
			cout << "MAN";
		}
		else {
			cout << "BOY";
		}
	}
	else if (sex == 'F') {
		if (age >= 18) {
			cout << "WOMAN";
		}
		else {
			cout << "GIRL";
		}
	}
	cout << endl;
}