#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long dp[201][201];

// 0부터 n 까지의 정수 k 개를 더해서
// 합이 n이 되는 경우의 수
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i <= N; i++) {
		dp[1][i] = 1;
	}

	// dp[a][b]=c -> a개를 더해서 b가 나오는 경우의 수 c
	for (int k = 2; k <= K; k++) {
		for (int n = 0; n <= N; n++) {
			for (int i = 0; i <= n; i++) {
				dp[k][n] += dp[k - 1][i];
			}
			dp[k][n] = dp[k][n] % 1000000000;
		}
	}
	cout << dp[K][N] << endl;

}
