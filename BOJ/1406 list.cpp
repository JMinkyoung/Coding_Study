#include <iostream>
#include <stdio.h>
#include <list>
#include <string>

using namespace std;

list<char>l;


int main() {
	string str, cmd1;
	char cmd2;
	int n;
	cin >> str;
	for (int i = 0; i < int(str.length()); i++) {
		//입력받은 문자열 한글자씩 list에 push
		l.push_back(char(str[i]));
	}
	auto cursor = l.end();

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd1;
		if (cmd1 == "P") {
			cin >> cmd2;
			l.insert(cursor, cmd2);
			
		}
		else if(cmd1=="L"){
			if (cursor != l.begin()) {
				cursor--;
			}
		}
		else if (cmd1 == "D") {
			if (cursor != l.end()) {
				cursor++;
			}
			
		}
		else if (cmd1 == "B") {
			if (cursor != l.begin()) {
				cursor--;

				//erase 하게 되면 cursor가 아예 삭제되므로 새로 대입해야한다.
				cursor = l.erase(cursor);
				
			}
		}
	}

	for (char c : l) {
		cout << c;
	}


}

