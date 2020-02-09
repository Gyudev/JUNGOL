#include <iostream>
using namespace std;

int main() {
	int age;
	cin >> age;
	if (age >= 20) {
		cout << "adult" << endl;
	}
	else {
		cout << 20 - age << " years later" << endl;
	}
}