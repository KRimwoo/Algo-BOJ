#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	string str;
	char cmd;
	char ins;
	cin >> str;
	int len = 0;
	list<char> res;
	while (str[len]) {
		res.push_back(str[len]);
		len++;
	}
	auto it = res.end();
	int n;
	cin >> n;
	for (int j = 0; j<n; j++) {
		cin >> cmd;
		if (cmd == 'L' && it != res.begin()) {
			it--;
		}
		else if (cmd == 'D' && it != res.end()) {
			it++;
		}
		else if (cmd == 'B' && it != res.begin()) {
			it--;
			it = res.erase(it); //pointing to the element that followed the last element erased
		}
		else if (cmd == 'P') {
			cin >> ins;
			res.insert(it, ins);
		}
	}
	for (auto c : res) cout << c;
	return 0;
}