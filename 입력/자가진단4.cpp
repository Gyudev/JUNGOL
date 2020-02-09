#include <iostream>
using namespace std;

int main() {
	int weight = 49;
	double g = 0.2683;
	double result = weight * g;
	cout << fixed;
	cout.precision(6);
	cout << weight << " * " << g << " = " << result << endl;
}