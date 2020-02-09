#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int a = 0;
	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);
	a = tt.tm_year;
	a += tt.tm_mon;
	a += tt.tm_mday;
	cout << 0 << " " << 120 << " " << 129 << endl;
}