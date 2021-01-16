#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <stack>

using namespace std;
stack<char>st;
// A:10 ... Z:35
// A:65(-55) ... Z:90(-55)

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int temp, B;
	int N = 1;
	cin >> N >> B;

	while (N != 0) {
		temp = N % B;
		N = N / B;

		if (temp > 9) {
			st.push((temp +55));
		}
		else {
			st.push((temp+'0'));
		}
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}

}