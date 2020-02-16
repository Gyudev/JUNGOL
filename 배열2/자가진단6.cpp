#include <iostream>
using namespace std;

int main() {
	int student[5][4];
	int count = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> student[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += student[i][j];
		}
		if (sum / 4 >= 80) {
			cout << "pass" << endl;
			count++;
		}
		else {
			cout << "fail" << endl;
		}
	}

	cout << "Successful : " << count << endl;
}