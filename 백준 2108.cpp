#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

/*
* 1. ������ : N���� ������ ���� N���� ���� ��
* 2. �߾Ӱ� : N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
* 3. �ֺ� : N���� ���� �� ���� ���� ��Ÿ���� ��
* 4. ���� : N���� ���� �� �ִ񰪰� �ּڰ��� ����
*/


//�ֺ���� ������ �ι�°�� ���� ���� 
bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main() {

	//���� N �Է�
	int N;
	cin >> N;

	int sum = 0;

	//���� vector�� �Է�
	vector<int> vec(N);
	vector<pair<int, int> > count(8001, { 8001,0 });

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
		sum += vec[i];
		
		//�̺κ� �ٽ� Ȯ���ϱ�
		count[vec[i] + 4000].first = vec[i];
		count[vec[i] + 4000].second += 1;
	}

	//������
	cout << round(sum/(double)N) << "\n";

	//�߾Ӱ�
	sort(vec.begin(), vec.end());
	cout << vec[(N / 2)] << "\n";

	//�ֺ� 
	sort(count.begin(), count.end(), compare);
	if (count[0].second == count[1].second) {
		cout << count[1].first << "\n";
	}
	else
		cout << count[0].first << "\n";

	//����
	cout << vec.back() - vec.front() << "\n";

	return 0;

	

}
