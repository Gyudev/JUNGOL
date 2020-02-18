#include <iostream>
#include <string>
using namespace std;

double Circle(double n) {
	return n * n * 3.14;
}

int main() {
	int n;
	cin >> n;
	cout << fixed;
	cout.precision(2);
	cout << Circle(n) << endl;
}