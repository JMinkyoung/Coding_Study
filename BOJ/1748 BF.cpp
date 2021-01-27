#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N;
	int result = 0;
	cin >> N;
	
	if (N < 10) {
		result = 1 * N;
	}
	else if (N>=10 && N<=99) {
		result = 1 * 9 + 2 * (N - 9);
	}
	else if (N >= 100 && N<=999) {
		result = 1 * 9 + 2 * 90 + 3 * (N - 99);
	}
	else if (N>=1000 && N<=9999) {
		result = 1 * 9 + 2 * 90 + 3 * 900 + 4 * (N - 999);
	}
	else if (N>=10000 && N<=99999) {
		result = 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * (N - 9999);
	}
	else if (N >= 100000 && N <= 999999) {
		result = 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * 90000 + 6 * (N- 99999);
	}
	else if (N >= 1000000 && N <= 9999999) {
		result = 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * 90000 + 6 * 900000 + 7 * (N - 999999);

	}
	else if (N >= 10000000 && N <= 99999999) {
		result = 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * 90000 + 6 * 900000 + 7 * 9000000 + 8 * (N - 9999999);
	}
	else if (N == 100000000) {
		result = 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * 90000 + 6 * 900000 + 7 * 9000000 + 8 * 90000000 + 9;

	}
	cout << result;
}