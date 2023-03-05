#include <iostream>
#include <list>
using namespace std;


int main() {
    int n,k;
	cin >> n >> k;
	list<int> li;
	for (int i = 1; i<=n ; i++) {
		li.push_back(i);
	}
	k--;
	int idx = k;
	int total = n;
	cout << "<";
	while(total) {
		while (idx >= total) idx -= total;
		auto it = li.begin();
		for (int i=0;i<idx;i++) it++;
		cout << *it;
		li.erase(it);
		if (!li.empty()) cout << ", ";
		total--;
		idx += k;
	}
	cout << ">";
}