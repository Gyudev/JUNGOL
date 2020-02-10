#include <iostream>
using namespace std;

int main(){
	int n = -1;
	int count = 0;

	while (n != 0) {
		cin >> n;
		if (n % 3 != 0 && n % 5 != 0) {
			count++;
		}
	}
	cout << count << endl;
}