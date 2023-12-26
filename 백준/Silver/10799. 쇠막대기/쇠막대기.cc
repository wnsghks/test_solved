#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string a;
  cin >> a;
  
  int sum = 0;
  bool check = true;
  stack<char> s;
  for(auto i : a) {
    if(i == '(') {
      s.push(i);
      check = true;
    } 
    else if(i == ')') {
      s.pop();
      if(check) sum += s.size();
      else sum += 1;
      check = false;
    } 
  }

  cout << sum << '\n';

  return 0;
}
