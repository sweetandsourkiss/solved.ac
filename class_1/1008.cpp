#include <iostream>

using namespace std;

int main() {
	long double A;
	long double B;

	cin >> A;
	cin >> B;

	cout.precision(10);
	
	cout << fixed;

	cout << A / B;
	
	return 0;
}
