#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue <int> q;
  int n;
  cin >>n;
  for (int i=0;i<n;i++){
    q.push(i+1);
  }
  int r;
  while(!q.empty()){
    r=q.back();
    q.pop();
    if(!q.empty()){
      int tmp=q.front();
      q.pop();
      q.push(tmp);
    }
  }
  cout <<r;
}