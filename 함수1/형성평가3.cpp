#include <iostream>
using namespace std;

void Print(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << (i + 1) * (j + 1) << " ";
		}
		cout << endl;
	}
}

int main() {
	int num;
	cin >> num;

	Print(num);
}