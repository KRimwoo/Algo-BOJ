#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n;
  cin >>n;
  stack <int> c;
  for (int i =0;i<n;i++){
    int m;
    cin >>m;
    if (m==0){
      c.pop();
    }
    else{
      c.push(m);
    }
  }
  int r=0;
  while(!c.empty()){
    r+=c.top();
    c.pop();
  }
  cout <<r;
}