#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>
using namespace std;

stack<int>s;
int arr[1000001];
int answer[1000001];


int main() {
	int N;
	cin >> N;

	//1. 배열에 입력받음
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	//2. 뒤에서부터 검사
	for (int i = N - 1; i >= 0; i--) {

		while (!s.empty() && s.top() <= arr[i]) {
			s.pop();
		}
		if (s.empty()) {
			answer[i] = -1;
			s.push(arr[i]);
		}
		//s.top() > arr[i]
		else {
			answer[i] = s.top();
			s.push(arr[i]);
		}
	}

	//3. answer 출력
	for (int i = 0; i < N; i++) {
		cout << answer[i] << " ";
	}
}
