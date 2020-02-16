#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[6] = { 0, };

	for (int i = 0; i < 10; i++) {
		cin >> n;
		arr[n-1]++;
	}

	for (int i = 0; i < 6; i++) {
		cout << i + 1 << " : " << arr[i] << endl;
	}
}