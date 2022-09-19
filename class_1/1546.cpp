#include <iostream>

using namespace std;

int main() {

	int length;
	double max_score;
	double new_sum = 0;

	cin >> length;
	double* array = new double[length];

	for (int i = 0; i < length; ++i) {
		cin >> array[i];
	}

	max_score = array[0];

	for (int i = 0; i < length-1; i++) {
		if (array[i] < array[i + 1]) {
			max_score = array[i + 1];
		}
	}

	for (int i = 0; i < length; i++) {
		array[i] = array[i] / max_score * 100;
		new_sum += array[i];
	}

	cout << new_sum / length << endl;
	
	delete[] array;

	return 0;
}