#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	int max = 0;
	int* first = new int[N];
	int* result = new int[N] {0, };

	//일반 배열에 값 삽입
	for (int i = 0; i < N; i++) {
		cin >> first[i];
		if (first[i] >= max)
			max = first[i];
	}

	int* count = new int[max] {0, };

	//값 counting 하는 count 배열에 count 값 삽입
	for (int i = 0; i < N; i++) {
		count[first[i] - 1]++;
	}

	//count 배열 값들 누적합으로 변환
	for (int i = 1; i < max; i++) {
		count[i] += count[i - 1];
	}

	for (int i = 0; i < N; i++) {
		result[count[first[i] - 1] - 1] = first[i];
		count[first[i] - 1]--;
	}

	for (int i = 0; i < N; i++) {
		cout << result[i] << endl;
	}

	delete[] first;
	delete[] count;
	delete[] result;
	return 0;

}