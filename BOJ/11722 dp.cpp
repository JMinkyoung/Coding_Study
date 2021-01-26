#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int dp[1001];
int arr[1001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		dp[i] = 1;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i - 1; j >= 0; --j) {
			if (arr[i] < arr[j] && dp[i] <= dp[j]) {
				dp[i] = dp[j] + 1;
			}
		}
	}
	int result = 0;

	for (int i = 0; i < n; ++i) {
		if (result < dp[i]) result = dp[i];
	}

	cout << result;

}
