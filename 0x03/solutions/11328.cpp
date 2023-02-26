#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, j;
	string a,b;
	cin >> n;
	
	for (int i =0;i<n;i++) {
		int flag = 1;
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
			if (asc_a[j] != 0){
				flag = 0;
				break;
			}
		}
		if (flag == 0)
			cout << "Impossible\n";
		else
			cout << "Possible\n";
	}
	return 0;
}