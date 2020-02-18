#include <iostream>
#include <string>
using namespace std;

string Print() {
	return "~!@#$^&*()_+|";
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << Print() << endl;
	}
}