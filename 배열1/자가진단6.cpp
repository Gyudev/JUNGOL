#include <iostream>
using namespace std;

int main() {
	int num[10];
	int temp = 999999999;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		if (num[i] < temp) {
			temp = num[i];
		}
	}
	cout << temp << endl;
}