#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>
using namespace std;

int f[1000001];
int arr[1000001];
int answer[1000001];

stack<int>s;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		f[arr[i]]++;
	}
	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && f[arr[i]] >= f[s.top()]) {
			s.pop();
		}
		if (s.empty()) {
			answer[i] = -1;
			s.push(arr[i]);
		}
		else {
			answer[i] = s.top();
			s.push(arr[i]);
		}
	}

	for (int i = 0; i < N; i++) {
		cout << answer[i] << " ";
	}


}
