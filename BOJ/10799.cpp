#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>
using namespace std;
stack<char>s;

int main() {

	int total = 0;
	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')' && str[i - 1] == '(') {
			s.pop();
			total += s.size();
		}
		else {
			total++;
			s.pop();
		}
	}
	cout << total;
}
