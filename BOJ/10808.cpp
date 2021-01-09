#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int alpa[27];
//a - z : 97 - 122

int main() {
	
	string str; 
	getline(cin, str);

	for (int i = 0; i < int(str.length()); i++) {
		alpa[str[i] - 97]++;
	}
	
	for (int i = 0; i < 26; i++) {
		cout << alpa[i] << " ";
	}
}
