#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}
	int max = 0;
	char max_word='A';
	int temp = 0;
	int button = 0;
	

	for (char word = 'A'; word <= 'Z'; word++) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == word) {
				temp++;
			}
		}
		if (temp > max) {
			max = temp;
			max_word = word;
			button = 0;
		}
		else if (temp == max) {
			button = 1;
		}
		temp = 0;
	}

	if (button == 1) {
		cout << '?';
	}
	else cout << max_word;

	return 0;
}
