#include <bits/stdc++.h>
using namespace std;
#define H first
#define N second

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	stack<pair<int, int>> towers;
	int n;
	towers.push({1000000001, 0});
	cin >> n;
	for (int i=1; i<=n; i++) {
		int height;
		cin >> height;
		while (towers.top().H <= height)
			towers.pop();
		cout << towers.top().N << " ";
		towers.push({height, i});
	}
	return 0;
}