#include <iostream>
using namespace std;

int main() {
	int n[10];
	int odd = 0, even = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n[i];
		if (i % 2 == 0) {
			odd += n[i];
		}
		else {
			even += n[i];
		}
	}
	cout << "odd : " << odd << endl;
	cout << "even : " << even << endl;
}