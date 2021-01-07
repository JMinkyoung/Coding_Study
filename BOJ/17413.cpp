#include <iostream>
#include <stdio.h>
#include <string>
#include <deque>
using namespace std;
deque<char>dq;

int main() {
	string str;
	getline(cin, str);
	str += ' ';

	for (int i = 0; i<int(str.length()); i++) {
		if (str[i] == '<') {
			while (!dq.empty()) {
				cout << dq.back();
				dq.pop_back();
			}

			while (str[i] != '>') {
				cout << str[i];
				i++;
			}
			cout << str[i];
		}
		else if (str[i]==' ') {
			while (!dq.empty()) {
				cout << dq.back();
				dq.pop_back();
			}
			cout << ' ';
		}
		else {
			dq.push_back(str[i]);
		}
	}

}
