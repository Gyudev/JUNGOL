#include <iostream>
using namespace std;

int main() {
	int n;
	int count = 1;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << count << " ";
			count += 2;
			if (count > 10) {
				count = 1;
			}
		}
		cout << endl;
	}
}