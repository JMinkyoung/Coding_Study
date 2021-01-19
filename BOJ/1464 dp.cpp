#include <iostream>
#include <stdio.h>
#include <algorithm>

int dp[10000001];

using namespace std;

int solution(int a) {
	for (int i = 2; i <= a; i++) {
		//무조건 한번은 수행하므로
		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0) {
			dp[i] = min(dp[i], 1 + dp[i / 2]);
		}
		if (i % 3 == 0) {
			dp[i] = min(dp[i], 1 + dp[i / 3]);
		}
	}

	return dp[a];
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	dp[1] = 0;
	int X;
	cin >> X;
	cout << solution(X) << endl;
}