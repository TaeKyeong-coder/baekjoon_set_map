#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	/*
	�Է� 1 : ����̰� ������ �ִ� ���� ī���� ���� N
	�Է� 2 : ���� ī�忡 ���� ���� (���밪 10,000,000 ����)
	�Է� 3 : 500000������ M
	�Է� 4 : M���� ���� (�Է�2�� ��)
	*/
	int N;
	cin >> N;

	int tmp;

	set<int> card;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		card.insert(tmp);
	}

	/*for (auto i : card) 
		cout << i << " ";*/

	/*for (set<int>::iterator it = card.begin(); it != card.end(); it++) {
		std::cout << *it << " ";
	}*/

	int M;
	cin >> M;

	//vector<int> result;

	for (int i = 0; i < M; i++) {
		cin >> tmp;
		cout << card.count(tmp) << " ";
		//if (card.find(tmp) != card.end()) cout << "1";
		//	//result.push_back(1);
		//else cout << "0";
			//result.push_back(0);
	}

	//set�� �ߺ��� ���� (multiset�� �ߺ� ����) => ������ ���� ��ȯ�ϴ� count�Լ��� ���� ���� ������ 0�̳� 1
}