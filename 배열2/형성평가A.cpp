#include <iostream>
using namespace std;

int main() {
	char arr[3][5];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << (char)(arr[i][j] + 32) << " ";
		}
		cout << endl;
	}
}