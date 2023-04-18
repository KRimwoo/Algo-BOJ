#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	queue<int> q;
	int n;
	string cmd;
	int input;
	cin >> n;
	for (int i =0; i<n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> input;
			q.push(input);
		}
		else if (cmd == "pop") {
			if (q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << q.front() << "\n";
			q.pop();
		}
		else if (cmd == "size") {
			cout<< q.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << q.empty() << "\n";
		}
		else if (cmd == "front") {
			if (q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << q.front() << "\n";
		}
		else if (cmd == "back") {
			if (q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << q.back() << "\n";
		}
	}
	return 0;
}