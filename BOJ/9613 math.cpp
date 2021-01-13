#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int arr[100];

int gcd(int a, int b) {
	
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
		return gcd(a, b);
	}
	return a;
}
int main() {

	int t,n;
	cin >> t;

	for (int i = 0; i < t; i++) {

		//sum의 경우 long long으로 선언해야함
		long long sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum += gcd(arr[j], arr[k]);
			}
		}

		cout << sum << "\n";
	}

}
