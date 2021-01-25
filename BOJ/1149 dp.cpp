#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int dp[3][1001];

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	dp[0][0] = dp[1][0] = dp[2][0] = 0;

	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < 3; j++) {
			cin >> dp[j][i];
		}
	}

	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				dp[j][i] += min(dp[j + 1][i - 1], dp[j + 2][i - 1]);
			}
			else if (j == 1) {
				dp[j][i] += min(dp[j - 1][i - 1], dp[j + 1][i - 1]);
			}
			else {
				dp[j][i] += min(dp[j - 1][i - 1], dp[j - 2][i - 1]);
			}
		}
	}

	cout << min(dp[0][n], min(dp[1][n], dp[2][n]));
}
