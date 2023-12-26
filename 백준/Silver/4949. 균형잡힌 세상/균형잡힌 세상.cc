#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  while(true) {
    string word;
    getline(cin, word);
    if(word == ".") break;
    
    stack<char> S;
    bool check = true;
    for(int i = 0; i < word.size(); i++) {
      if(word[i] == '(' ||  word[i] == '[') S.push(word[i]);
      else if(word[i] == ')') {
        if (S.empty() || S.top() != '(') {
          check = false;
          break;
        }
        S.pop(); 
      } else if (word[i] == ']') {
        if (S.empty() || S.top() != '[') {
          check = false;
          break;
        }
        S.pop();
      }
    }
    
    if (!S.empty()) check = false;
    if (check) cout << "yes\n";
    else cout << "no\n";
  }
  return 0;
}
