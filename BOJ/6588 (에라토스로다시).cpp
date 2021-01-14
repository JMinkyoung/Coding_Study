#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>
using namespace std;

// 소수 판별 함수
bool checkPrime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(num); i++) {
		if ((num % i) == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n=1;
	int num1 = 0;
	int num2 = 0; 
	bool fin = false;
	
	while (n) {
		cin >> n;
		for (int i = 1; i < n/2; i++) {
			num1 = 2 * i + 1;
			num2 = n - num1;
			if (checkPrime(num1) && checkPrime(num2)) {
				cout << n << " = " << num1 << " + " << num2 << "\n";
				fin = true;
				break;
			}
		}
		if (!fin) cout << "Goldbach's conjecture is wrong." << "\n";

		
	}
}

