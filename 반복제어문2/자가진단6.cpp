#include <iostream>
using namespace std;

int main() {
	int n;
	int score;
	int sum = 0;
	double avg = 0;
	cin >> n;
	if (n <= 10) {
		for (int i = 0; i < n; i++) {
			cin >> score;
			sum += score;
		}
		avg = (double)sum / n;
	}
	cout << fixed;
	cout.precision(1);
	cout << "avg : " << avg << endl;
	if (avg >= 80) {
		cout << "pass" << endl;
	}
	else {
		cout << "fail" << endl;
	}
}