#include <iostream>
using namespace std;

int main() {
	int mHeight, mWeight;
	int kHeight, kWeight;
	cin >> mHeight >> mWeight;
	cin >> kHeight >> kWeight;

	cout << ((mHeight > kHeight) && (mWeight > kWeight)) ? 1 : 0;
	cout << endl;
}