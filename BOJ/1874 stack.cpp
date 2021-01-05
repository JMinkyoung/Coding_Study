#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>
#include <vector>
using namespace std;

stack<int>s;
int arr[100001];
//출력할 정답을 위한 vector
vector<char> v;
int main() {

	int n; int j = 0;
	int temp = 1;
	cin >> n;

	//배열에 수열 넣기
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	//1부터 n까지 비교
	for (int i = 1; i <= n; i++) {
		s.push(i);
		v.push_back('+');

		while (!s.empty() && s.top() == arr[j]) {
			s.pop();
			v.push_back('-');
			j++;
		}
	}

	if (!s.empty()) {
		cout << "NO\n";
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << "\n";
		}
	}
}

