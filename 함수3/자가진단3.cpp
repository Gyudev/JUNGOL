#include <iostream>
using namespace std;

int Func(int n, int sum) {
	if (n != 0) {
		Func(n - 1, sum + n);
	}
	else {
		return sum;
	}	
}
int main() {
	int n, sum = 0;
	cin >> n;
	cout << Func(n, sum) << endl;
}