#include <iostream>
#include <deque>

using namespace std;


int main() {
  deque <int> dq;
  int n;
  cin >>n;
  for (int i=0;i<n;i++){
    string cm;
    cin >> cm;
    if (cm == "push_front"){
      int x;
      cin >> x;
      dq.push_front(x);
    }
    else if (cm == "push_back"){
      int x;
      cin >> x;
      dq.push_back(x);
    }
    else if (cm == "pop_front"){
      if (dq.empty()) cout << -1<<"\n";
      else {
        cout << dq.front() << "\n";
        dq.pop_front();
      }
    }
    else if (cm == "pop_back"){
      if (dq.empty()) cout << -1<<"\n";
      else {
        cout << dq.back() << "\n";
        dq.pop_back();
      }
    }
    else if (cm == "size") cout << dq.size()<<"\n";
    else if (cm == "empty"){
      cout <<dq.empty()<<"\n";
    }
    else if (cm == "front") {
      if (dq.empty()) cout << -1 << "\n";
      else cout << dq.front() << "\n";
    }
    else if (cm == "back") {
      if (dq.empty()) cout << -1 << "\n";
      else cout << dq.back() << "\n";
    }
  }

}