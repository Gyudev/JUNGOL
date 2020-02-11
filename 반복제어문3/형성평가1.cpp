#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < 20; i++) {
		cin >> n;
		if (n == 0) {
			break;
		}
		sum += n;
		count++;
	}
	cout << sum << " " << sum / count << endl;
}