#include <iostream>
#include <stdio.h>
#include <algorithm>

int dp[12];

using namespace std;

int solution(int a) {

	for (int i = 4; i <= a; ++i) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	return dp[a];
}

//오직 1,2,3의 합으로만 나타내야한다.
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	int T,N;
	cin >> T;
	
	for (int i = 0; i < T; ++i) {
		cin >> N;
		cout << solution(N) << "\n";
	}
}