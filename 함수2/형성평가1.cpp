#include <iostream>
using namespace std;

void DescendingOrder() {
	int n;
	cin >> n;
	if (1 <= n && n <= 15) {
		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (arr[j] < arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}

int main() {
	DescendingOrder();
}