#include <iostream>
using namespace std;

void Check() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << i + 1 << " + " << j + 1 << " = " << i + j + 2 << endl;
		}
	}
}

int main() {
	Check();
}