#include <iostream>
#include <stdio.h>
#include <string>
#include <deque>
using namespace std;

deque<int>dq;


//시간초과 해결 못함
int main() {

	int n,num,temp; 
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		dq.push_back(num);
	}

	while (!dq.empty() && dq.size()>1) {
		for (int i = 1; i < dq.size(); i++) {
			temp = dq.at(0);
			if (dq.at(i) > temp) {
				cout << dq.at(i) << " ";
				dq.pop_front();
				break;
			}
			else {
				if (i == dq.size() - 1) {
					cout << -1 << " ";
					dq.pop_front();
					break;
				}

			}
		}
	}
	if (dq.size() == 1) {
		cout << -1 << " ";
	}
}
