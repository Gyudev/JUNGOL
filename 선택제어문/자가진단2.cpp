#include <iostream>
using namespace std;

int main() {
	int height, weight;

	cin >> height >> weight;
	cout << weight + 100 - height << endl;
	if (weight + 100 - height > 0) {
		cout << "Obesity" << endl;
	}
}