#include <iostream>
using namespace std;

int Calculate(int a, char s,int b) {
	int result = 0;
	if (s == '+') {
		result = a + b;
	}
	else if (s == '-') {
		result = a - b;
	}
	else if (s == '*') {
		result = a * b;
	}
	else if (s == '/') {
		result = a / b;
	}
	else {
		result = 0;
	}
	return result;
}

int main() {
	int a, b;
	char s;
	cin >> a >> s >> b;
	cout << a << " " << s << " " << b << " = " << Calculate(a, s, b) << endl;
}