#include <iostream>
using namespace std;

static int numMax = 0;

void Print(int n) {
	if (n <= numMax) {
		cout << n << " ";
		Print(n + 2);
	}
}

int main() {
	int n;
	cin >> n;
	numMax = n;
	int value = n % 2;
	if (value == 0) {
		value += 2;
	}
	Print(value);
	cout << endl;
}
