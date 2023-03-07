#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string cm;
    cin >> cm;
    if (cm == "push") {
      int x;
      cin >> x;
      q.push(x);
    } else if (cm == "pop") {
      if (q.empty())
        cout << -1 << "\n";
      else {
        cout << q.front() << "\n";
        q.pop();
      }
    } else if (cm == "size")
      cout << q.size() << "\n";
    else if (cm == "empty") {
      cout << q.empty() << "\n";
    } else if (cm == "front") {
      if (q.empty())
        cout << -1 << "\n";
      else
        cout << q.front() << "\n";
    } else if (cm == "back") {
      if (q.empty())
        cout << -1 << "\n";
      else
        cout << q.back() << "\n";
    }
  }
  return 0;
}