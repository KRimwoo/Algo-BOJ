#include <iostream>
using namespace std;

int main() {
  int a,b,c,s;
  int nl[10]={0,0,0,0,0,0,0,0,0,0};
  cin >> a >>b >> c;
  s = a*b*c;
  while (s>0){
    nl[(s%10)]++;
    s =s/10;
  }
  for (int i =0;i<10;i++){
    cout << nl[i]<<endl;
  }
}