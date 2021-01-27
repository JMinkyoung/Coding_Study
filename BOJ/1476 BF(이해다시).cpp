#include <iostream>
#include <stdio.h>

using namespace std;

int m_E = 15;
int m_S = 28;
int m_M = 19;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	// E:15, S:28, M:19
	int E, S, M;
	cin >> E >> S >> M;

	int year = 1;
	while (1) {
		int y_E = (year - 1) % m_E + 1; 
		int y_S = (year - 1) % m_S + 1;
		int y_M = (year - 1) % m_M + 1;

		if (y_E == E && y_S == S &&y_M == M) {
			cout << year << "\n";
			break;
		}

		year++;
	}
	
}