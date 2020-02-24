#include <iostream>
using namespace std;

void Check(int month, int day) {
	int arr[12];
	for (int i = 0; i < 12; i++) {
		switch (i) {
		case 0: case 2: case 4: case 6: case 8: case 9: case 11:
			arr[i] = 31;
			break;
		case 3: case 5: case 7: case 10:
			arr[i] = 30;
		case 1:
			arr[i] = 29;
		}
	}
	if (arr[month - 1] < day || day <= 0) {
		cout << "BAD!" << endl;
	}
	else {
		cout << "OK!" << endl;
	}
}

int main() {
	int month, day;
	cin >> month >> day;

	Check(month, day);
}