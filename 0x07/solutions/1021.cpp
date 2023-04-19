#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

deque<int> dq;
vector<int> vec;

int def_direction(int tofind)
{
	int right = find(dq.begin(), dq.end(), tofind) - dq.begin();
	int left = dq.end() - find(dq.begin(), dq.end(), tofind);
	if (right <= left)
		return right;
	else
		return left * -1;
}


int main() {
	int n, m, a;
	int res = 0;
	cin >> n >> m;
	for (int i = 1; i<=n; i++)
		dq.push_back(i);
	for (int i = 0; i<m; i++) {
		cin >> a;
		vec.push_back(a);
	}
	for (int i = 0; i<m; i++) {
		int tofind = vec[i];
		int dir = def_direction(tofind);
		if (dir == 0)
			dq.pop_front();
		else if (dir > 0) {
			for (int j=0; j<dir; j++) {
				int front = dq.front();
				dq.pop_front();
				dq.push_back(front);
				res++;
			}
			dq.pop_front();
		}
		else {
			for (int j=0; j>dir; j--) {
				int back = dq.back();
				dq.pop_back();
				dq.push_front(back);
				res++;
			}
			dq.pop_front();
		}
	}
	cout << res;
}