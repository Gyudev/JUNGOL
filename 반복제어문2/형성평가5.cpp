#include <iostream>
using namespace std;

int main() {
	int n;
	int even = 0, odd = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		if (n % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	cout << "even : " << even << endl;
	cout << "odd : " << odd << endl;
}