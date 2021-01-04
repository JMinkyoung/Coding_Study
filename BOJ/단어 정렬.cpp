#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

/* 
* 길이가 짧은 것 부터
* 길이가 같으면 사전 순으로
*/

bool compare(string a, string b) {

	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}


int main() {

	int N;
	cin >> N;

	vector<string> str;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;

		if (find(str.begin(), str.end(), temp) == str.end()) {
			str.push_back(temp);
		}
	}

	sort(str.begin(), str.end(), compare);

	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << "\n";
	}

	return 0;
}