#include <iostream>
using namespace std;

int Power(int a, int b) {
	int sum = 1;
	for (int i = 0; i < b; i++) {
		sum *= a;
	}
	return sum;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << Power(a, b) << endl;
}