#include <iostream>
#include <stdio.h>
#include <queue>
#include <string.h>
using namespace std;

const int MAX = 1001;
int arr[MAX][MAX];
bool visited[MAX];
int n, m, v;

//bfs¸¦ À§ÇÑ queue
queue<int> q;

void dfs(int start) {

	cout << start << " ";

	for (int i = 1; i <= n; i++) {
		if (arr[start][i] && !visited[i]) {
			visited[i] = true;
			dfs(i);
		}
	}

}

void bfs(int start) {

	visited[start] = true;
	q.push(start);


	while (!q.empty()) {

		start = q.front();
		cout << start << " ";

		q.pop();

		for (int i = 1; i <= n; i++) {
			if (arr[start][i] && !visited[i]) {
				q.push(i);
				visited[i] = true;
			}
		}

	}
}

int main() {

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	visited[v] = true;
	dfs(v);

	cout << endl;

	memset(visited, false, sizeof(visited));

	bfs(v);
}

