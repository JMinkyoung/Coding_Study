#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int dp[3][100001];
int mod = 9901;
//전줄에 없으면 dp[0], 왼쪽에 있으면 dp[1], 오른쪽 dp[2]
int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;

	dp[0][0] = dp[1][0] = dp[2][0] = 1;
	
	for (int i = 1; i <N; i++) {
		dp[0][i] = (dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1])%mod;
		dp[1][i] = (dp[0][i - 1] + dp[2][i - 1])%mod;
		dp[2][i] = (dp[0][i - 1] + dp[1][i - 1])%mod;
	}

	cout << (dp[0][N-1] + dp[1][N-1] + dp[2][N-1])%mod;

}
