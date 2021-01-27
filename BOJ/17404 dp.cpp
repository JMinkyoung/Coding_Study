#include <iostream>
#include <stdio.h>
#include<string.h>
#include <algorithm>
#define MAX 1001

int cost[MAX][3];
int dp[MAX][3];

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n;
	int result = 999999;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}

	//처음집의 색을 결정하는 for문
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				dp[1][j] = cost[1][j];
			}
			else {
				dp[1][j] = 999999;
			}
		}
		for (int j = 2; j <= n; j++) {
			dp[j][0] = cost[j][0] + min(dp[j - 1][1], dp[j - 1][2]);
			dp[j][1] = cost[j][1] + min(dp[j - 1][0], dp[j - 1][2]);
			dp[j][2] = cost[j][2] + min(dp[j - 1][0], dp[j - 1][1]);
		}

		for (int j = 0; j < 3; j++) {
			if (j != i) {
				result = min(result, dp[n][j]);
			}
		}

	}

	cout << result << "\n";

}