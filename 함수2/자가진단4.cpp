#include <iostream>
using namespace std;

double Check(int area) {
	double result = area / 3.14;

	for (int i = 0; i < 10; i++) {
		result = (result + (area / 3.14 / result)) / 2;
	}
	return result;
}

int main() {
	int area;
	cin >> area;
	cout << fixed;
	cout.precision(2);
	cout << Check(area) << endl;
}