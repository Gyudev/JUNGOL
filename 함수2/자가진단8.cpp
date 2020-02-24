#include <iostream>
using namespace std;

#define RESULT1(a,b) ((a-b)*(a-b));
#define RESULT2(a,b) ((a+b)*(a+b)*(a+b));

int main() {
	int a, b;
	cin >> a >> b;

	cout << "(" << a << " - " << b << ") ^ 2 = " << RESULT1(a, b);
	cout << endl;
	cout << "(" << a << " + " << b << ") ^ 3 = " << RESULT2(a, b);
	cout << endl;
}