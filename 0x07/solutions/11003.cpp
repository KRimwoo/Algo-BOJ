#include <iostream>
#include <deque>
using namespace std;

deque<pair<int, int>> dq;
//값이 들어오면 앞L개를 보고 최소값 뽑는다 들어온 값 push_back예정
//dq에는 인덱스 순서 정렬 + 값 오름차순 정렬
//dq를 뒤에서부터 검사해서 지금 들어온 값보다 같거나 큰 수가 dq에 들어있으면 삭제 후 push_back(오름차순 정렬됨)
//dq를 앞에서 부터 검사해 i-L안에 들어오지 않은 필요없는 값들 삭제
//최종 front()가 정답값

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int m, l;
	cin >> m >> l;
	for (int i=0; i<m; i++) {
		int n;
		cin >> n;
		//
		while(!dq.empty() && dq.back().first >= n)
			dq.pop_back();
		dq.push_back(make_pair(n, i));
		while(!dq.empty() && dq.front().second <= i-l)
			dq.pop_front();
		cout << dq.front().first << " ";
	}
	return 0;
}