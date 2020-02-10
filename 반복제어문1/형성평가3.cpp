#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int sum = 0;
	int count = -1;
	double result = 0;
	while (-1 < n&&n < 101) {
		sum += n;
		cin >> n;
		count++;
	}
	cout << fixed;
	cout.precision(1);
	result = (double)sum / count;
	cout << "sum : " << sum << endl;
	cout << "avg : " << result << endl;
}