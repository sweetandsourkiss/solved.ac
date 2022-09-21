#include <iostream>
#include <string>
using namespace std;
int main() {
	int square_sum = 0;

	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		square_sum += n * n;
	}

	cout << square_sum % 10;

	return 0;
}