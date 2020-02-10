#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 2; j <= i+6; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}