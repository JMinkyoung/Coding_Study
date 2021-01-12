#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int N = 100;

int main() {
	
	string str;
	int under, upper, num, space;

	for (int i = 0; i < N; i++) {
		under = 0; upper = 0; num = 0; space = 0;
		getline(cin, str);

		//입력 없이 enter 입력되면 프로그램 종료 -> 추가해야 정답
		if (str.length() == 0) {
			break;
		}
		for (int j = 0; j < (int)str.length(); j++) {
			if (str[j] >= 'A' && str[j] <= 'Z') {
				upper++;
			}
			else if (str[j] >= 'a' && str[j] <= 'z') {
				under++;
			}
			else if (str[j] >= '0' && str[j] <= '9') {
				num++;
			}
			else if (str[j] == ' ') {
				space++;
			}

		}

		cout << under << " " << upper << " " << num << " " << space << "\n";
	}

}
