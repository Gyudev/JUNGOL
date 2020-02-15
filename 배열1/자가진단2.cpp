#include <iostream>
using namespace std;

int main() {
	int num[10];

	for (int i = 0; i < 10; i++) {
		num[i] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}