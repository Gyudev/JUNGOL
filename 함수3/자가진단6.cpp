#include <iostream>
using namespace std;

static int result = 0;

void Func(int n) {
	if (n / 10 != 0) {
		result += (n % 10) * (n % 10);
		n /= 10;
		Func(n);
	}
	else {
		result += n * n;
	}
}

int main() {
	int n;
	cin >> n;

	Func(n);
	cout << result << endl;
}