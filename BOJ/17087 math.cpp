#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int gcd(int a, int b) {
	
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
		return gcd(a, b);
	}
	return a;
}
int main() {

	int n, s;
	cin >> n >> s;

	int result=0;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (i == 0) {
			result = abs(temp - s);
		}
		else {
			result = gcd(result, abs(temp - s));
		}
	}

	cout << result;

}
