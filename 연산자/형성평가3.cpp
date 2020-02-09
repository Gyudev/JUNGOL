#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	x += 5;
	y *= 2;
	
	cout << "width = " << x << endl;
	cout << "length = " << y << endl;
	cout << "area = " << x * y << endl;
}