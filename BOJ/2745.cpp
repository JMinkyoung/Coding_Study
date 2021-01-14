#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

// A:10 ... Z:35
// A:65(-55) ... Z:90(-55)

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string N; 
	int B, temp;
	long long result = 0;
	int cnt = 0;
	cin >> N >> B;
	
	
	for (int i = (int)N.length()-1; i>=0; i--) {
		temp = N[i];
		if (N[i] >= 'A' && N[i] <= 'Z') {
			result += (temp - 'A'+10) * ((int)pow(B, cnt));
		}
		else {
			result += (temp-'0') * ((int)pow(B, cnt));
		}
		cnt++;
	}

	cout << result<<"\n";

}

