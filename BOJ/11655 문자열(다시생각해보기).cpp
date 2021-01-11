#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

// a-z = 97 - 122
// A-Z = 65 - 90

int main() {

	string str; 
	getline(cin, str);
	str += ' ';

	for (int i = 0; i < int(str.length()); i++) {
		if ((str[i]>='A'&& str[i]<='A'+12)||(str[i] >= 'a' && str[i] <= 'a' + 12)) {
			cout << char(str[i] + 13);
		}
		else if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ') {
			cout << str[i];
		}
		else {
			cout << char(str[i] - 13);
		}
	}


}
