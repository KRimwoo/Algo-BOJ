#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int list[202];
  memset(list, 0, sizeof(list));
  int n, tmp, v;
  cin >> n;
  for (int i =0;i<n;i++){
    cin >>tmp;
    list[tmp+100]++;
  }
  cin >> v;
  cout << list[v+100];
  return 0;
}