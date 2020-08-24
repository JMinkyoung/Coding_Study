#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void hanoi(int n, int from, int to) {

	if (!n)
		return;
	else {

		//1��, 2��, 3�� ����̰� �� ����� ���� 6�̹Ƿ�
		hanoi(n - 1, from, 6 - from - to);
		printf("%d %d\n", from, to);
		hanoi(n - 1, 6 - from - to, to);
	}

}


int main() {

	int N;
	cin >> N;

	int cnt = 1;

	for (int i = 0; i < N; i++) {
		cnt *= 2;
	}

	cout << cnt - 1 << endl;

	//ó���� ������ ù��°���->����°��� 
	hanoi(N, 1, 3);
	return 0;

}