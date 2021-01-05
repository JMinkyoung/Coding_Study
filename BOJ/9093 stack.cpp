#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>

using namespace std;

stack<char>s;

int main() {

	int t; 
	string str, temp;
	cin >> t;

	//버퍼 비워야함(why?)
	cin.ignore();

	for (int i = 0; i < t; i++) {
		getline(cin, str);

		//마지막에 공백 추가
		str += ' ';
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == ' ') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ' ';
			}
			else {
				s.push(str[j]);
			}
		}
		cout << endl;
	}
}

