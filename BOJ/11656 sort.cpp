#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

string arr[1001];

int main() {

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		arr[i] = str.substr(i);
	}

	//오름차순으로 정렬
	sort(arr, arr + str.length());

	for (int i = 0; i < str.length(); i++) {
		cout << arr[i] << "\n";
	}

}
