#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

/*
* 1. 산술평균 : N개의 수들의 합을 N으로 나눈 값
* 2. 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
* 3. 최빈값 : N개의 수들 중 가장 많이 나타나는 값
* 4. 범위 : N개의 수들 중 최댓값과 최솟값의 차이
*/


//최빈수가 같으면 두번째로 작은 숫자 
bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main() {

	//개수 N 입력
	int N;
	cin >> N;

	int sum = 0;

	//값들 vector에 입력
	vector<int> vec(N);
	vector<pair<int, int> > count(8001, { 8001,0 });

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
		sum += vec[i];
		
		//이부분 다시 확인하기
		count[vec[i] + 4000].first = vec[i];
		count[vec[i] + 4000].second += 1;
	}

	//산술평균
	cout << round(sum/(double)N) << "\n";

	//중앙값
	sort(vec.begin(), vec.end());
	cout << vec[(N / 2)] << "\n";

	//최빈값 
	sort(count.begin(), count.end(), compare);
	if (count[0].second == count[1].second) {
		cout << count[1].first << "\n";
	}
	else
		cout << count[0].first << "\n";

	//범위
	cout << vec.back() - vec.front() << "\n";

	return 0;

	

}
