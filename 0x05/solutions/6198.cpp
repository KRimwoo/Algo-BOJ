#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	stack<int> towers;
	int n;
	long long ans = 0;
	cin >> n;
	while(n--) {
		int height;
		cin >> height;
		while(!towers.empty() && towers.top() <= height) {
			towers.pop();
		}
		ans += towers.size();
		towers.push(height);
	}
	cout << ans;
	return 0;
}