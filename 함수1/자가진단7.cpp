#include <iostream>
using namespace std;

void Func(int *a, int *b) {
	if (*a > *b) {
		*a /= 2;
		*b *= 2;
	}
	else {
		*a *= 2;
		*b /= 2;
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	Func(&a, &b);
	cout << a << " " << b << endl;
}