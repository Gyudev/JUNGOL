#include <iostream>
using namespace std;

void Func(int n) {
	cout << n << " ";
	if (n != 1) {
		Func(n - 1);
	}
}
int main() {
	int n;
	cin >> n;
	Func(n);
	cout << endl;
}