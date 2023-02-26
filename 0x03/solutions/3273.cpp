#include <iostream>
//#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	/*
	int n, input, output, i, j;
	int ans = 0;
	vector<int> vec;
	cin >> n;
	for (i = 0; i< n; i++) {
		cin >> input;
		vec.push_back(input);
	}
	cin >> output;
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (vec[i] + vec[j] == output)
				ans++;
		}
	}
	cout << ans;
	*/ //시간초과! 시간복잡도 -> O(n**2)

	//시간복잡도 O(n)
	int n, output;
	int ans = 0;
	int input[1000001] = {};
	bool check[2000001];
	cin >> n;
	for (int i = 0; i< n; i++)
		cin >> input[i];
	cin >> output;
	for (int i =0; i<n; i++) {
		if (output - input[i] > 0 && check[output - input[i]])
			ans++;
		check[input[i]] = true;
	}
	cout << ans;
	return 0;
}