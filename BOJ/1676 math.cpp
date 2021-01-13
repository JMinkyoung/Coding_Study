#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// 팩토리얼 값을 구하고 0의 개수를 세는 문제가 아님
// 0은 2와 5를 곱하면 만들어짐
// 0<= n <=500

int main() {
	int n;
	int cnt = 0;
	cin >> n;

	cnt = n / 5 + n / 25 + n / 125;

	cout << cnt;

}
