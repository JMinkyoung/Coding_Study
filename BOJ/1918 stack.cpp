#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

stack<char>st;
stack<char>result;

// 우선순위 */ > +-

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string str;
	cin >> str;
	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			cout << str[i];
		}
		else {
			if (str[i] == '(') {
				st.push(str[i]);
			}
			else if (str[i] == '*' || str[i] == '/') {
				while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
					cout << st.top();
					st.pop();
				}
				st.push(str[i]);
			}
			else if (str[i] == '+' || str[i] == '-') {
				while (!st.empty() && st.top() != '(') {
					cout << st.top();
					st.pop();
				}
				st.push(str[i]);
			}
			else if (str[i] == ')') {
				while (!st.empty() && st.top() != '(') {
					cout << st.top();
					st.pop();
				}
				st.pop();
			}

		}

	}

	// 스택에 남아있는 연산자 출력
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}


}
