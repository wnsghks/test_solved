#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string a;
  cin >> a;
  
  int temp = 1;
  int sum = 0;
  bool check = true; // 쌍이 안맞을 경우 종료
  bool sign = true; // true = +. false = *
  stack<char> s;
  for(auto i : a) {
    // 다른문자가 들어올경우 예외 처리
    if(i != '(' && i != '[' && i != ')' && i != ']') {
      check = false;
      break;
    }

    // 입력값
    if(i == '(' || i == '[') {
      s.push(i);
      sign = true;
      if(i == '(') temp *= 2;
      else temp *= 3;
    }
    // ')' 경우 계산
    else if(i == ')') {
      if(s.empty() || s.top() == '[') {
        check = false;
        break;
      }
      else {
        s.pop();
        if(sign) sum += temp;
        sign = false;
        temp /= 2;
      }
    }
    // ']' 경우 계산
    else if(i == ']') {
      if(s.empty() || s.top() == '(') {
        check = false;
        break;
      }
      else {
        s.pop();
        if(sign) sum += temp;
        sign = false;
        temp /= 3;
      }
    }
  }
  
  if(!check || !s.empty()) sum = 0;
  cout << sum;

  return 0;
}
