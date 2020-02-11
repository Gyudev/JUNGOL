#include <iostream>
using namespace std;

int main() {
	int n;
	int temp = 0;
	cin >> n;
	for (int i = 0; i < 100; i++) {
		
		if ((temp + 1) % 10 == 0) {
			break;
		}
		else if ((i + 1) % n == 0) {
			cout << i + 1 << " ";
			temp = i;
		}
	}
	cout << endl;
}