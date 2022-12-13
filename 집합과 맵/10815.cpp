#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	/*
	입력 1 : 상근이가 가지고 있는 숫자 카드의 개수 N
	입력 2 : 숫자 카드에 적힌 정수 (절대값 10,000,000 사이)
	입력 3 : 500000이하의 M
	입력 4 : M개의 정수 (입력2와 비교)
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

	//set은 중복이 없음 (multiset은 중복 가능) => 원소의 개수 반환하는 count함수를 쓰면 답은 무조건 0이나 1
}