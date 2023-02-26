#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int input, tmp;
	int ans = 0;
	int num[10] = {};
	cin >> input;
	while(input > 0){
		tmp = input % 10;
		if (tmp == 6 || tmp == 9) {
			if (num[6] < num[9])
				num[6] += 1;
			else
				num[9] += 1;
		}
		else
			num[tmp] += 1;
		input /= 10;
	}
	for (int i = 0; i <10; i++)
		ans = max(ans, num[i]);
	cout << ans;
	return 0;
}