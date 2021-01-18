#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <stack>

using namespace std;
stack<int>st;
// A:10 ... Z:35
// A:65(-55) ... Z:90(-55)


//A진수 -> 10진수 -> B진수
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int  A, B;
	int temp = 0;
	int m = 0;
	cin >> A>> B;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;

		temp += n * (int)pow(A, m - i - 1);

	}

	while (temp != 0) {
		st.push(temp % B);
		temp = temp / B;
	}
	while (!st.empty()) {
		cout << st.top()<<" ";
		st.pop();
	}

}