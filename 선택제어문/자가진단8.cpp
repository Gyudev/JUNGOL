#include <iostream>
using namespace std;

int main() {
	double score;
	cin >> score;

	switch ((int)score) {
	case 4:
		cout << "scholarship";
		break;
	case 3:
		cout << "next semester";
		break;
	case 2:
		cout << "seasonal semester";
		break;
	default:
		cout << "retake";
		break;
	}
	cout << endl;
}