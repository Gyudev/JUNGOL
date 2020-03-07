#include <iostream>
using namespace std;

static int arr[11];
static int cnt = 1;


void Func(int n) {
	for (int i = arr[cnt - 1]; i <= 6; i++) {
		arr[cnt] = i;

		if (cnt == n) {
			for (int j = 1; j <= n; j++) {
				cout << arr[j] << " ";
			}
			cout << endl;
		}
		else {
			cnt++;
			Func(n);
			cnt--;
		}
	}
}

int main() {
	int n;
	cin >> n;
	arr[0] = 1;
	Func(n);
}