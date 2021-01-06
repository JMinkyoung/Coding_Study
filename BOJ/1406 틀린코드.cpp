#include <iostream>
#include <stdio.h>
#include <deque>
#include <stack>
#include <string>

using namespace std;

deque<char>dq; 
deque<char>sdq;

//커서 역할
char cursor = '!';

void goLeft() { //L 명령어

	if (dq.at(0) != cursor) {
		for (int i = 0; i<int(dq.size()); i++) {
			if (dq.at(i) == cursor) {
				for (int j = 0; j < i - 1; j++) {
					sdq.push_back(dq.at(j));
				}
				sdq.push_back(cursor);

				for (int j = i - 1; j<int(dq.size()); j++)
				{
					if (dq.at(j) != cursor) {
						sdq.push_back(dq.at(j));
					}
				}
			}
		}
		dq.swap(sdq);
		sdq.clear();
	}
}
void goRight() { //D 명령어

	if (dq.at(int(dq.size())-1) != cursor) {
		for (int i = 0; i<int(dq.size()); i++) {
			if (dq.at(i) == cursor) {
				for (int j = 0; j < i; j++) {
					sdq.push_back(dq.at(j));
				}
				sdq.push_back(dq.at(i + 1));
				sdq.push_back(cursor);

				for (int j = i+2; j<int(dq.size()); j++) {
					sdq.push_back(dq.at(j));
				}
			}
		}
		dq.swap(sdq);
		sdq.clear();
	}
}
void deleteLeft() { //B 명령어
	if (dq.at(0) != cursor) {
		for (int i = 0; i<int(dq.size()); i++) {
			if (dq.at(i) == cursor) {
				for (int j = 0; j < i - 1; j++) {
					sdq.push_back(dq.at(j));
				}sdq.push_back(cursor);
				for (int j = i + 1; j<int(dq.size()); j++) {
					sdq.push_back(dq.at(j));
				}
			}
		}
		dq.swap(sdq);
		sdq.clear();
	}
}

void addLeft(char c) { //P $ 명령어
	for (int i = 0; i<int(dq.size()); i++) {
		if (dq.at(i) == cursor) {
			for (int j = 0; j < i; j++) {
				sdq.push_back(dq.at(j));
			}
			sdq.push_back(c);
			for (int j = i; j<int(dq.size()); j++) {
				sdq.push_back(dq.at(j));
			}
		}
	}
	dq.swap(sdq);
	sdq.clear();
}
int main() {
	string str, cmd1;
	char cmd2;
	int n;
	cin >> str;
	for (int i = 0; i < int(str.length()); i++) {
		//입력받은 문자열 한글자씩 deque에 push
		dq.push_back(char(str[i]));
	}//마지막에 커서 push
	dq.push_back(cursor);
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd1;
		if (cmd1 == "P") {
			cin >> cmd2;
			addLeft(cmd2);
		}
		else if(cmd1=="L"){
			goLeft();
		}
		else if (cmd1 == "D") {
			goRight();
			
		}
		else if (cmd1 == "B") {
			deleteLeft();
		}
	}

	for (int i = 0; i < int(dq.size()); i++) {
		if (dq.at(i) != cursor) {
			cout << dq.at(i);
		}
	}
}

