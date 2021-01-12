#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


long long makeNum(string a, string b) {

	long long result = 0;
	string temp;
	temp = a + b;
	result = stoll (temp);

	return result; 
}
int main() {

	string  A, B, C, D;
	cin >> A >> B >> C >> D;

	cout << makeNum(A, B)+makeNum(C, D);

}
