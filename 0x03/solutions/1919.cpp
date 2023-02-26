#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, j;
	string a,b;
	int ans = 0;
	int asc_a[26] = {};

	cin >> a >> b;
	
	j = 0;
	while (a[j]) {
		asc_a[a[j] - 'a'] += 1;
		j++;
	}
	j = 0;
	while (b[j]) {
		asc_a[b[j] - 'a'] -= 1;
		j++;
	}
	
	for (j = 0; j <26; j++) {
		if (asc_a[j] < 0){
			ans -= asc_a[j];
		}
		else if (asc_a[j] > 0)
			ans += asc_a[j];
	}
	cout << ans;
	return 0;
}