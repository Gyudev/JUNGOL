#include <iostream>
using namespace std;
// 65 ~90
int main() {
	char n;
	int arr[26] = { 0, };

	while (true) {
		cin >> n;
		if (n < 65 || 90 < n) {
			break;
		}
		
		for (int i = 65; i <= 90; i++) {
			if (i == (int)n) {
				arr[i - 65]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] != 0) {
			cout << char(i + 65) << " : " << arr[i] << endl;
		}
	}
}