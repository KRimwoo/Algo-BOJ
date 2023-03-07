#include <iostream>
#include <stack>

using namespace std;


int main() {
  stack <int> stk;
  int n;
  cin >>n;
  for (int i=0;i<n;i++){
    string cm;
    cin >> cm;
    if (cm == "push"){
      int x;
      cin >> x;
      stk.push(x);
    }
    else if (cm == "pop"){
      if (stk.empty()) cout << -1<<"\n";
      else {
        cout << stk.top() << "\n";
        stk.pop();
      }
    }
    else if (cm == "size") cout << stk.size()<<"\n";
    else if (cm == "empty"){
      cout <<stk.empty()<<"\n";
    }
    else if (cm == "top") {
      if (stk.empty()) cout << -1 << "\n";
      else cout << stk.top() << "\n";
    }
  }

}