#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int dp[501][501];

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n;
	int result = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <=i; j++) {
			cin >> dp[i][j];
		}
	}
	dp[1][0] = dp[1][2] = dp[1][1];

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j ==1) {
				dp[i][j] += dp[i - 1][j];
			}
			else if (j == i) {
				dp[i][j] += dp[i - 1][j-1];
			}
			else {
				dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
			}
		}
	}
	for (int i = 1; i <= n;++i) {
		if (result <= dp[n][i]) {
			result = dp[n][i];
		}
	}

	cout << result;
}
