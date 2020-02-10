#include <iostream>
using namespace std;

int main() {
	int a, b;
	int count = 1;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		count = 1;
		for (int j = 0; j < b; j++) {
			cout << (count++)*(i + 1) << " ";
		}
		cout << endl;
	}
}