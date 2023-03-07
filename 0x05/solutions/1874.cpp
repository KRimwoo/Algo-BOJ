#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int cnt;
	string result = "";
	cin >> cnt;
	stack<int> s;
	int c = 0;
	while (cnt--) {
		int t;
		cin >> t;
		if (c < t) {
			while (c != t) {
				s.push(++c);
				result += "+\n";
			}
			s.pop();
			result += "-\n";
		} else {
			if (!s.empty()) {
				if (s.top() == t) {
					s.pop();
					result += "-\n";
				} else {
					cout << "NO";
					return 0;
				}
			}
		}
	}
	cout << result;
}