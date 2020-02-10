#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int count = 0;

	while (true) {

		if (n <= 0) {
			cin >> n;
		}
		else if (count == n) {
			break;
		}
		count++;
		cout << count << " ";
	}
	cout << endl;
}