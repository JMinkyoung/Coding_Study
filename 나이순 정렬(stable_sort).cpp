#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
/*
* 나이순으로 먼저 정렬하고
* 나이가 같으면 가입한 순으로 출력
* (stable_sort)
*/
bool compare(pair<int, string>a, pair<int, string>b) {

	return a.first < b.first;
}

int main() {

	int N;
	cin >> N;

	vector<pair<int, string> > vec(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i].first >> vec[i].second;
	}

	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}
	return 0;
}