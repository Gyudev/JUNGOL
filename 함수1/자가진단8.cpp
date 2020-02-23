#include <iostream>
using namespace std;

void Gugudan(int a, int b) {
	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}
	for (int i = a; i <= b; i++) {
		cout << "== " << i << "dan ==" << endl;
		for (int j = 0; j < 9; j++) {
			cout.width(0);
			cout << i << " * " << j + 1 << " = ";
			cout.width(2);
			cout << i * (j + 1) << endl;
		}
		cout << endl;
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	
	Gugudan(a, b);
}