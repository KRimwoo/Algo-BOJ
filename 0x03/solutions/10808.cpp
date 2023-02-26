#include <iostream>
#include <string>
using namespace std;

int alph_list[26];
char input_str[101];
int i, j;

int main()
{
	for (i = 0; i<26; i++){
		alph_list[i] = 0;
	}
	cin >> input_str;
	i = 0;
	while (input_str[i])
	{
		alph_list[input_str[i] - 'a'] += 1;
		i++;
	}
	for (i = 0; i<26; i++) {
		cout << alph_list[i] << " ";
	}
	return 0;
}