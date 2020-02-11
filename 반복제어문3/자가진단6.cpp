#include <iostream>
using namespace std;

int main() {
	int n;
	int num = 65;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			count++;
			cout << (char)(j + num);
		}
		num += count-1;
		count = 0;
		cout << endl;
	}
}