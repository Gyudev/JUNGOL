#include <iostream>
using namespace std;

int main() {
	int n;
	int score = 0;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score;
		sum += score;
	}
	cout << fixed;
	cout.precision(2);
	cout << (double)sum / n << endl;
}