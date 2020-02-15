#include <iostream>
using namespace std;

int main() {
	char n[10];
	for (int i = 0; i < 10; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << n[9 - i] << " ";
	}
	cout << endl;
}