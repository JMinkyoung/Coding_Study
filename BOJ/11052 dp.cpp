#include <iostream>
#include <stdio.h>
#include <algorithm>

int card[1000];
int dp[1000];

using namespace std;

int solution(int a) {
	dp[1] = card[1];
	for (int i = 2; i <= a; ++i) {
		dp[i] = card[i];
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[j] + dp[i - j]);
		}
	}
	
	return dp[a];
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;
	dp[0] = 0;
	for (int i = 1; i <= N; ++i) {
		cin >> card[i];
	}

	cout << solution(N) << "\n";
	
}