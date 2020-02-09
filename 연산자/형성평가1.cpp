#include <iostream>
using namespace std;

int main() {
	int kor, eng, mat, com;
	cin >> kor >> eng >> mat >> com;
	cout << "sum " << (kor + eng + mat + com) << endl;
	cout << "avg " << (kor + eng + mat + com) / 4 << endl;
}