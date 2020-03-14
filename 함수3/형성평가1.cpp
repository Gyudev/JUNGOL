#include <iostream>
using namespace std;

static int *arr;
static int cnt = 0;

void Func(int n) {
	if (n >= 1) {
		arr[cnt++] = n;
		Func(n / 2);
	}
}

int main() {
	int n;
	int cnt2 = 0;
	cin >> n;
	int num = n;
	while (n >= 1) {
		cnt++;
		n = n / 2;
	}
	arr = new int[cnt];
	cnt2 = cnt;
	cnt = 0;
	Func(num);

	for (int i = 0; i < cnt2+1; i++) {
		for (int j = 0; j < cnt2 - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < cnt2; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}