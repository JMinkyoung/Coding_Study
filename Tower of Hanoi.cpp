#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

//하노이 탑 구현
void hanoi(int n, int from, int to, int by) {

	if (!n)
		return;
	else {
		hanoi(n - 1, from, by, to);
		printf("%d %d\n", from, to);
		hanoi(n - 1, by, to, from);
	}
}


int main() {

	int N;
	cin >> N;

	int cnt = 1;
	
	//원판의 이동 횟수
	for (int i = 0; i < N; i++) {
		cnt *= 2;
	}

	cout << cnt - 1 << endl;
	hanoi(N, 1, 3, 2);
	
	return 0;
	
}