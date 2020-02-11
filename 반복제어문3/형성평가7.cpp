#include <iostream>
using namespace std;

int main() {
	int n;
	int charCount = 0;
	int numCount = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << (char)(65 + charCount++) << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << numCount++ << " ";
		}
		cout << endl;
	}
}