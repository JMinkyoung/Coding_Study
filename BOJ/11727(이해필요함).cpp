#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int dp[1001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	dp[0] = 1; dp[1] = 1; dp[2] = 3; dp[3] = 4; dp[4] = 11;

	for (int i = 2; i <= n; ++i) {
		//점화식 확실하게 이해가 안됨
		dp[i] = (dp[i - 1] + (dp[i - 2])*2) % 10007;
	}
	
	cout << dp[n];

}
