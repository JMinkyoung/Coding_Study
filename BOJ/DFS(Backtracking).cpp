#include <iostream>
#include <stdio.h>
#define MAX 9

using namespace std;


int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void backtracking(int a) {

	if (a == M) { 
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[a] = i;          
			backtracking(a + 1);
			visited[i] = false;
		}
	}
}

int main() {
	
	cin >> N >> M;
	backtracking(0);

}

