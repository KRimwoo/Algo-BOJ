#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

int main() {
  int n, len;
  string cmd, v;
  deque<int> d;
  cin >> n;
  for (int i=0; i<n;i++){
    d.clear();
    cin >> cmd;
    cin >> len;
    cin >> v;
    int idx =1;
    string stmp="";
    int res = 1;
    while(v[idx] != ']'){
      if(v[idx] == ','){
        d.push_back(stoi(stmp));
        stmp="";
      }
      else{
        stmp += v[idx];
      }
      idx++;
    }
    if(stmp!=""){d.push_back(stoi(stmp));}

    int r=0;
    for(int j =0; j<cmd.length();j++){
      if(cmd[j]=='R'){
        r = !r;
        
      }
      else{
        if(d.empty()){
          cout <<"error"<<endl;
          res = 0;
          break;
        }
        else{
          if(r){
            d.pop_back();
          }
          else{
            d.pop_front();
          }
        }
      }
    }
    if(res){
      cout << "[";
      if (r){
        for(auto it=d.end()-1; it >= d.begin(); it--){
          if(it == d.begin()){
            cout<< *it;
          }
          else{
            cout << *it << ",";
          }
        }
      }
      else{
        for(auto it=d.begin(); it != d.end(); it++){
          if(it == d.end()-1){
            cout<< *it;
          }
          else{
            cout << *it << ",";
          }
        }
      }
      
      cout << "]" << endl;
    }
  }
  return 0;
}