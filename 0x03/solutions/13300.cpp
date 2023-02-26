#include <iostream>
using namespace std;

int main() {
  	int ans = 0;
	int list[12] = {};
	int num, cap, s, y;
	cin >> num >> cap;
	for (int i=0; i< num; i++) {
		cin >> s >> y;
		list[(y-1) * 2 + s] += 1;
	}
	for (int i=0; i<12; i++) {
		ans += (list[i] + cap - 1) / cap;
	}
	cout << ans;
	return 0;
}