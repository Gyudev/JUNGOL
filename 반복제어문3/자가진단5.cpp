#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = i; k < n * 2 - i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
}