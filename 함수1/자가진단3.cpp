#include <iostream>
using namespace std;

void Matrix(int n) {
	int count = 1;
	int **arr = new int *[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << count++ << " ";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	Matrix(n);
}