#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>

using namespace std;

// 문자열을 string으로 넘겨 받은 후에
// char 형식으로 stack에 넣고 규칙 확인
// '(' 일땐 push, ')' 일땐 pop

bool checkVPS(string str) {
	stack<char>s;

	for (int i = 0; i < (int)str.length(); i++) {
		char c = str.at(i);

		if (c == '(') {
			s.push(c);
		}
		else {
			
			if (!s.empty()) {
				s.pop();
			}
			//'('를 만나 pop 해야하는데 스택이 이미 비어있으면 false return
			else {
				return false;
			}
		}
	}

	//비어 있으면 VPS, 아직 스택에 남아있으면 일반 문자열
	return s.empty();

}
int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		if (checkVPS(str)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

}

