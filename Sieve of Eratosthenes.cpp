#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

	while (1) {

		int n;
		cin >> n;
		if (n == 0)
			break;
		int cnt = 0;

		bool* check = new bool[n * 2 + 1];
		fill_n(check, n * 2 + 1, 1);
		check[0] = false;
		check[1] = false;

		for (int i = 2; i <= n * 2; i++) {
			if (check[i] == false)
				continue;
			for (int j = 2 * i; j <= n * 2; j += i) {
				check[j] = false;
			}
		}

		for (int i = n + 1; i <= n * 2; i++) {
			if (check[i] == true) {
				cnt++;
			}
		}

		delete[] check;
		cout << cnt << endl;


	}
}