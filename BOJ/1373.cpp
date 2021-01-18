#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string str;
	cin >> str;

	int len = str.length();
	int cnt = 0;

	if (len % 3 == 1) {
		cout << str[0];
		cnt = 1;
	}
	else if (len % 3 == 2) {
		cout << (str[0] - '0') * 2 + (str[1] - '0');
		cnt = 2;
	}

	for (int i = cnt; i < len; i += 3) {
		cout << ((str[i] - '0') * 4) + ((str[i + 1] - '0') * 2) + (str[i + 2] - '0');
	}

	
}
