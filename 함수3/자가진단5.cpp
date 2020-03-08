#include <iostream>
using namespace std;

static int arr[50];
static int cnt = 1;

void Func(int n) {
	if (cnt == n) {
		cout << arr[cnt-1] << endl;
	}
	else {
		arr[cnt] = arr[(cnt-1) / 2] + arr[cnt - 1];
		cnt++;
		Func(n);
	}
}

int main() {
	int n;
	cin >> n;
	arr[0] = 1;
	Func(n);
}